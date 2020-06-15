#import "DBManager.h"

@interface DBUploadsSelected : DBManager

// Insert
+(void) insertUploadsSelected:(NSArray*) data forStream:(NSString*)streamID;

// Select
+(NSDictionary*)getUploadByFileName:(NSString*)fileName andCreationDate:(NSDate*)creationDate;
+(NSDictionary*)getUploadByReserveCode:(NSString*)reserveCode;
+(NSArray*)getUploadNotificationsByReserveCode:(NSString*)reserveCode;
+(NSArray*)getUploadLocationsByReserveCode:(NSString*)reserveCode;
+(NSArray*)getAllUploads;
+(int)getCountCurrentlyUploading;
+(int)getCountReadyForUploading;
+(int)getCountDoneUploading;
+(int)getCountCurrentlyUploadingForStream:(NSString*)streamID;
+(int)getCountDoneForStream:(NSString*)streamID;
+(int)getCountTotalUploadsForStream:(NSString*)streamID;


// Update (And UpdateSelects)
// Getting assets that need locations
+(NSArray*)reserveUploadLocationsWithCode:(NSString*)reserveCode;
+(void)setUploadLocation:(NSString*)location forLocalIdentifier:(NSString*)localIdentifier;
+(void)setPostID:(NSString*)postID forUploadLocations:(NSArray*)uploadLocations;

// Processing detection of faces, text, etc
+(NSDictionary*) reserveProcessingWithCode:(NSString*)reserveCode;
+(void) setProcessingDoneWithCode:(NSString*)reserveCode payload:(NSString*)jsonStringPayload;

// Assets that have locations but need to be uploaded
+(NSDictionary*)reserveUploadWithCode:(NSString*)reserveCode;
+(void)setUploadDoneWithCode:(NSString*)reserveCode;
+(void)setUploadDoneWithLocalIdentifier:(NSString*)identifier;

// Assets that have been uploaded, but the server needs to be notified of the upload
+(NSArray*)reserveCompletedUploadsWithCode:(NSString*)reserveCode;
+(NSArray*)reserveCompletedUploadsForBGChangeWithCode:(NSString*)reserveCode;
+(NSArray*)reserveCompletedUploadsForBGTransparencyWithCode:(NSString*)reserveCode;
+(void)setUploadsNotifiedWithCode:(NSString*)reserveCode andLog:(NSString*)logEntry;

// Force an upload retry
+(void) retryUpload:(NSString*)localIdentifier;
+(void) retryUploadByFilename:(NSString*)fileName andCreationDateUTC:(NSString*)creationDateUTC;

// Delete
+(void) deleteUploadWithReservedCode:(NSString*)reservedCode;
+(void) deleteUploadsWithStreamID:(NSString*)streamID;
+(void) deleteUploadsWithStreamID:(NSString*)streamID andFileName:(NSString*)fileName andCreationDate:(NSString*)creationDate;
+(void) deleteUploadsWithTemporaryPostID:(NSString*)tempPostID;
+(void) deleteUploadsWithFileName:(NSString*)fileName andCreationDate:(NSString*)creationDate;
+(void) deleteUploadsIfAllDoneForStream:(NSString*)streamID;
+(void) deleteAllUploads;
+(void) deleteAllUploadsInStreamsNotInStreamIDArray:(NSArray*) streamIDs;
+(void) deleteUploadsForCustomBG;

@end
