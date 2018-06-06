#import "DBManager.h"
@import Photos;

@interface DBUploadsVideo : DBManager

// uploads_video
// Insert
+(void) insertVideoUploads:(NSArray*) data forStream:(NSString*)streamID;
+(void) insertManualVideoShowForTrimming:(NSArray*) data forStream:(NSString*)streamID;
+(void) hideVideoFromListings:(PHAsset*)videoAsset forStream:(NSString*)streamID;

// Select
+(NSDictionary*)getUploadByReserveCode:(NSString*)reserveCode;
+(int)getCountCurrentlyUploading;
+(int)getCountDoneUploading;
+(int)getCountCurrentlyUploadingForStream:(NSString*)streamID;
+(int)getCountDoneForStream:(NSString*)streamID;
+(int)getCountTotalUploadsForStream:(NSString*)streamID;
+(BOOL)isVideoHiddenFromListings:(PHAsset*)videoAsset forStream:(NSString*)streamID;
+(BOOL)isVideoManuallyAppearingInTrimList:(PHAsset*)videoAsset forStream:(NSString*)streamID;
+(NSDictionary*)getUploadByFileName:(NSString*)fileName andCreationDate:(NSDate*)creationDate;
+(NSArray*)getUploadNotificationsByReserveCode:(NSString*)reserveCode;
+(NSArray*)getUploadLocationsByReserveCode:(NSString*)reserveCode;
+(int)getCountReadyForUploading;
+(NSArray*)getAllUploads;
+(BOOL)isUploadSkipped:(PHAsset*)videoAsset;

// Update
+(NSArray*)reserveUploadLocationsWithCode:(NSString*)reserveCode;
+(void)setUploadLocation:(NSString*)location forLocalIdentifier:(NSString*)localIdentifier;
+(void)setUploadSkipped:(PHAsset*)videoAsset;

// Assets that have locations but need to be uploaded
+(NSDictionary*)reserveUploadWithCode:(NSString*)reserveCode;
+(void)setUploadDoneWithCode:(NSString*)reserveCode;
+(void)setUploadDoneWithLocalIdentifier:(NSString*)identifier;

// Assets that have been uploaded, but the server needs to be notified of the upload
+(NSArray*)reserveCompletedUploadsWithCode:(NSString*)reserveCode;
+(void)setUploadsNotifiedWithCode:(NSString*)reserveCode;

// Force an upload retry
+(void) retryUpload:(NSString*)localIdentifier;

// Delete
+(void) deleteUploadWithReservedCode:(NSString*)reservedCode;
+(void) deleteUploadsWithStreamID:(NSString*)streamID;
+(void) deleteUploadsIfAllDoneForStream:(NSString*)streamID;
+(void) deleteUploadsWithStreamID:(NSString*)streamID andFileName:(NSString*)fileName andCreationDate:(NSString*)creationDate;
+(void) deleteUploadsWithFileName:(NSString*)fileName andCreationDate:(NSString*)creationDate;

@end
