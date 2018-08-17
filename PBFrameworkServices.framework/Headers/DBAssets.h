#import "DBManager.h"
@import Photos;

@interface DBAssets : DBManager

// Insert
+(void) insertAssets:(NSArray*) data;

// Select


// Delete
+(void) deleteAssetFromPhotoButler:(NSString*)assetID filename:(NSString*)filename creationDateUTC:(NSString*)creationDateUTC completionBlock:(void (^)(void))completionBlock;
+(PHAsset*) getPHAssetForFileName:(NSString*)fileName creationDateUTC:(NSString*)creationDateUTC;

@end
