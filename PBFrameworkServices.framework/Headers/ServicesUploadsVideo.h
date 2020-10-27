@interface ServicesUploadsVideo : NSObject
{
    
}

@property (nonatomic) NSMutableArray *uploadTasks;
@property (nonatomic) NSTimer *uploadProcessingTimer;
@property (nonatomic) NSTimer *uploadNotificationTimer;
@property (nonatomic) dispatch_group_t backgroundUploadVideoDispatchGroup;

+(void) initializeUploads;
+(void) killAllUploads;

+(void) uploadInBackground;

// Tracking progress
@property (nonatomic) void (^progressBlock)(NSString *filename, NSUInteger totalBytes, NSProgress *progress);
@property (nonatomic) void (^completionBlock)(NSString *filename, NSUInteger totalBytes);
+(void) setUploadProgressBlock:(void (^)(NSString *filename, NSUInteger totalBytes, NSProgress *progress))progressBlock;
+(void) setUploadCompletionBlock:(void (^)(NSString *filename, NSUInteger totalBytes))completionBlock;

@end
