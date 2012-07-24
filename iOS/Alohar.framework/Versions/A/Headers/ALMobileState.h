//
//  ALMobileState.h
//  Alohar
//
//  Created by Jianming Zhou on 5/1/12.
//  Copyright (c) 2011-2012 Alohar Mobile Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ALMobileStateUnknown            0
#define ALMobileStateNotMoving          1
#define ALMobileStateSlowMoving         2
#define ALMobileStateFastMoving         3

/*!
 ALMobileState captures the high-level movement state of the user's device. 
 
 While ALMotionState provides near-instant motion state of the user's device,
 ALMobileState provides a more stable and reliable indicator of the type of
 action (sitting, walking, driving, etc) the user is currently performing.
 
 ALMobileState's state is based on data from various sensors, including 
 accelerometer, location, and wifi.
 
 Imagine you leave your home in the morning, drive 10 minutes to your company campus, and then
 walk to your office. The ALMobileState will capture each major motion state.
 
    Start      (At Home)                          ALMobileStateNotMoving
    ~1-2 min   (Leaving home, getting into car)   ALMobileStateSlowMoving
    ~10 min    (Driving on Highway to work)       ALMobileStateFastMoving
    ~1-2 min   (Park car, walk into work)         ALMobileStateSlowMoving
    end        (At Work)                          ALMobileStateNotMoving

 
 
 In general, slow moving is anything like walking or biking or low speed driving. 
 Fast moving usually means high speed driving. As opposed to from ALMotionState, ALMobileState 
 will skip small state changes in between. For example, if user drives and 
 stops at red light for short time, ALMotionDelegate might surface the stationary 
 motion state, but ALMobileStateDelgate will likely treat it as still fast moving and 
 skip the change completely.
 
 @warning This API is still beta quality. Feedback is welcome: developer@alohar.com

 */
@interface ALMobileState : NSObject

/*!
 Currently, we support following mobile states:
 
     ALMobileStateUnknown
         Initial unknown state
     ALMobileStateNotMoving
         User is at a user stay. The user may be moving within a place, but is not moving *between* places.
     ALMobileStateSlowMoving
         User is traveling between user stays at a relatively slow speed like walking, biking or slow driving.
     ALMobileStateFastMoving         
         Users are moving at high speed like high way driving.
 */
@property (nonatomic, strong) NSNumber *state;

/*!
 */
 - (NSString *)stateDescription;
@end
