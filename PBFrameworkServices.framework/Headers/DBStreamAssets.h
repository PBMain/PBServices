#import "DBManager.h"

@interface DBStreamAssets : DBManager

// Insert
+(void) insertStreamAssets:(NSArray*) data forStream:(NSString*)streamID completion:(void (^)(void))completionBlock;
+(void) insertStreamAssetServerIDs:(NSArray*)data completion:(void (^)(void))completionBlock;

// Select
+(int) getAssetCountForStream:(NSString*)streamID completion:(void (^)(id theCount))completionBlock;
+(int) getUploadingAssetCountForStream:(NSString*)streamID completion:(void (^)(id theCount))completionBlock;
+(NSArray*) getAssetsForStream:(NSString*)streamID completion:(void (^)(id userDict))completionBlock;
+(NSArray*) getInstantAssetsForStream:(NSString*)streamID completion:(void (^)(id userDict))completionBlock;
+(int) getConfirmedUploadedAssetCountForStream:(NSString*)streamID;
+(NSString*) getAssetIDForImage:(NSString*)filename creationDate:(NSString*)creationDate;
+(NSString*) getAssetIDForImage:(NSString*)filename creationDateUTC:(NSString*)creationDateUTC;
+(NSString*) getAssetIDForStreamAssetID:(NSString*)streamAssetID;
+(NSMutableDictionary*) getAssetForStream:(NSString*)streamID byID:(NSString*)assetID;
+(NSMutableDictionary*) getAssetByID:(NSString*)assetID;
+(NSMutableDictionary*) getAssetForStream:(NSString*)streamID byFileName:(NSString*)fileName creationDateUTC:(NSString*)creationDateUTC;
+(BOOL) getAssetDeletedLocallyByFileName:(NSString*)fileName creationDateUTC:(NSString*)creationDateUTC;
+(NSArray*) getAssetsNotUploadedForStream:(NSString*)streamID;
+(NSArray*) getAssetsNotUploaded;
+(NSString*) getPhotoVideoURL:(NSString*)fileName captureDateTime:(NSString*)captureDateTime;
+(BOOL) isAssetVideo:(NSString*)assetID;
+(NSString*) getCommentCountForAssetID:(NSString*)assetID inStream:(NSString*)streamID;
+(NSString*) getS3LinkForAsset:(NSString*)assetID inStream:streamID;
+(NSString*) getStreamAssetServerUUIDForID:(NSString*)assetID inStream:(NSString*)streamID;
+(NSString*) getStreamAssetServerUUIDForID:(NSString*)assetID;
+(BOOL) isAssetDeletedByUser:(NSString*)assetID streamID:(NSString*)streamID;
+(NSArray*) getAssetsDeletedByUserInStream:(NSString*)streamID;
+(NSMutableArray*) filterAssetsDeletedByUserInStream:(NSString*)streamID withAssets:(NSArray*)assetsToFilter;

// Update
+(BOOL) updateAssetID:(NSString*)assetID forAssetsWithFileName:(NSString*)fileName captureDateTimeUTC:(NSString*)captureDateTimeUTC;
+(BOOL) updateServerID:(NSString*)serverID forAssetsWithFileName:(NSString*)fileName captureDateTimeUTC:(NSString*)captureDateTimeUTC;
+(void) setPhotoVideoURL:(NSString*)fileName captureDateTime:(NSString*)captureDateTime videoURL:(NSString*)videoURL;
+(void) setPhotoAssetID:(NSString*)assetID forFilename:(NSString*)fileName captureDateTime:(NSString*)captureDateTime;
+(void) setUpdatedStreamID:(NSString*)streamID forOldStreamID:(NSString*)oldStreamID completion:(void (^)(void))completionBlock;
+(void) setCommentCount:(NSString*)commentCount forAssetID:(NSString*)assetID inStream:(NSString*)streamID;
+(void) setLikedByYou:(BOOL)likedByYou forAssetID:(NSString*)assetID inStream:(NSString*)streamID;
+(void) setDuplicateParent:(NSString*)assetID previousParent:(NSString*)parentID;
+(void) setDetailsForAsset:(NSString*)assetID withAssetObject:(NSDictionary*)asset;
+(void) setS3LinkExpired:(NSString*)assetID;
+(void) setAllS3LinksExpiredForStream:(NSString*)streamID;
+(void) setUploadStartTimeForAssetWithFilename:(NSString*)fileName andCreationDate:(NSString*)creationDate inStream:(NSString*)streamID;

// Delete
+(void) deleteAsset:(NSString*)assetID filename:(NSString*)filename creationDateUTC:(NSString*)creationDateUTC fromStream:(NSString*)streamID completionBlock:(void (^)(void))completionBlock;
// This removes anything that was inserted by the pre-upload function, but didn't come back when getting the assets from the server. This will remove any local-only photos from a stream.
+(void) deleteUnverifiedPhotosFromStream:(NSString*)streamID completionBlock:(void (^)(void))completionBlock;
// This will take a filename/creationdate and remove it from any streams where it is a temp file. This is for when we have 'already uploaded an image' but it's not getting assigned an AssetID, which usually is some kind of server error at some point.
+(void) deleteAllUnverifiedPhotosFromStreams:(void (^)(void))completionBlock;
+(void) deleteUnverifiedPhotoFromStreams:(NSString*)filename creationDateUTC:(NSString*)creationDateUTC completionBlock:(void (^)(void))completionBlock;
// This takes an array of photos from the server, and removes any photos in the stream that meet this criteria:
//  1) Have an assetID (meaning they've been uploaded and aren't pre-upload display)
//  2) Are not present in the stream (meaning they've likely been deleted)
+(void) deleteVerifiedPhotosFromStreamNotInArray:(NSString*)streamID photos:(NSArray*)photos completionBlock:(void (^)(void))completionBlock;
// This un-deletes any images that we might think have been deleted, but the server is telling us haven't been
+(void) unDeleteAssetIDsFromServer:(NSArray*)assets forStream:(NSString*)streamID;
+(void) deleteImageFromPB:(NSString*)assetID filename:(NSString*)filename creationDateUTC:(NSString*)creationDateUTC;
+(void) deleteAllAssetsFromStream:(NSString*)streamID;
// Leaves assets that are being uploaded, or have been uploaded and the server doesn't say they exist yet
+(void) deleteAllUploadedAssetsFromStream:(NSString*)streamID;
+(void) deleteUploadingAssetsFromStream:(NSString*)streamID withCaptureTimes:(NSArray*)captureDateTimes;

// Other
+(void) compareInstantToUploads;

// Favorites Cache
+(void) setAssetsLikedByUser:(NSArray*)data inStream:(NSString*)streamServerID liked:(BOOL)isLiked completion:(void (^)(void))completionBlock;
+(NSString*)assetLikedByUserInSubCache:(NSString*)assetID inStream:(NSString*)streamID;

// Comment count cache
+(void) setAssetCommentCount:(NSString*)assetID commentCount:(NSString*)commentCount inStream:(NSString*)streamServerID completion:(void (^)(void))completionBlock;
+(NSString*)assetCommentCount:(NSString*)assetID inStream:(NSString*)streamID;
+(BOOL)assetCommentCountShouldRefresh:(NSString*)assetID inStream:(NSString*)streamID;
+(void)assetCommentCountSetShouldRefreshForStream:(NSString*)streamID;

// Testing
+(void) setAllImagesExpired:(NSString*)streamID;

@end
