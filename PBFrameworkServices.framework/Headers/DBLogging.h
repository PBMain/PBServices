#import "DBManager.h"

@interface DBLogging : DBManager

// Insert
+(void) insertLog:(NSString*)logLine forTime:(NSDate*)time;

// Select
+(NSMutableArray*)getLogsSinceDate:(NSDate*)date;

@end
