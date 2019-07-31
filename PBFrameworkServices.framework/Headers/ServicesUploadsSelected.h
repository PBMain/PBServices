@interface ServicesUploadsSelected : NSObject
{
    
}

@property (nonatomic) NSMutableArray *uploadTasks;
@property (nonatomic) int analysisRunning;
@property (nonatomic) int analysisFailures;
@property (nonatomic) NSTimer *uploadProcessingTimer;
@property (nonatomic) NSTimer *uploadNotificationTimer;
@property (nonatomic) NSTimer *uploadActivityFeedTimer;
@property (nonatomic) dispatch_group_t backgroundUploadDispatchGroup;
@property (nonatomic) NSTimer *uploadAnalysisProcessingTimer;

+(void) initializeUploads;
+(void) killAllUploads;

+(void) uploadInBackground;
+(int) processingAnalytics;

@end
