#import "DBManager.h"
#import <UIKit/UIKit.h>

@interface DBStreamAudience : DBManager

// Insert
+(void) insertStreamAudience:(NSArray*)people streamID:(NSString*)streamID;

// Select
+(NSArray*) getAudienceForStream:(NSString*)streamID completion:(void (^)(NSArray *people))completionBlock;

// Update
+(void) setUpdatedStreamID:(NSString*)streamID forOldStreamID:(NSString*)oldStreamID completion:(void (^)(void))completionBlock;
+(void) setAudienceMemberCollaboratorStatusInStream:(NSString*)streamID phone:(NSString*)phone status:(NSString*)status;

// Delete
+(void) deleteStreamAudience:(NSString*)streamID phone:(NSString*)phone;
+(void) deleteAllAudienceFromStream:(NSString*)streamID;

@end
