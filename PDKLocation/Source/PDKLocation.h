//
//  PDKLocation.h
//  PDKLocation
//
//  Created by Chris Karr on 6/29/20.
//  Copyright © 2020 Audacious Software. All rights reserved.
//

@import Foundation;

//! Project version number for PDKLocation.
FOUNDATION_EXPORT double PDKLocationVersionNumber;

//! Project version string for PDKLocation.
FOUNDATION_EXPORT const unsigned char PDKLocationVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <PDKLocation/PublicHeader.h>

extern NSString *const PDKCapabilityRationale;
extern NSString *const PDKLocationSignificantChangesOnly;
extern NSString *const PDKLocationAlwaysOn;
extern NSString *const PDKLocationRequestedAccuracy;
extern NSString *const PDKLocationRequestedDistance;
extern NSString *const PDKLocationInstance;
extern NSString *const PDKLocationAccessDenied;

extern NSString *const PDKGooglePlacesSpecificLocation;
extern NSString *const PDKGooglePlacesFreetextQuery;
extern NSString *const PDKGooglePlacesAPIKey;
extern NSString *const PDKGooglePlacesType;
extern NSString *const PDKGooglePlacesRadius;
extern NSString *const PDKGooglePlacesInstance;
extern NSString *const PDKGooglePlacesIncludeFullDetails;

extern NSString *const PDKLocationLatitude;
extern NSString *const PDKLocationLongitude;
extern NSString *const PDKLocationAltitude;
extern NSString *const PDKLocationAccuracy;
extern NSString *const PDKLocationAltitudeAccuracy;
extern NSString *const PDKLocationFloor;

/*
 typedef NS_ENUM(NSInteger, PDKDataGenerator) {
     PDKLocation,
     PDKGooglePlaces,
     PDKGeofences,
     PDKDarkSkyWeather,
 };
*/

NS_ASSUME_NONNULL_BEGIN

@interface PDKLocation : NSObject

@end

NS_ASSUME_NONNULL_END
