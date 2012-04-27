//
//  ADPlaceDetailViewController.h
//  aloharDemo
//
//  Created by Jianming Zhou on 4/25/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Alohar/Alohar.h>
#import <Alohar/ALUserStay.h>
#import "ADPlaceCandidatesViewController.h"

@interface ADPlaceDetailViewController : UIViewController <UIAlertViewDelegate, ADPlaceCandidatesViewControllerDelegate>
@property (weak, nonatomic) IBOutlet UILabel *idLabel;

@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *durationLabel;
@property (weak, nonatomic) IBOutlet UILabel *locationLabel;

@property (nonatomic, strong) ALUserStay *stay;

- (IBAction)deleteUserStay:(id)sender;
- (void)refresh;

@end
