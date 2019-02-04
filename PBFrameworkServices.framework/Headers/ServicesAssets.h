@interface ServicesAssets : NSObject
{
    
}

// Pass an asset directly from sqlite asset tables. This is preferred method of getting an image
+(void) photoStreamAssetAsUIImage:(NSDictionary*)asset isThumb:(BOOL)isThumb streamId:(NSString*)photoStreamId uiImageView:(UIImageView*)uiImageView completionBlock:(void (^)(id response))completionBlock;
// Pass an asset directly from sqlite asset tables. This is preferred method of getting the cover of a stream
+(void) photoStreamCoverAsUIImageWithStreamID:(NSDictionary*)stream uiImageView:(UIImageView*)uiImageView completionBlock:(void (^)(id response, NSString *streamId))completionBlock;

+(void) photoStreamCoverAsUIImage:(NSDictionary*)stream uiImageView:(UIImageView*)uiImageView completionBlock:(void (^)(id response))completionBlock;

+(void) photoStreamAssetAsUIImage:(NSString*)assetId filename:(NSString*)filename captureDateTime:(NSString*)captureDateTime isThumb:(BOOL)isThumb streamId:(NSString*)photoStreamId uiImageView:(UIImageView*)uiImageView completionBlock:(void (^)(id response))completionBlock;
+(void) photoStreamCoverAssetAsUIImage:(NSString*)assetId streamId:(NSString*)photoStreamIdent uiImageView:(UIImageView*)uiImageView completionBlock:(void (^)(id response))completionBlock;

// Cached
+(void) getImageFromCache:(NSDictionary*)asset isThumb:(BOOL)isThumb streamId:(NSString*)photoStreamId uiImageView:(UIImageView*)uiImageView cacheIdentifier:(NSString*)cacheIdentifier completionBlock:(void (^)(id response))completionBlock;
// Just use the S3 link
+(void) getImageFromURL:(NSDictionary*)asset isThumb:(BOOL)isThumb streamId:(NSString*)photoStreamId uiImageView:(UIImageView*)uiImageView cacheIdentifier:(NSString*)cacheIdentifier completionBlock:(void (^)(id response))completionBlock;

@end
