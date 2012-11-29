//
//  ALResponse.h
//  Alohar
//
//  Created by Sam Warmuth on 2/23/12.
//  Copyright (c) 2011-2012 Alohar Mobile Inc.. All rights reserved.
//

#import <Foundation/Foundation.h>
@class ALResponse, ALMotionState;

enum {
    kALRequestTypeUserStays,
    kALRequestTypePlaces,
    kALRequestTypeStayDetail,
    kALRequestTypePlaceDetail,
    kALRequestTypeCorrectUserStay,
    kALRequestTypeAddUserStay,
    kALRequestTypeDeleteUserStay,
    kALRequestTypePersonalPlaces,
};

typedef enum {
    kErr_NETWORK,
    kErr_SERVER,
    kErr_REQUEST
} errorCode;

typedef NSUInteger ALRequestType;

static NSString * const NSAloharErrorDomain = @"ALOHAR Error";

/*!
 ALResponse class declare a common protocol to process
 Alohar response. 
 
 The response has three main parts:
 
 + timeStamp The time the response is returned. 
 + requestType The type of the request type. 
 + objects The payload of the response
 
 
 ALResponse has following request types:
    
    enum {
        kALRequestTypeUserStays,
        kALRequestTypePlaces,
        kALRequestTypeStayDetail,
        kALRequestTypePlaceDetail,
        kALRequestTypeCorrectUserStay,
        kALRequestTypeAddUserStay,
        kALRequestTypeDeleteUserStay,
    }
 
 */
@interface ALResponse : NSObject

/*!
 An NSDate that is set to the time the request was received from the server.
 */
@property (strong) NSDate *timeStamp;
/*!
 The objects returned from this call. Depending on the call, this is an NSMutableArray of:
  
     kALRequestTypeUserStays
         ALUserStay object(s)
     kALRequestTypePlaces
         ALPlace object(s)
     kALRequestTypeStayDetail
         ALUserStay object(s)
     kALRequestTypePlaceDetail
         ALPlace Object(s)
    kALRequestTypeCorrectUserStay
        ALUserStay object
    kALRequestTypeAddUserStay
        ALUserStay object

 Following calls will return Nil:
    kALRequestTypeDeleteUserStay
 */
@property (nonatomic, strong) NSMutableArray *objects;
/*!
 This is the type identifier for the request. Use this to determine what class of object is in the objects array.
 */
@property ALRequestType requestType;


@end
