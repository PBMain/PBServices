#import "DBManager.h"

@interface DBFantasticPhotos : DBManager

// App-Wide

// Insert
+(void) insertBackgrounds:(NSArray*) data completion:(void (^)(void))completionBlock;
+(void) insertOverlays:(NSArray*)data completion:(void (^)(void))completionBlock;

// Select
+(NSArray*) getBackgrounds;
+(NSArray*) getOverlays;

// Delete
+(void) deleteBackgrounds;
+(void) deleteOverlays;

// Stream-Wide

// Insert
+(void) insertBackgrounds:(NSArray*) data intoStream:(NSString*)streamID completion:(void (^)(void))completionBlock;
+(void) insertOverlays:(NSArray*)data intoStream:(NSString*)streamID completion:(void (^)(void))completionBlock;

// Select
+(NSArray*) getBackgroundsForStream:(NSString*)streamID;
+(NSArray*) getOverlaysForStream:(NSString*)streamID;

// Delete
+(void) deleteBackgroundsForStream:(NSString*)streamID;
+(void) deleteOverlaysForStream:(NSString*)streamID;

@end
