#import "DBManager.h"

@interface DBVIPs : DBManager

// Insert
+(void) insertVIPs:(NSArray*)data completion:(void (^)(void))completionBlock;
+(void) insertStreamVIPs:(NSArray*)data forStream:(NSString*)streamID completion:(void (^)(void))completionBlock;
+(void) insertStreams:(NSArray*)data forVIP:(NSString*)VIPID completion:(void (^)(void))completionBlock;

// Select
+(int) getVIPCount;
+(NSArray*) getAllVIPs;
+(int) getVIPCountForStream:(NSString*)streamID;
+(NSArray*) getVIPsForStream:(NSString*)streamID;

// Delete
+(void) deleteVIP:(NSString*)VIPID;
+(void) deleteVIP:(NSString*)VIPID fromStream:(NSString*)streamID;
+(void) deleteAllVIPs;
+(void) deleteAllVIPsFromStream:(NSString*)streamID;

// For tracking which images were used to create which POI/VIP
+(void) insertAssetsUsedToCreatePOI:(NSArray*)assetData forPOI:(NSString*)VIPID withName:(NSString*)name completion:(void (^)(void))completionBlock;
+(NSString*) nameOfPOIFromAsset:(NSDictionary*)assetInfo;
+(void) updateBlankPOIAssets:(NSArray*)VIPs;
+(void) deleteAssetsUsedToCreatePOI:(NSString*)VIPID;
+(void) deleteAssetsUsedToCreatePOIByName:(NSString*)name;

@end
