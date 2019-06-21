#import "DBManager.h"

@interface DBLoggedInUser : DBManager

// Insert
// Private +(void) createUser;

// Select
+(NSDictionary*) getUserInformation;
+(NSString*) getValueForColumnName:(NSString*)column;

// Update
+(void) setValue:(NSString*)value forColumnName:(NSString*)column;

+(void) setIsUnnamedUser: (BOOL) isUnnamedUser;
+(void) setLogin: (NSString*) login;
+(void) setPassword: (NSString*) password;

// Get
+(BOOL) getIsUnnamedUser;
+(NSString*) getLogin;
+(NSString*) getPassword;

// Delete
+(void) logout;

@end
