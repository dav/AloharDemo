//
//  ADAppDelegate.h
//  aloharDemo
//
//  Created by Sam Warmuth on 2/23/12.
//  Copyright (c) 2012 Alohar Mobile Inc.. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Alohar/Alohar.h>
#import <Alohar/ALLog.h>

@interface ADAppDelegate : UIResponder <UIApplicationDelegate, ALSessionDelegate, ALLogDelegate>

@property (strong, nonatomic) UIWindow *window;


@end
