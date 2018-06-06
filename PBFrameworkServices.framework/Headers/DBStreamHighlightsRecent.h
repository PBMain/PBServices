#import "DBManager.h"
#import <UIKit/UIKit.h>

@interface DBStreamHighlightsRecent : DBManager

// Insert
+(void) insertStreamHighlightsRecent:(NSArray*)highlights streamID:(NSString*)streamID;
+(BOOL) insertStreamHighlightsRecentIfChanged:(NSArray*)highlights streamID:(NSString*)streamID;

// Select
+(NSArray*) getHighlightsRecentForStream:(NSString*)streamID completion:(void (^)(NSArray *people))completionBlock;

// Delete
+(void) deleteStreamHighlightRecent:(NSString*)streamID assetID:(NSString*)assetID;
+(void) deleteImageFromPB:(NSString*)assetID;

@end
