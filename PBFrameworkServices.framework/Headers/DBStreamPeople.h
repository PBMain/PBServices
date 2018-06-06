#import "DBManager.h"
#import <UIKit/UIKit.h>

@interface DBStreamPeople : DBManager

// Cache
+(instancetype)sharedDelegate;
@property (nonatomic, strong) NSMutableDictionary *streamCache;
@property (nonatomic, strong) NSString *streamCacheID;

// Insert
+(void) insertStreamPeople:(NSArray*)people streamID:(NSString*)streamID completion:(void (^)(void))completionBlock;
+(BOOL) insertStreamPeopleIfChanged:(NSArray*)people streamID:(NSString*)streamID completion:(void (^)(void))completionBlock;

// Select
+(NSArray*) getPeopleForStream:(NSString*)streamID completion:(void (^)(NSArray *people))completionBlock;

// Delete
+(void) deleteStreamPerson:(NSString*)streamID personID:(NSString*)personID;
+(void) deleteAllPeopleFromStream:(NSString*)streamID;

@end
