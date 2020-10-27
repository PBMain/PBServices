@interface ServicesUploads : NSObject
{
    
}

@property (nonatomic) NSMutableArray *uploadTasks;
@property (nonatomic) int analysisRunning;
@property (nonatomic) int analysisFailures;
@property (nonatomic) NSTimer *uploadProcessingTimer;
@property (nonatomic) NSTimer *uploadNotificationTimer;
@property (nonatomic) dispatch_group_t backgroundUploadAutomaticDispatchGroup;
@property (nonatomic) NSTimer *uploadAnalysisProcessingTimer;

+(void) initializeUploads;
+(void) killAllUploads;

+(void) uploadInBackground;

+(int) processingAnalytics;

// Tracking progress
@property (nonatomic) void (^progressBlock)(NSString *filename, NSUInteger totalBytes, NSProgress *progress);
@property (nonatomic) void (^completionBlock)(NSString *filename, NSUInteger totalBytes);
+(void) setUploadProgressBlock:(void (^)(NSString *filename, NSUInteger totalBytes, NSProgress *progress))progressBlock;
+(void) setUploadCompletionBlock:(void (^)(NSString *filename, NSUInteger totalBytes))completionBlock;

@end
