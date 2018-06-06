#import "DBManager.h"

@interface DBStreamAssets : DBManager

// Insert
+(void) insertStreamAssets:(NSArray*) data forStream:(NSString*)streamID completion:(void (^)(void))completionBlock;
+(void) insertStreamAssetForTinkerbell:(NSArray*)data forStream:(NSString*)streamID completion:(void (^)(void))completionBlock;

// Select
+(int) getAssetCountForStream:(NSString*)streamID completion:(void (^)(id theCount))completionBlock;
+(NSArray*) getAssetsForStream:(NSString*)streamID completion:(void (^)(id userDict))completionBlock;
+(NSArray*) getInstantAssetsForStream:(NSString*)streamID completion:(void (^)(id userDict))completionBlock;
+(int) getConfirmedUploadedAssetCountForStream:(NSString*)streamID;
+(int) getDuplicateCountForStream:(NSString*)streamID;
+(NSString*) getAssetIDForImage:(NSString*)filename creationDate:(NSString*)creationDate;
+(NSString*) getAssetIDForImage:(NSString*)filename creationDateUTC:(NSString*)creationDateUTC;
+(NSMutableDictionary*) getAssetForStream:(NSString*)streamID byID:(NSString*)assetID;
+(NSMutableDictionary*) getAssetForStream:(NSString*)streamID byFileName:(NSString*)fileName creationDateUTC:(NSString*)creationDateUTC;
+(NSArray*) getAssetsNotUploadedForStream:(NSString*)streamID;
+(NSArray*) getAssetsNotUploaded;
+(NSString*) getPhotoVideoURL:(NSString*)fileName captureDateTime:(NSString*)captureDateTime;
+(BOOL) isAssetVideo:(NSString*)assetID;

// Update
+(BOOL) propogateIDForAssetsWithFileName:(NSString*)fileName captureDateTime:(NSString*)captureDateTime;
+(void) setPhotoVideoURL:(NSString*)fileName captureDateTime:(NSString*)captureDateTime videoURL:(NSString*)videoURL;
+(void) setPhotoAssetID:(NSString*)assetID forFilename:(NSString*)fileName captureDateTime:(NSString*)captureDateTime;
+(void) setUpdatedStreamID:(NSString*)streamID forOldStreamID:(NSString*)oldStreamID completion:(void (^)(void))completionBlock;
+(void) setCommentCount:(NSString*)commentCount forAssetID:(NSString*)assetID inStream:(NSString*)streamID;
+(void) setLikedByYou:(BOOL)likedByYou forAssetID:(NSString*)assetID inStream:(NSString*)streamID;
+(void) setDuplicateParent:(NSString*)assetID previousParent:(NSString*)parentID;

// Delete
+(void) deleteAsset:(NSString*)assetID filename:(NSString*)filename creationDate:(NSString*)creationDate fromStream:(NSString*)streamID completionBlock:(void (^)(void))completionBlock;
// This removes anything that was inserted by the pre-upload function, but didn't come back when getting the assets from the server. This will remove any local-only photos from a stream.
+(void) deleteUnverifiedPhotosFromStream:(NSString*)streamID completionBlock:(void (^)(void))completionBlock;
// This will take a filename/creationdate and remove it from any streams where it is a temp file. This is for when we have 'already uploaded an image' but it's not getting assigned an AssetID, which usually is some kind of server error at some point.
+(void) deleteAllUnverifiedPhotosFromStreams:(void (^)(void))completionBlock;
+(void) deleteUnverifiedPhotoFromStreams:(NSString*)filename creationDate:(NSString*)creationDate completionBlock:(void (^)(void))completionBlock;
// This takes an array of photos from the server, and removes any photos in the stream that meet this criteria:
//  1) Have an assetID (meaning they've been uploaded and aren't pre-upload display)
//  2) Are not present in the stream (meaning they've likely been deleted)
+(void) deleteVerifiedPhotosFromStreamNotInArray:(NSString*)streamID photos:(NSArray*)photos completionBlock:(void (^)(void))completionBlock;
// This un-deletes any images that we might think have been deleted, but the server is telling us haven't been
+(void) unDeleteAssetIDsFromServer:(NSArray*)assets forStream:(NSString*)streamID;
+(void) deleteImageFromPB:(NSString*)assetID filename:(NSString*)filename creationDate:(NSString*)creationDate;
+(void) deleteAllAssetsFromStream:(NSString*)streamID;

@end
