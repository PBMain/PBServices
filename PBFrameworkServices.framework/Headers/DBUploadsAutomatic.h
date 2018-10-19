#import "DBManager.h"

@interface DBUploadsAutomatic : DBManager

// Insert
+(void) insertUploads:(NSArray*)data;
+(void) insertUploadsAsAlreadyFinished:(NSArray*)data;


// Select
+(NSDictionary*)getUploadByFileName:(NSString*)fileName andCreationDate:(NSDate*)creationDate;
+(NSDictionary*)getUploadByReserveCode:(NSString*)reserveCode;
+(NSArray*)getUploadNotificationsByReserveCode:(NSString*)reserveCode;
+(NSArray*)getUploadLocationsByReserveCode:(NSString*)reserveCode;
+(int)getCountCurrentlyUploading;
+(int)getCountReadyForUploading;
+(int)getCountDoneUploading;
+(BOOL)isPhotoPendingUpload:(NSString*)fileName andCreationDate:(NSDate*)creationDate;


// Update (And UpdateSelects)
// Getting assets that need locations
+(NSArray*)reserveUploadLocationsWithCode:(NSString*)reserveCode;
+(void)setUploadLocation:(NSString*)location forLocalIdentifier:(NSString*)localIdentifier;
+(void)tryLocationAgainForLocalIdentifier:(NSString*)localIdentifier;

// Assets that have locations but need to be uploaded
+(NSDictionary*)reserveUploadWithCode:(NSString*)reserveCode;
+(void)setUploadDoneWithCode:(NSString*)reserveCode;
+(void)setUploadDoneWithLocalIdentifier:(NSString*)identifier;

// Assets that have been uploaded, but the server needs to be notified of the upload
+(NSArray*)reserveCompletedUploadsWithCode:(NSString*)reserveCode;
+(void)setUploadsNotifiedWithCode:(NSString*)reserveCode andLog:(NSString*)logEntry;

// Uploads skipped (Screenshots)
+(void)setUploadSkippedWithCode:(NSString*)reserveCode;
+(void)setUploadSkippedWithFileName:(NSString*)fileName andCreationDate:(NSString*)creationDate;

// Force an upload retry
+(void) retryUpload:(NSString*)localIdentifier;
+(void) retryUploadByFilename:(NSString*)fileName andCreationDateUTC:(NSString*)creationDateUTC;

// Delete
+(void) deleteUploadWithReservedCode:(NSString*)reservedCode;

@end
