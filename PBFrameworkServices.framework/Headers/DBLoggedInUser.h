#import "DBManager.h"

@interface DBLoggedInUser : DBManager

// Insert
// Private +(void) createUser;

// Select
+(NSDictionary*) getUserInformation;
+(NSString*) getValueForColumnName:(NSString*)column;

// Update
+(void) setValue:(NSString*)value forColumnName:(NSString*)column;

// Delete
+(void) logout;

@end
