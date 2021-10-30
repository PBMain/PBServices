@interface ServicesStreams : NSObject
{
    
}

// Create
+(void) createPhotoStream:(NSString*)name startDate:(NSDate*)startDate endDate:(NSDate*)endDate isManual:(BOOL)isManual completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) createPhotoStreamFromLocal:(NSString*)name startDate:(NSDate*)startDate endDate:(NSDate*)endDate isUpcoming:(BOOL)isUpcoming requestId:(NSString*)uuid isManual:(BOOL)isManual completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Edit
+(void) setPhotoStreamLike:(NSString*)photoStreamId isFavorite:(BOOL)isFavorite completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
+(void) getPhotoStreamLike:(NSString*)streamID completionBlock:(void (^)(BOOL isLiked))completionBlock errorBlock:(void (^)(id response))errorBlock;
+(void) photoStreamChangeName:(NSString*)streamAlbumId newName:(NSString*)newName completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) stopPhotoStream:(NSString*)streamID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Sharing
+(void) sharePhotoStream:(NSString*)albumId recipients:(NSArray*)recipients completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
// V3
+(void) photoStreamUpdateParticipantInStream:(NSString*)streamID participantID:(NSString*)participantID isContributing:(BOOL)isContributing completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) removeRecipientFromPhotoStream:(NSString*)streamAlbumId phone:(NSString*)phone completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) photoStreamSetViewerToCollaborator:(NSString*)streamAlbumId phoneNumber:(NSString*)phoneNumber completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) photoStreamSetCollaboratorToViewer:(NSString*)streamAlbumId phoneNumber:(NSString*)phoneNumber completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Delete
+(void) photoStreamDelete:(NSString*)streamID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) leavePhotoStream:(NSString*)streamID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

+(void) webTokenForStreamLink: (NSString*) streamID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

/* STREAMS BY FOLDER */

// Create
+(void) createPhotoStream:(NSString*)name startDate:(NSDate*)startDate endDate:(NSDate*)endDate isManual:(BOOL)isManual inFolder:(NSString*)folderID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) createPhotoStreamFromLocal:(NSString*)name startDate:(NSDate*)startDate endDate:(NSDate*)endDate isUpcoming:(BOOL)isUpcoming requestId:(NSString*)uuid isManual:(BOOL)isManual inFolder:(NSString*)folderID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Get Streams
// V3
+(void) getPhotoStreamsSummaryForFolder:(NSString*)folderID completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPhotoStreamsSummaryPrivateForFolder:(NSString*)folderID completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPhotoStreamsSummaryPublicForFolder:(NSString*)folderID completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
// Stream Assets (V3)
+(void) getStreamAssetsInfo:(NSString*)streamID completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getStreamAssetsPaged:(NSString*)streamID startIndex:(int)startIndex pageSize:(int)pageSize sortAscending:(BOOL)sortAscending completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getStreamUserAssetsPaged:(NSString*)streamID startIndex:(int)startIndex pageSize:(int)pageSize sortAscending:(BOOL)sortAscending completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getStreamAssetsPagedNoVideo:(NSString*)streamID startIndex:(int)startIndex pageSize:(int)pageSize sortAscending:(BOOL)sortAscending completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getStreamHighlightsPaged:(NSString*)streamID startIndex:(int)startIndex pageSize:(int)pageSize sortAscending:(BOOL)sortAscending completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getStreamCategoryAssetsPaged:(NSString*)streamID categoryID:(NSString*)categoryID startIndex:(int)startIndex pageSize:(int)pageSize sortAscending:(BOOL)sortAscending completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getStreamPersonAssetsPaged:(NSString*)streamID personID:(NSString*)personID startIndex:(int)startIndex pageSize:(int)pageSize sortAscending:(BOOL)sortAscending completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getStreamAssetDetails:(NSString*)streamID assetID:(NSString*)assetID completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) deleteStreamAsset:(NSString*)streamID assetID:(NSString*)assetID completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) deleteAsset:(NSString*)assetID completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Edit (V3)
+(void) photoStreamEdit:(NSString*)streamID newStartDate:(NSDate*)newStartDate newEndDate:(NSDate*)newEndDate newName:(NSString*)name newInviteCode:(NSString*)inviteCode manualContribution:(NSNumber*)manualContribution completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Comments (V3)
+(void) getStreamComments:(NSString*)streamID completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
+(void) getStreamAssetComments:(NSString*)streamID assetID:(NSString*)assetID completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;

// Join Streams
+(void) joinStreamWithInviteCode:(NSString*)inviteCode folderID:(NSString*)folderID completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
+(void) joinStreamWithWebToken:(NSString*)webToken completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;

+ (void) reportUser: (NSString *) userID
           streamId: (NSString *) streamId
            assetId: (NSString *) assetID
    completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;

+ (void) reportAsset: (NSString *) assetID
            streamId: (NSString *) streamId
     completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;

+ (void) reportComment: (NSString *) commentID
              streamId: (NSString *) streamId
               assetId: (NSString *) assetId
       completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;;

// Loading and caching overlay images
+(void) loadOverlayImageFromURL:(NSString*)urlString withIdentifier:(NSString*)identifier resizeToThumb:(BOOL)resizeToThumb completionBlock:(void (^)(UIImage* image))completionBlock;

@end
