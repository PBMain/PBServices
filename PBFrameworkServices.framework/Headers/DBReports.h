#import "DBManager.h"
@import Photos;

@interface DBReports : DBManager

// Insert
+(void) insertReportOnUser:(NSString*)userID;
+(void) insertReportOnImage:(NSString*)imageID inStream:(NSString*)streamID;
+(void) insertReportOnComment:(NSString*)commentID onImage:(NSString*)imageID;

// Updates
+(void) updateReportOnUserAsSubmitted:(NSString*) userID;
+(void) updateReportOnCommentAsSubmitted:(NSString*)commentID onImage:(NSString*)imageID;
+(void) updateReportOnImageAsSubmitted:(NSString*)imageID inStream:(NSString*)streamID;

// Selects
+(NSMutableArray*)getAllReportedUsers;
+(BOOL)isUserReported:(NSString*)userID;
+(NSMutableArray*)getReportsForStreamImages:(NSString*)streamID;
+(NSMutableArray*)getReportsForImageComments:(NSString*)imageID;

// Delete
+(void) deleteImageReport:(NSString*)imageID;
+(void) deleteCommentReport:(NSString*)commentID;
+(void) deleteImageCommentReports:(NSString*)imageID;
+(void) deleteStreamImageReports:(NSString*)streamID;
+(void) deleteUserReport:(NSString*)userID;
+(void) deleteAllUserReports;

@end
