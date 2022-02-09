#import "DBManager.h"

@interface DBStreamBellTimes : DBManager

// Insert
+(void) insertBellTimes:(NSArray*) data intoStream:(NSString*)streamID withEventCode:(NSString*)eventCode completion:(void (^)(void))completionBlock;

// Select
+(NSArray*) getAllBellTimesForStream:(NSString*)streamID;
+(NSDictionary*) getNextBellTimeForStream:(NSString*)streamID;
+(NSDictionary*) getMissedBellTimeForStream:(NSString*)streamID;
+(NSDictionary*) getDisplayBellTimeForStream:(NSString*)streamID;
+(NSArray*) getAllBellTimesForEvent:(NSString*)eventCode;
+(NSDictionary*) getNextBellTimeForEvent:(NSString*)eventCode;
+(NSDictionary*) getMissedBellTimeForEvent:(NSString*)eventCode;
+(NSDictionary*) getDisplayBellTimeForEvent:(NSString*)eventCode;

// Update
+(void) updateBellTimeSigned:(NSString*)type forStream:(NSString*)streamID;
+(void) updateBellTimeSkipped:(NSString*)type forStream:(NSString*)streamID;
+(void) updateBellTimeSigned:(NSString*)type forEvent:(NSString*)eventCode;
+(void) updateBellTimeSkipped:(NSString*)type forEvent:(NSString*)eventCode;

// Delete
+(void) deleteBellTimesForStream:(NSString*)streamID;
+(void) deleteBellTimesForStream:(NSString*)streamID withoutTypes:(NSArray*)types;
+(void) deleteBellTimesForEvent:(NSString*)eventCode;
+(void) deleteBellTimesForEvent:(NSString*)eventCode withoutTypes:(NSArray*)types;

@end
