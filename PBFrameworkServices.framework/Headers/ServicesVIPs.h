@interface ServicesVIPs : NSObject
{
    
}

// Get
+(void) getVIPs:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getVIPInformation:(NSString*)VIPID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getVIPStreams:(NSString*)VIPID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getVIPStreamAssets:(NSString*)VIPID streamID:(NSString*)streamID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Create
+(void) createVIP:(NSString*)name withImages:(NSArray<UIImage*>*)images completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;


// Delete
+(void) deleteVIP:(NSString*)VIPID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

@end
