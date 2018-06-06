@interface ServicesOfflineMode : NSObject
{
    
}

+(BOOL) makeQueuedCallsForCallNames:(NSArray*)calls completion:(void (^)(id response))completionBlock;
+(BOOL) shouldShowOfflineBanner;

@end
