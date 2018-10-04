@interface ServicesComments : NSObject
{
    
}

// Get Comments
+(void) commentsForImage : (NSString*) assetID
                inStream : (NSString*) streamID
              completion : (void (^)(id response)) completionBlock
                   error : (void (^)(id response))errorBlock;

+(void) postComment : (NSString*) comment
      withCommentID : (NSString*) commentID
           forAsset :(NSString*) assetID
           inStream : (NSString*) streamID
         completion : (void (^)(id response))completionBlock
              error : (void (^)(id response))errorBlock;

+(void) deleteCommentWithCommentID : (NSString*) commentID
                          forAsset : (NSString*) assetID
                          inStream : (NSString*) streamID
                        completion : (void (^)(id response))completionBlock
                             error : (void (^)(id response))errorBlock;

+(void) editCommentWithCommentID : (NSString*) commentID
                        forAsset : (NSString*) assetID
                        inStream : (NSString*) streamID
                      newMessage : (NSString*) newMessage
                      completion : (void (^)(id response)) completionBlock
                           error : (void (^)(id response)) errorBlock;


+(void) commentsListFor : (NSArray*) streamIds
             completion : (void (^)(id commentThreads)) completionBlock
                  error : (void (^)(id response)) errorBlock;

+(void) activityFeedSinceDate : (NSDate*) date
                   completion : (void (^)(id activityFeed)) completionBlock
                        error : (void (^)(id response)) errorBlock;

+(void) setActivityFeedItemRead : (NSArray*) activityIds
                     completion : (void (^)(id responseObject)) completionBlock
                          error : (void (^)(id response)) errorBlock;

+(void) setAllActivityFeedItemReadWithCompletion : (void (^)(id responseObject)) completionBlock
                                           error : (void (^)(id response)) errorBlock;


@end
