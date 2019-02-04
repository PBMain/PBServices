#import "DBManager.h"
@import Photos;

@interface DBActivities : DBManager

// Insert
+(void) insertPosts:(NSArray*)posts;
+(void) insertPostAssets:(NSArray*)assets;
+(void) insertPostComments:(NSArray*)comments;
+(void) insertNewPostUploads:(NSArray*)images forStream:(NSString*)streamID comment:(NSString*)comment temporaryPostID:(NSString*)temporaryPostID;

// Select (for uploads)
+(NSDictionary*)reservePostWithCode:(NSString*)reserveCode;
+(NSDictionary*)getPostByReserveCode:(NSString*)reserveCode;

// Select (for cached)
+(NSMutableArray*)getPostsForStream:(NSString*)streamID;
+(BOOL)isPostOfflineOnly:(NSString*)postID;
+(NSDictionary*)getPostByPostID:(NSString*)postID;
+(NSDictionary*)getPostByOfflinePostID:(NSString*)postID;

// Update
+(void) updateOfflinePostsWithPostID:(NSString*)offlinePostID toOnlinePostID:(NSString*)postID;
+(void) updateAssetIdentifier:(NSString*)localIdentifier withLocationURL:(NSString*)assetLocation;
// Uses known assetIDs to fill in gaps in the post asset cache
+(void) populateAssetIDsForImagesInPost:(NSString*)postID fromStream:(NSString*)streamID;
+(void) populateAssetIDsForImagesInStream:(NSString*)streamID;
+(void) updateCommentText:(NSString*)newCommentText commentID:(NSString*)commentID;
+(void) updatePost : (NSString*) postId likesCount : (NSNumber*) likesCount likeByUser : (BOOL) likeByUser;

// Delete
+(void) deletePostsForStream:(NSString*)streamID;
+(void) deletePostFromPosts: (NSString*) postId;
+(void) deleteCommentsForStream:(NSString*)streamID;
+(void) deleteAssetsForStream:(NSString*)streamID;
+(void) deleteOldOfflinePostsWithDescriptions:(NSArray*)descriptions;

+(void) deleteComment:(NSString*)commentID;

@end
