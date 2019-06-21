#import "DBManager.h"

@interface DBUsers : DBManager

// Insert
+(void) insertUsers:(NSArray*) data;
+(BOOL) insertUsersIfChanged:(NSArray*) data;

// Select
+(void) getAllUsers:(void (^)(id userArray))completionBlock;
+(void) getUser:(NSString*)userID completion:(void (^)(id userDict))completionBlock;
+(NSString*) getUserServerIDFromPhone:(NSString*)phone;

// Delete
+(void) deleteUser:(NSString*)userID;

@end
