#import "DBManager.h"
#import <UIKit/UIKit.h>

@interface DBCustomCovers : DBManager

// Insert
+(void) insertCustomCover:(NSString*)assetID filename:(NSString*)filename creationDate:(NSString*)creationDate streamID:(NSString*)streamID imageURL:(NSString*)imageURL;

// Select
+(BOOL) getCoverForStreamID:(NSString*)streamID completion:(void (^)(UIImage *cover))completionBlock;

// Delete
+(void) deleteCover:(NSString*)streamID;

@end
