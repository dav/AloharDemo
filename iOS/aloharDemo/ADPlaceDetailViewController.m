//
//  ADPlaceDetailViewController.m
//  aloharDemo
//
//  Created by Jianming Zhou on 4/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "ADPlaceDetailViewController.h"
#import "ADPlaceCandidatesViewController.h"

@interface ADPlaceDetailViewController ()

@end

@implementation ADPlaceDetailViewController
@synthesize idLabel;
@synthesize nameLabel;
@synthesize durationLabel;
@synthesize locationLabel;
@synthesize stay;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)updateUI:(ALUserStay *)aStay
{
    if (aStay) {
        self.nameLabel.text = aStay.selectedPlace.name;
        NSDate *startTime = [NSDate dateWithTimeIntervalSince1970:aStay.startTime];
        NSDate *endTime = [NSDate dateWithTimeIntervalSince1970:aStay.endTime];
        NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
        [dateFormatter setDateFormat:@"MMM d h:mma"];
        self.durationLabel.text = [NSString stringWithFormat:@"%@ to %@", [dateFormatter stringFromDate:startTime], [dateFormatter stringFromDate:endTime]];
        self.idLabel.text = [NSString stringWithFormat:@"ID = %d", aStay.stayID];
        self.locationLabel.text = [NSString stringWithFormat:@"[%f,%f]", aStay.centroidLocation.coordinate.latitude, aStay.centroidLocation.coordinate.longitude];
    }
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self refresh];
}

- (void)refresh
{
    //the stay has detail info alreay, 
    //here just show case how to fetch stay detail using stay id
    if (self.stay) {
        [Alohar getDetailsForStay:self.stay.stayID completion:^(ALResponse *response, NSError *error) {
            if (error) {
                NSLog(@"Error %@", error);
                UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Error" message:[error description] delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil, nil];
                [alert show];
                return;
            }
            
            ALUserStay *aStay = [response.objects lastObject];
            dispatch_async(dispatch_get_main_queue(), ^{
                [self updateUI:aStay];
            });

        }];
    }
}


- (void)viewDidUnload
{
    [self setNameLabel:nil];
    [self setDurationLabel:nil];
    [self setIdLabel:nil];
    [self setLocationLabel:nil];
    [super viewDidUnload];
    // Release any retained subviews of the main view.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}


- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if ([[segue identifier] isEqualToString:@"showCandidates"]){
        ADPlaceCandidatesViewController *destinationView = segue.destinationViewController;
        destinationView.stay = self.stay;
        [destinationView setDelegate:self];
    } 
    
}
- (IBAction)deleteUserStay:(id)sender {
    if (self.stay) {
        NSString *message = [NSString stringWithFormat:@"Are you sure to delete this user stay:\n%@",self.stay.selectedPlace.name];
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Warning" message:message delegate:self cancelButtonTitle:@"No" otherButtonTitles:@"Yes", nil];
        [alert show];
    }
}

// Called when a button is clicked. The view will be automatically dismissed after this call returns
- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex {
    switch (buttonIndex) {
        case 0:
            break;
        case 1:
            [Alohar deleteStay:self.stay.stayID completion:^(ALResponse *response, NSError *error) {
                [self.navigationController popViewControllerAnimated:YES];
            }];
            break;
    }
}

- (void)userStayUpdated 
{
    [self refresh];
}


@end
