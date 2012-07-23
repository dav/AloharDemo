//
//  ALMotionState.h
//  Alohar
//
//  Created by Sam Warmuth on 2/23/12.
//  Copyright (c) 2011-2012 Alohar Mobile Inc.. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ALMotionStateStationary                     0               
#define ALMotionStateWalking                        1               
#define ALMotionStateSmoothMoving                   2               
#define ALMotionStateNoData                         3               
#define ALMotionStateRotation                       4                  

/*!
 ALMotionState class represents the motion state of the device. The state
 captures the motion state by smoothing raw accecelometer data. These states
 describe smoothed raw motion data. For a higher-level user state, see ALMobileState.
   
 @warning This API is still beta quality. Feedback is welcome: developer@alohar.com

 */
@interface ALMotionState : NSObject

/*!
 We support following motion states:

    ALMotionStateStationary: 
        The device is not moving. e.g. device is put on desk
    ALMotionStateWalking: 
        The device is moving with small regular shakes, e.g device in user's pocket when user is walking
    ALMotionStateSmoothMoving: 
        The device is moving on a smooth surface. e.g. sliding on a desk or driving on highway
    ALMotionStateRotation: 
        The device has significant movement. e.g Waving or Rotating.
    ALMotionStateNoData: 
        Initial unknown state.
 */
@property (nonatomic, strong) NSNumber *state;

/*!
 */
- (NSString *)stateDescription;

@end
