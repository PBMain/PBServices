#import "DBManager.h"
#import <UIKit/UIKit.h>

@interface DBStreamPeopleAssets : DBManager

// Insert
+(void) insertStreamPeopleAssets:(NSArray*)assets streamID:(NSString*)streamID personID:(NSString*)personID;
+(BOOL) insertStreamPeopleAssetsIfChanged:(NSArray*)assets streamID:(NSString*)streamID personID:(NSString*)personID;

// Select
+(NSArray*) getPeopleAssetsForStream:(NSString*)streamID personID:(NSString*)personID completion:(void (^)(NSArray *people))completionBlock;

// Delete
+(void) deleteStreamPersonAssets:(NSString*)streamID personID:(NSString*)personID assetID:(NSString*)assetID;
+(void) deleteImageFromPB:(NSString*)assetID;

@end
