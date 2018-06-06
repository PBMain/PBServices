#import "DBManager.h"
#import <UIKit/UIKit.h>

@interface DBStreamContribution : DBManager

// Insert
+(void) insertStreamContribution:(BOOL)contributing date:(NSDate*)date streamID:(NSString*)streamID;

// Select
+(NSArray*) getContributionStatusRangesForStream:(NSString*)streamID completion:(void (^)(NSArray *people))completionBlock;
+(NSArray*) getContributionStatusRangesForAllStreamsSinceDate:(NSDate*)date completion:(void (^)(NSArray *people))completionBlock;
+(NSMutableArray*) getContributingStreamsForDate:(NSDate*)date;
+(BOOL) getContributionStatusForStream:(NSString*)streamID atDate:(NSDate*)date completion:(void (^)(BOOL contributing))completionBlock;
+(BOOL) getContributionStatusForDate:(NSDate*)date;
+(NSCompoundPredicate*) getContributionRangesSinceDate:(NSDate*)date;

// Delete
+(void) deleteAllStreamData:(NSString*)streamID;

@end
