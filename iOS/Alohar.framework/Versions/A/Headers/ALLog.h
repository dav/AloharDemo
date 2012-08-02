//
//  ASLog.h
//  Alohar
//
//  Created by Jianming Zhou on 7/30/12.
//  Copyright (c) 2011-2012 Alohar Mobile Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/** @name Delegate */

/*!
 * Protocol to listen SDK's logs
 */
@protocol ALLogDelegate <NSObject>

@optional

/*!
 * Callbacks when new log is generated
 * \param log The log message
 */
- (void)onLog:(NSString *)log;

@end

@interface ALLog : NSObject

@property (nonatomic, weak) id<ALLogDelegate> delegate;

/** @name Initialization */

/**!
 * Singleton initialization for internal SDL log.
 * @warning *important* Internal Use Only.
 */
+ (ALLog *)sharedInstance;

/** @name Methods */
/*!
 * Set delegate to listen for log event
 * \param delegate A delegate comforms to ALLogDelegate
 */
+ (void)setDelegate:(id<ALLogDelegate>)delegate;

/*!
 * SDK log entry point which will further dispatch to different channels.
 * \param format string format
 * \param ...   varadic parameters
 * 
 * @warning *important* Internal Use Only.
 */
+ (void)log:(NSString *)format, ...;

@end
