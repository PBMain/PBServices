#import "DBManager.h"
#import <UIKit/UIKit.h>

@interface DBStreamHighlights : DBManager

// Insert
+(void) insertStreamHighlights:(NSArray*)highlights streamID:(NSString*)streamID;
+(BOOL) insertStreamHighlightsIfChanged:(NSArray*)highlights streamID:(NSString*)streamID;

// Select
+(NSArray*) getHighlightsForStream:(NSString*)streamID completion:(void (^)(NSArray *people))completionBlock;
+(NSArray*) getHighlightsRecentForStream:(NSString*)streamID completion:(void (^)(NSArray *people))completionBlock;
+(NSString*) getTopHighlightAssetIDForStream:(NSString*)streamID;

// Update
+(void) setLikedByYou:(BOOL)likedByYou forAssetID:(NSString*)assetID inStream:(NSString*)streamID;

// Delete
+(void) deleteStreamHighlight:(NSString*)streamID assetID:(NSString*)assetID;
+(void) deleteImageFromPB:(NSString*)assetID;
+(void) deleteHighlightsForStream:(NSString*)streamID;

@end
