#import "DBManager.h"

@interface DBStreamBellTimes : DBManager

// Insert
+(void) insertBellTimes:(NSArray*) data intoStream:(NSString*)streamID completion:(void (^)(void))completionBlock;

// Select
+(NSArray*) getAllBellTimesForStream:(NSString*)streamID;
+(NSDictionary*) getNextBellTimeForStream:(NSString*)streamID;
+(NSDictionary*) getMissedBellTimeForStream:(NSString*)streamID;
+(NSDictionary*) getDisplayBellTimeForStream:(NSString*)streamID;

// Update
+(void) updateBellTimeSigned:(NSString*)type forStream:(NSString*)streamID;
+(void) updateBellTimeSkipped:(NSString*)type forStream:(NSString*)streamID;

// Delete
+(void) deleteBellTimesForStream:(NSString*)streamID;
+(void) deleteBellTimesForStream:(NSString*)streamID withoutTypes:(NSArray*)types;

@end
