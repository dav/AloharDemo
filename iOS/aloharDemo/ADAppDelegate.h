//
//  ADAppDelegate.h
//  aloharDemo
//
//  Updated by Jianming Zhou on 9/14/2012
//  Copyright (c) 2012 Alohar Mobile Inc.. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Alohar/Alohar.h>
#import <Alohar/ALLog.h>

@interface ADAppDelegate : UIResponder <UIApplicationDelegate, ALSessionDelegate, ALLogDelegate, ALUserStayDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) NSMutableArray *events;


@end
