//
//  ALUserStay.h
//  Alohar
//
//  Created by Jianming Zhou on 3/16/12.
//  Copyright (c) 2011-2012 Alohar Mobile Inc.. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ALPlace.h"

/*!
 * The ALUserStay class represents a visit of a place. The user stay 
 * is automatically detected by Alohar SDK based on user's trace. 
 * Though the detection is quite accurate in most cases, the user stay
 * includes a list of Place candidates ranked. The best match will be 
 * chosen as the selectedPlace.
 *
 * The startTime, endTime records the start/end of the stay. The centroid
 * location is the location Alohar detected for that stay, which is not
 * necessary equivalent to the location of the selected place.
 * 
 */
@interface ALUserStay : NSObject <NSCopying>

/*!
 A CLLocation that is the center of the user's activity. NOTE: this can and will be slightly different from the central CLLocation of the selected POI. To get the CLLocation describing the POI, get theUserStay.selectedPlace.location. For more information on CLLocations, see Apple's documentation.
 */
@property (nonatomic, strong) CLLocation *centroidLocation;
/*!
 Unix timestamp for the beginning time of a visit. This time describes when the user first entered the POI. For example, 1336194082.
 */
@property (nonatomic, assign) NSInteger startTime;
/*!
 Unix timestamp for the end time of a visit. This time describes when the user exited the POI. For example, 1336194712.
 */
@property (nonatomic, assign) NSInteger endTime;
/*!
 An identifier that uniquely describes this userStay across the Alohar platform. For example, 1243286.
 */
@property (nonatomic, assign) NSInteger stayID;
/*!
 The ALPlace the Alohar platform determined is the most likely POI for the user's actual visitation pattern.
 */
@property (nonatomic, strong) ALPlace *selectedPlace;
/*!
 An array of ALPlaces that could be the correct POI for this user stay. They are ordered based on several heuristics to give the most likely POIs first.
 */
@property (nonatomic, strong) NSArray *candidates;

@end
