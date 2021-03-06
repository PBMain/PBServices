#import "DBManager.h"

@interface DBUploadsAutomatic : DBManager

// Insert
+(void) insertUploads:(NSArray*)data;
+(void) insertUploadsAsAlreadyFinished:(NSArray*)data;
+(void) insertInstantUploadsTracking:(NSArray*)uploads;

// Select
+(NSDictionary*)getUploadByFileName:(NSString*)fileName andCreationDate:(NSDate*)creationDate;
+(NSDictionary*)getUploadByReserveCode:(NSString*)reserveCode;
+(NSArray*)getUploadNotificationsByReserveCode:(NSString*)reserveCode;
+(NSArray*)getUploadLocationsByReserveCode:(NSString*)reserveCode;
+(NSArray*)getAllUploads;
+(NSArray*)getAllUploadsQueued;
+(NSArray*)getAllUploadsUploading;
+(int)getCountCurrentlyUploading;
+(int)getCountReadyForUploading;
+(int)getCountDoneUploading;
+(BOOL)isPhotoPendingUpload:(NSString*)fileName andCreationDate:(NSDate*)creationDate;
+(BOOL)hasAlreadyInstantInsertedImageToStream:(NSString*)filename creationDate:(NSDate*)creationDate streamID:(NSString*)streamID;

// Update (And UpdateSelects)
// Getting assets that need locations
+(NSArray*)reserveUploadLocationsWithCode:(NSString*)reserveCode;
+(void)setUploadLocation:(NSString*)location forLocalIdentifier:(NSString*)localIdentifier;
+(void)tryLocationAgainForLocalIdentifier:(NSString*)localIdentifier;

// Processing detection of faces, text, etc
+(NSDictionary*) reserveProcessingWithCode:(NSString*)reserveCode;
+(void) setProcessingDoneWithCode:(NSString*)reserveCode payload:(NSString*)jsonStringPayload;

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
+(void) deleteUploadsWithFileName:(NSString*)fileName andCreationDate:(NSString*)creationDate;
+(void) deleteAllUploads;

@end
