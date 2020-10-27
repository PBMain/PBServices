@interface ServicesUploadsSelected : NSObject
{
    
}

@property (nonatomic) NSMutableArray *uploadTasks;
@property (nonatomic) int analysisRunning;
@property (nonatomic) int analysisFailures;
@property (nonatomic) BOOL allowUploadsWhenNoStreams;
@property (nonatomic) NSTimer *uploadProcessingTimer;
@property (nonatomic) NSTimer *uploadNotificationTimer;
@property (nonatomic) NSTimer *uploadActivityFeedTimer;
@property (nonatomic) dispatch_group_t backgroundUploadManualDispatchGroup;
@property (nonatomic) NSTimer *uploadAnalysisProcessingTimer;

+(void) initializeUploads;
+(void) killAllUploads;

+(void) uploadInBackground;
+(int) processingAnalytics;

// This can be set to TRUE to allow uploads to go out regardless of stream blackouts and limits
// Used for things like iMessage app which uses these uploads to remove backgrounds without any streams
+(void) allowUploadsWhenNoStreams:(BOOL)allow;

// Tracking progress
@property (nonatomic) void (^progressBlock)(NSString *filename, NSUInteger totalBytes, NSProgress *progress);
@property (nonatomic) void (^completionBlock)(NSString *filename, NSUInteger totalBytes);
+(void) setUploadProgressBlock:(void (^)(NSString *filename, NSUInteger totalBytes, NSProgress *progress))progressBlock;
+(void) setUploadCompletionBlock:(void (^)(NSString *filename, NSUInteger totalBytes))completionBlock;

@end
