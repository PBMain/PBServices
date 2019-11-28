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

@end
