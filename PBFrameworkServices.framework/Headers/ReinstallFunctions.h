@interface ReinstallFunctions : NSObject

@property (nonatomic) NSTimer *timerBuildCache;
@property (nonatomic) NSMutableDictionary *currentlyCaching;
@property (nonatomic) NSMutableDictionary *alreadyCached;
@property (nonatomic) NSLock *lockDefs;
@property (nonatomic) NSLock *lockProcess;

+(instancetype) sharedDelegate;

// canStartUploads: Used by Services to determine if uploads can begin processing. This will be set to true if:
//  The user has no contributing streams
//  The user has contributing streams, and we've gotten the asset list of the most recent one
+(BOOL) canStartUploads;

// When we get stream details of a stream, call this to record that we're up to date with its uploads
+(void) setCanStartUploads:(NSString*)streamID;

// Starts the timer that grabs the stream information to populate the cache
+(void) startProcessing;
+(void) clearProcessing;

@end
