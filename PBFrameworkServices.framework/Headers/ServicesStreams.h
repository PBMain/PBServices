@interface ServicesStreams : NSObject
{
    
}

// Create
+(void) createPhotoStream:(NSString*)name startDate:(NSDate*)startDate endDate:(NSDate*)endDate isManual:(BOOL)isManual completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) createPhotoStreamFromLocal:(NSString*)name startDate:(NSDate*)startDate endDate:(NSDate*)endDate isUpcoming:(BOOL)isUpcoming requestId:(NSString*)uuid isManual:(BOOL)isManual completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Get Streams
+(void) getPhotoStreamsSummary:(BOOL)isLive completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPhotoStreamsSummary:(BOOL)isLive isUpcoming:(BOOL)isUpcoming numberOfStreams:(NSNumber*)numberOfStreams page:(NSNumber*)page completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPhotoStreamsSummaryUpcoming:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPhotoStream:(NSString*)streamId status:(NSNumber*)status completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPublicLivePhotoStreamsSummary:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPublicPastPhotoStreamsSummary:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPublicUpcomingPhotoStreamsSummary:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Get Stream Assets
+(void) getPhotoStreamAssetsNoS3:(NSString*)streamID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPhotoStreamAssetsS3Links:(NSString*)streamID startIndex:(int)startIndex numberRows:(int)numberRows isMeta:(BOOL)isMeta oldToNew:(BOOL)oldToNew completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPhotoStreamHighlightsNoS3First:(NSString*)streamID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPhotoStreamHighlightsS3Links:(NSString*)streamID startIndex:(int)startIndex numberRows:(int)numberRows completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPhotoStreamHighlightsS3Links:(NSString*)streamID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPhotoStreamTOC:(NSString*)streamID tocLink:(NSString*)tocLink completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Edit
+(void) photoStreamChangeDates:(NSString*)streamAlbumId newStartDate:(NSString*)newStartDate newEndDate:(NSString*)newEndDate completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) photoStreamChangeEndDate:(NSString*)streamAlbumId newEndDate:(NSString*)newEndDate completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) setPhotoStreamLike:(NSString*)photoStreamId isFavorite:(BOOL)isFavorite completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
+(void) getPhotoStreamLike:(NSString*)streamID completionBlock:(void (^)(BOOL isLiked))completionBlock errorBlock:(void (^)(id response))errorBlock;
+(void) photoStreamChangeName:(NSString*)streamAlbumId newName:(NSString*)newName completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) updatePhotoStreamStatus:(NSString*)streamAlbumId newStatus:(NSString*)newStatus completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
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
+(void) getStreamHighlightsPaged:(NSString*)streamID startIndex:(int)startIndex pageSize:(int)pageSize sortAscending:(BOOL)sortAscending completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getStreamCategoryAssetsPaged:(NSString*)streamID categoryID:(NSString*)categoryID startIndex:(int)startIndex pageSize:(int)pageSize sortAscending:(BOOL)sortAscending completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getStreamPersonAssetsPaged:(NSString*)streamID personID:(NSString*)personID startIndex:(int)startIndex pageSize:(int)pageSize sortAscending:(BOOL)sortAscending completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getStreamAssetDetails:(NSString*)streamID assetID:(NSString*)assetID completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) deleteStreamAsset:(NSString*)streamID assetID:(NSString*)assetID completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) deleteAsset:(NSString*)assetID completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// OLD
+(void) getPhotoStreamsSummary:(BOOL)isLive inFolder:(NSString*)folderID completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPhotoStreamsSummary:(BOOL)isLive isUpcoming:(BOOL)isUpcoming numberOfStreams:(NSNumber*)numberOfStreams page:(NSNumber*)page inFolder:(NSString*)folderID completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPhotoStreamsSummaryUpcoming:folderID completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPublicLivePhotoStreamsSummary:folderID completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPublicPastPhotoStreamsSummary:folderID completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getPublicUpcomingPhotoStreamsSummary:folderID completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Edit (V3)
+(void) photoStreamEdit:(NSString*)streamID newStartDate:(NSDate*)newStartDate newEndDate:(NSDate*)newEndDate newName:(NSString*)name newInviteCode:(NSString*)inviteCode manualContribution:(NSNumber*)manualContribution completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Comments (V3)
+(void) getStreamComments:(NSString*)streamID completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
+(void) getStreamAssetComments:(NSString*)streamID assetID:(NSString*)assetID completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;

// Join Streams
+(void) getStreamFromInviteCode:(NSString*)inviteCode folderID:(NSString*)folderID completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
+(void) joinStreamWithInviteCode:(NSString*)inviteCode folderID:(NSString*)folderID completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
+(void) joinStreamWithWebToken:(NSString*)webToken completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;

@end
