//
//  ALMobileState.h
//  Alohar
//
//  Created by Jianming Zhou on 5/1/12.
//  Copyright (c) 2012 Alohar Mobile Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ALMobileStateUnknown            0
#define ALMobileStateNotMoving          1
#define ALMobileStateSlowMoving         2
#define ALMobileStateFastMoving         3

/*!
 ALMobileState captures a high-level movement state of a mobile device which 
 is different from lower level motion state like ALMotionState. It is the 
 decision state Alohar SDK surfaced out based on various senor data like 
 accecelometer, location, wifi etc.
 
 Imagine you leave your home in the morning, drive to your company campus then
 walk to your office. The ALMobileState will capture the major movement state in between.
 Using ALMobileStateDelegate, user will recieve updates from ALMobileStateNotMoving 
 to ALMobileStateFastMoving shortly after user is driving, updates from 
 ALMobileStateFastMoving to ALMobileStateSlowMoving after user arrives company
 campus and starts to walk to the office, and updates from ALMobileStateSlowMoving
 to ALMobileStateNotMoving once user arrives the office.
 
 In general, slow moving is anything like walking or biking or low speed driving. 
 Fast moving usually means high speed driving. Different from motion state, mobile 
 state will skip small state changes in between. For example, if user drives and 
 stops at red light for short time, ALMotionDelegate might surface the stationary 
 motion state, but ALMobileStateDelgate might treat it still fast moving and 
 skip the change completely.
 
 Currently, we support following mobile state:
 
    ALMobileStateUnknown
        Initial unknown state
    ALMobileStateNotMoving
        Users are at a user stay. Users might walk inside the user stay.
    ALMobileStateSlowMoving
        Users are on commute and users are moving at a relative slow speed like walking, biking or slow driving.
    ALMobileStateFastMoving         
        Users are no commute and users are moving at high speed like high way driving.
 
 */
@interface ALMobileState : NSObject

/*!
 */
@property (nonatomic, strong) NSNumber *state;

/*!
 */
 - (NSString *)stateDescription;
@end
