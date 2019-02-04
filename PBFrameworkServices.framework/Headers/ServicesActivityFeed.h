@interface ServicesActivityFeed : NSObject {}
    
+(void) createPost:(NSString*)streamID assetLocations:(NSArray*)assetLocations commentText:(NSString*)commentText description:(NSString*)description localPostID:(NSString*)localPostID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

+(void) listPostsForStream:(NSString*)streamID fromEpoch:(NSString*)epochTime page:(int)page itemsPerPage:(int)itemsPerPage completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
    
+(void) getPost:(NSString*)postID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getCommentsForPosts:(NSArray*)postIDArray completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getCommentCountsForPosts:(NSArray*)postIDArray completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

+(void) deletePost:(NSString*)postID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) likePost:(NSString*)postID isLiked:(BOOL)isLiked completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) addCommentToPost:(NSString*)postID commentText:(NSString*)commentText commentID:(NSString*)commentID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) deleteComment:(NSString*)commentID postID:(NSString*)postID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) editComment:(NSString*)commentID postID:(NSString*)postID newCommentText:(NSString*)newCommentText completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
    
@end
