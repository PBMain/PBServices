@import CoreLocation;
#import <UIKit/UIKit.h>

@interface LocationServices : NSObject <CLLocationManagerDelegate>

@property (strong, nonatomic) CLLocationManager *locationManager;
@property (nonatomic) CLAuthorizationStatus authStatus;
@property (nonatomic) CLLocation *lastKnownLocation;

+(instancetype) sharedDelegate;
-(CLLocationManager*) getLocationManager;
+(void) startUpdatingLocation;
+(void) startUpdatingLocationInBackground;
+(void) stopUpdatingLocation;
+(CLLocation*) lastKnownLocation;

// Keep track of when we starting processing uploads in the background so we don't do too much of it in one go.
@property (nonatomic) NSDate *startedProcessingBackgroundUploads;

// Keeping track of when we did things last
@property (nonatomic) NSDate *lastCheckedForNearbyStreams;
@property (nonatomic) NSDate *dateStopLocation;

// For asset check
// We check asset count every X minutes to see if the number changed. If it did, run uploads.
@property (nonatomic) NSDate *lastCheckedAssets;
@property (nonatomic) int numberOfAssets;
@property (nonatomic) int uploadStatusInt;
@property (nonatomic) UIBackgroundTaskIdentifier bgTask;
@property (nonatomic) NSTimer *bgTaskTimer;
@property (nonatomic) NSTimer *bgTimerForBatteryLife;

// Non-location based
-(void) startUploadingNonLocation;

@end
