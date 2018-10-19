#import "DBManager.h"

@interface DBStreams : DBManager

// Insert
+(void) insertStreams:(NSArray*) data completion:(void (^)(void))completionBlock;

// Update
+(void) setAllPastStreamsNotified:(void (^)(void))completionBlock;
+(void) setAllInactiveStreamsNotifiedInactivity:(void (^)(void))completionBlock;
+(void) setAllStreamsNotNotifiedInactivity:(void (^)(void))completionBlock;
+(void) setStreamShownContributorInvite:(NSString*)streamID completion:(void (^)(void))completionBlock;
+(void) notificationSentForStream:(NSString*)streamID;
+(void) startContributingForStream:(NSString*)streamID;
+(void) startContributingBySelectionForStream:(NSString*)streamID;
+(void) stopContributingForStream:(NSString*)streamID;
+(void) setStreamHasCustomCover:(NSString*)streamID;
+(void) setStreamCoverAssetID:(NSString*)assetID forStreamID:(NSString*)streamID;
+(void) setContributingForStream:(NSString*)streamID contributingCode:(NSString*)code;
+(void) setInviteCodeForStream:(NSString*)streamID inviteCode:(NSString*)code;
+(void) setStreamID:(NSString*)streamID forOfflineModeID:(NSString*)offlineModeID;
+(void) setCommentCount:(NSString*)commentCount forStreamID:(NSString*)streamID;
+(void) setNewStartDate:(NSString*)startDate forStreamID:(NSString*)streamID;
+(void) setNewEndDate:(NSString*)endDate forStreamID:(NSString*)streamID;
+(void) setNewName:(NSString*)name forStreamID:(NSString*)streamID;
+(void) setAllStreamsUploadNotificationSent;
+(void) setStreamHasCached:(NSString*)streamID;
+(void) setStream:(NSString*)streamID likedByYou:(BOOL)likedByYou;
+(void) removeAudienceMemberFromStream:(NSString*)streamID;
+(void) addAudienceMembers:(int)numberOfMembersToAdd toStream:(NSString*)streamID;
+(void) setNumberOfAudienceMembers:(int)numberOfMembers forStream:(NSString*)streamID;
+(void) setStreamStatus:(NSString*)status forStream:(NSString*)streamID;
+(void) setAssetCount:(NSString*)count forStream:(NSString*)streamID;
+(void) setBibPath:(NSString*)bibPath forStream:(NSString*)streamID;
+(void) setBibInfoPath:(NSString*)bibInfoPath forStream:(NSString*)streamID;
+(void) setIsPopupURLAlreadyShown:(BOOL) isPopupURLAlreadyShown forStream:(NSString*)streamID;

// Delete
+(void) deleteStream:(NSString*)streamID;
+(void) deleteLiveStreamsNotPresentInArray:(NSArray*) streams;
+(void) deletePastStreamsNotPresentInArray:(NSArray*) streams;
+(void) deleteUpcomingStreamsNotPresentInArray:(NSArray*) streams;
+(void) deletePublicLiveStreamsNotPresentInArray:(NSArray*) streams;
+(void) deletePublicPastStreamsNotPresentInArray:(NSArray*) streams;
+(void) deletePublicUpcomingStreamsNotPresentInArray:(NSArray*) streams;

// Select
+(NSArray*) getStreamsWithQuery:(NSString*)query completion:(void (^)(NSMutableArray *streamArray))completionBlock;
+(NSArray*) getAllStreams:(void (^)(NSMutableArray *streams))completionBlock;
+(NSArray*) getAllPublicStreams:(void (^)(NSMutableArray *streams))completionBlock;
+(NSArray*) getAllUpcomingPublicStreams:(void (^)(NSMutableArray *streams))completionBlock;
+(NSArray*) getAllLivePublicStreams:(void (^)(NSMutableArray *streams))completionBlock;
+(NSArray*) getAllPastPublicStreams:(void (^)(NSMutableArray *streams))completionBlock;
+(NSArray*) getAllLiveStreams:(void (^)(NSMutableArray *streams))completionBlock;
+(NSArray*) getAllLiveStreamsForStart:(NSDate*)start end:(NSDate*)end completion:(void (^)(NSMutableArray *streams))completionBlock;
+(NSArray*) getAllLiveContributingStreamsForStart:(NSDate*)start end:(NSDate*)end completion:(void (^)(NSMutableArray *streams))completionBlock;
+(NSArray*) getAllLiveContributingInactiveStreams:(void (^)(NSMutableArray *streams))completionBlock;
+(NSArray*) getAllLiveHostingInactiveStreams:(void (^)(NSMutableArray *streams))completionBlock;
+(NSArray*) getAllPastStreams:(void (^)(NSMutableArray *streams))completionBlock;
+(NSArray*) getPagedPastStreams:(int)page numberPerPage:(int)number completion:(void (^)(NSMutableArray *streams))completionBlock;
+(NSArray*) getPagedPastPublicStreams:(int)page numberPerPage:(int)number completion:(void (^)(NSMutableArray *streams))completionBlock;
+(NSArray*) getPagedPastMyStreams:(int)page numberPerPage:(int)number completion:(void (^)(NSMutableArray *streams))completionBlock;
+(NSArray*) getPagedPastOthersStreams:(int)page numberPerPage:(int)number completion:(void (^)(NSMutableArray *streams))completionBlock;
+(NSArray*) getPagedPastFavoriteStreams:(int)page numberPerPage:(int)number completion:(void (^)(NSMutableArray *streams))completionBlock;
+(NSArray*) getAllPastStreamsNotNotified:(void (^)(NSMutableArray *streams))completionBlock;
+(NSArray*) getAllUpcomingStreams:(void (^)(NSMutableArray *streams))completionBlock;
+(NSDictionary*) getStream:(NSString*)streamID completion:(void (^)(id userDict))completionBlock;
+(NSString*) getStreamIDForOfflineModeID:(NSString*)offlineModeID;
+(NSString*) getStreamNameForID:(NSString*)streamID;
+(BOOL) canSendNotificationForStream:(NSString*)streamID;
+(BOOL) hasStreamEndedMoreThanTwoHoursAgo:(NSString*)streamID;
+(BOOL) isStreamLocalOnly:(NSString*)streamID;
+(BOOL) isStreamPublic:(NSString*)streamID;
+(BOOL) hasCustomCoverChangedForStream:(NSString*)streamID newCover:(NSString*)coverDate;
+(BOOL) hasHighlightCoverChangedForStream:(NSString*)streamID newCover:(NSString*)coverID;
+(int) getTotalStreamCount;
+(int) getHostedStreamCount;
+(NSDate*) getStartDateForStream:(NSString*)streamID;
+(NSDate*) getEndDateForStream:(NSString*)streamID;
+(NSString*) getOwnerIDForStreamID:(NSString*)streamID;

// Returns an array of streams that meet the requirements for review.
// Meaning, if a stream needs to be contributed to by this user, and the user needs to have contributed 15 photos to that stream, this will return all streams that meet those criteria.
+(NSArray*) meetsRequirementsForReview;

// Joined Selects
+(NSArray*) getStreamsWithCachedAssets;
+(BOOL) getStreamHasCachedAssets:(NSString*)streamID;

@end
