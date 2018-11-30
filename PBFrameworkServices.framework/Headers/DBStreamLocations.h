#import "DBManager.h"
#import <UIKit/UIKit.h>

@interface DBStreamLocations : DBManager

// Insert
+(void) insertStreamLocations:(NSArray*)locations streamID:(NSString*)streamID;
+(BOOL) insertStreamLocationsIfChanged:(NSArray*)locations streamID:(NSString*)streamID;

// Select
+(NSArray*) getLocationsForStream:(NSString*)streamID completion:(void (^)(NSArray *people))completionBlock;
+(NSArray*) getAllLocationsForStream:(NSString*)streamID completion:(void (^)(NSArray *people))completionBlock;
+(NSArray*) getDSSLocationsForStream:(NSString*)streamID completion:(void (^)(NSArray *people))completionBlock;

// Delete
+(void) deleteStreamLocation:(NSString*)streamID gpsCoordinates:(NSString*)gpsCoordinates;
+(void) deleteLocationsFromStream:(NSString*)streamID;
+(void) deleteCategoryLocationsFromStream:(NSString*)streamID;
+(void) deleteAllLocationsFromStream:(NSString*)streamID;

@end
