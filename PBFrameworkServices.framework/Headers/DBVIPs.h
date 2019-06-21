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

@end
