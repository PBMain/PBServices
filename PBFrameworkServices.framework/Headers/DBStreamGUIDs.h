#import "DBManager.h"
#import <UIKit/UIKit.h>

@interface DBStreamGUIDs : DBManager

// Insert
+(void) insertStreamGUID:(NSString*)GUID forStreamID:(NSString*)streamID;

// Select
+(NSString*) getStreamIDForGUID:(NSString*)streamGUID;

@end
