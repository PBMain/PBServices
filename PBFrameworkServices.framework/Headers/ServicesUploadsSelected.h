@interface ServicesUploadsSelected : NSObject
{
    
}

@property (nonatomic) NSMutableArray *uploadTasks;
@property (nonatomic) NSTimer *uploadProcessingTimer;
@property (nonatomic) NSTimer *uploadNotificationTimer;
@property (nonatomic) NSTimer *uploadActivityFeedTimer;
@property (nonatomic) dispatch_group_t backgroundUploadDispatchGroup;

+(void) initializeUploads;
+(void) killAllUploads;

+(void) uploadInBackground;

@end
