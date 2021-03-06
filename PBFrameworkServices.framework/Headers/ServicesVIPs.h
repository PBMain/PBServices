@interface ServicesVIPs : NSObject
{
    
}

// Get
+(void) getVIPs:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getVIPInformation:(NSString*)VIPID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getVIPStreams:(NSString*)VIPID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getVIPStreamAssets:(NSString*)VIPID streamID:(NSString*)streamID startIndex:(int)startIndex totalRows:(int)totalRows sortAscending:(BOOL)sortAscending completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getAllStreamImagesContainingVIPs:(NSArray<NSString*>*)VIPIDs streamID:(NSString*)streamID startIndex:(int)startIndex totalRows:(int)totalRows sortAscending:(BOOL)sortAscending completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Create
+(void) createVIP:(NSString*)name withImages:(NSArray<UIImage*>*)images completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Update
+(void) addImages:(NSArray<UIImage*>*)images toVIP:(NSString*)VIPID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) removeImage:(NSString*)imageID fromVIP:(NSString*)VIPID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Delete
+(void) deleteVIP:(NSString*)VIPID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Processed
+(void) processAndCreateVIP:(NSString*)name withImages:(NSArray<UIImage*>*)images failOnWarning:(BOOL)failOnWarning completion:(void (^)(id response))completionBlock warning:(void (^)(id response))warningBlock error:(void (^)(id response))errorBlock;
+(void) processAndAddImages:(NSArray<UIImage*>*)images toVIP:(NSString*)VIPID failOnWarning:(BOOL)failOnWarning completion:(void (^)(id response))completionBlock warning:(void (^)(id response))warningBlock error:(void (^)(id response))errorBlock;

@end
