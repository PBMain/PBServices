//
//  Services.h
//  PhotoButler
//
//  Created by Daniel Spencer on 5/10/16.
//  Copyright © 2016 Photo Butler. All rights reserved.

// Photos
@import Photos;

// For testing laggy returns. This value in seconds represents how long we wait after getting a response to actually do anything with that response
#define introducedLagOnCalls 0.0

// Services
#import "ServicesStreams.h"
#import "ServicesOfflineMode.h"
#import "ServicesAssets.h"
#import "ServicesUploads.h"
#import "ServicesUploadsVideo.h"
#import "ServicesUploadsSelected.h"
#import "ServicesComments.h"
#import "ServicesClient.h"
#import "ServicesActivityFeed.h"
#import "ServicesVIPs.h"

#import "NSString+RemoveEmoji.h"

@interface Services : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLConnectionDelegate>
{
    
}

@property (nonatomic) BOOL displayReachPopup;

@property (atomic) NSRecursiveLock *dbLock;
@property (atomic) NSRecursiveLock *imageHashLock;
@property (atomic) NSMutableArray *tasksCreated;
@property (atomic) NSRecursiveLock *tasksCreatedLock;
@property (atomic) NSRecursiveLock *timeoutLock;
@property (atomic) NSRecursiveLock *countCacheLock;
@property (atomic) NSRecursiveLock *timeoutCallbackLock;
@property (nonatomic) NSMutableArray *timeoutCallbacks;
@property (nonatomic) NSMutableDictionary *currentPriorityDate;
@property (nonatomic) NSMutableArray *imageViewForLoading;
@property (nonatomic) PHCachingImageManager *imageManager;
@property (nonatomic, strong) NSURLSession *session;
@property (nonatomic, strong) NSURLSession *profileSession;
@property (nonatomic, strong) NSURLSession *sessionWithCustomTimeout;
@property (nonatomic, strong) NSMutableData *responseData;
@property (nonatomic) int maxProcessedQueueSize;
@property (nonatomic) int timeoutCount;
@property (nonatomic,assign) BOOL isWifi;
@property (nonatomic,assign) BOOL isData;
@property (nonatomic,assign) BOOL hasCheckedReach;
@property (nonatomic,assign) BOOL isProcessing;
@property (nonatomic,assign) BOOL isLoggingIn;
@property (nonatomic,assign) BOOL isWaitingForConnection;
@property (nonatomic,assign) BOOL isBackground;
@property (nonatomic,assign) BOOL isGettingPhotos;
@property (nonatomic,assign) BOOL isGettingUserFriendSummaryFromServer;
@property (nonatomic,assign) BOOL isGettingPersonPhotos;
@property (nonatomic,assign) BOOL isGettingLocationPhotos;
@property (nonatomic,assign) BOOL isGettingLocationPhotosById;
@property (nonatomic,assign) BOOL isGettingMagicAlbums;
@property (nonatomic,assign) BOOL isGettingMagicAlbumById;
@property (nonatomic,assign) BOOL isCreatingMagicAlbum;
@property (nonatomic,assign) BOOL isGettingAllImages;
@property (nonatomic,assign) BOOL isDoneAllImages;
@property (nonatomic,assign) BOOL isRefreshingStreamsOnTimer;
@property (nonatomic,assign) int shouldRefreshAssetArrayCount;
@property (nonatomic) NSString *tokenFromUniversalLink;
@property (nonatomic) NSString *psIdFromNotification;
@property (nonatomic) NSString *assetIdFromNotification;
@property (nonatomic) NSString *inviteCodeFromNotification;
@property (nonatomic) NSString *commentIdFromNotification;
@property (nonatomic) NSString *shareTokenFromNotification;

@property (nonatomic) NSMutableDictionary *timeLog;
@property (nonatomic) double timestart;
@property (nonatomic) double deviceIdChecksLeft;
@property (nonatomic) double backgroundTimestart;
@property (nonatomic) double totalSizeInKB;
@property (nonatomic) NSTimer *refreshViewsTimer;
@property (nonatomic) NSTimer *refreshPhotoStreamViewsTimer;
@property (nonatomic) NSTimer *timerWifiPopup;
@property (nonatomic) NSTimer *retryFriendSummary;
@property (nonatomic) NSTimer *retryLocationSummary;
@property (nonatomic) NSTimer *retryLogin;
@property (nonatomic) NSTimer *setFadeSleepTimer;
@property (nonatomic) NSTimer *buildNewImageHashTableRetryTimer;
@property (nonatomic) NSTimer *everyTenSecondsTimer;
@property (nonatomic) BOOL isProcessingNewPhotos;
@property (nonatomic) BOOL wifiCanPopup;
@property (nonatomic) int photoAssetCheckLimit;
@property (nonatomic) NSOperationQueue* opQueue;
@property (nonatomic) int resultCount;
@property (nonatomic) NSMutableArray *holidayImages;

// For contacts saving
@property (nonatomic) NSMutableArray *contactsEmail;
@property (nonatomic) NSMutableArray *contactsPhone;
@property (nonatomic) NSMutableArray *contactsName;
@property (nonatomic) NSDate *contactsEmailLastFetched;
@property (nonatomic) NSDate *contactsPhoneLastFetched;
@property (nonatomic) NSDate *contactsNameLastFetched;

+ (instancetype)sharedDelegate;
+ (NSURLSession*)sharedSession;
+ (NSURLSession*)sharedProfileSessionWithTimeout:(float)timeout;
+ (NSURLSession*)sharedProfileSession;

// Services
-(void) initWithServer:(void (^)(id success))completionBlock error:(void (^)(id response))errorBlock;
-(void) initWithServer:(void (^)(id success))completionBlock error:(void (^)(id response))errorBlock shouldErrorOnConnectivity:(BOOL)shouldErrorOnConnectivity;
// Nearby streams by lat/long
-(void) getStreamsByLocation:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) checkLogin;
-(void) sendPhoneForOTP:(NSString*)phoneNumber email:(NSString*)email completionBlock:(void (^)(id success))completionBlock;
-(void) verifyOTP:(NSString*)otp completionBlock:(void (^)(id success))completionBlock;
-(void) reAuth:(void (^)(id success))completionBlock userLoggedOut:(void (^)(void))userLoggedOutBlock;
-(void) getCurrentUser:(void (^)(id success))completionBlock error:(void (^)(id error))errorBlock;
-(void) loginUnnamedUserWithCompletion:(void (^)(id success))completionBlock error:(void (^)(id error))errorBlock;
-(void) login:(NSString*)login withPassword:(NSString*)password completion:(void (^)(id success))completionBlock error:(void (^)(id error))errorBlock;
-(void) createUnnamedUserWithCompletion:(void (^)(id success))completionBlock error:(void (^)(id error))errorBlock;
-(void) registerWithLogin:(NSString*)login andPassword:(NSString*)password completion:(void (^)(id success))completionBlock error:(void (^)(id error))errorBlock;
-(void) updateLoginToVersionOne:(void (^)(id success))completionBlock;
-(void) setProfileImage:(UIImage*)image cropRectangle:(CGRect)rectangle completionBlock:(void (^)(id success))completionBlock;
-(void) registerForPushNotifications:(void (^)(id success))completionBlock;
-(void) updateDeviceId:(id)newDeviceId callbackDelegate:(void (^)(id response))callbackDelegate;
-(void) silentUpdateToken:(void (^)(id success))completionBlock;
-(void) subscribePushNotifications:(void (^)(id success))completionBlock;

// Update Profile
-(void) updateUserProfileInfo:(NSString*)firstName lastName:(NSString*)lastName cellPhoneNumber:(NSString*)cellPhoneNumber email:(NSString*)emailId personId:(NSString*)personId completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
// Person
-(void) getUserFriendSummaryFromServer:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) updateFriendData:(NSString*)friendId name:(NSString*)name phoneNumber:(NSString*)phoneNumber email:(NSString*)email birthDate:(NSString*)birthDate completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
-(void) getFriendsRecentImages:(NSString*)friendIds completion:(void (^)(id response))completionBlock;
-(void) getFriendsLocationImages:(NSString*)personId completion:(void (^)(id response))completionBlock;
-(void) getFriendsLocationImagesByMonth:(NSString*)personId locationId:(NSString*)locationId completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getFriendsMonthlyImages:(NSString*)personId completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getPhotoStreamsForPerson:(NSString*)personId completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
// Person Clustering
-(void) getUnidentifiedPeople:(NSString*)personId completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getIdentifiedPeople:(NSString*)personId completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getPersonsCluster:(NSString*)personId completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) addPersonsToCluster:(NSString*)personId personsArray:(NSArray*)personsToAdd completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) splitPersonsFromCluster:(NSString*)personId personsArray:(NSArray*)personsToRemove completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) removePersonFromEntireApp:(NSString*)personId completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) switchMasterPersonIdInCluster:(NSString*)oldPersonId newMasterId:(NSString*)newPersonId completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getSimilarFacesForCluster:(NSString*)personId completionBlock:(void (^)(id people))completionBlock error:(void (^)(id response))errorBlock;
-(void) resetAllPersonsInCluster:(NSString*)personId completionBlock:(void (^)(id people))completionBlock error:(void (^)(id response))errorBlock;
-(void) getLiveStreamsTimer:(void (^)(id people))completionBlock error:(void (^)(id response))errorBlock;

// Location
-(void) getImagesGroupByLocation:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getLocationPhotos:(NSString*)locationId completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getPeopleAtLocation:(NSString*)locationId completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Occasion
-(void) tellServerToCreateOccasion:(NSString*)typeId completionBlock:(void (^)(id response))completionBlock;
-(void) getUsersOccasions:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getUsersOccasionAssets:(NSString*)occasionId completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getPersonsOccasions:(NSString*)personId completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getPersonsOccasionAssets:(NSString*)personId occasionId:(NSString*)occasionId completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getFriendInOccasion:(NSString*)occasionTypeId completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getOccasionSplitByYear:(NSString*)typeId completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getOccasionYearTopSection:(NSString*)typeId year:(NSString*)year completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getOccasionYearBottomSection:(NSString*)typeId year:(NSString*)year completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;


// Timeline
-(void) getUserImagesGroupByMonth:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
// Auth String
-(NSString*) getParamsForAuth;

// Magic Albums
-(void) createMagicAlbum:(NSString*)albumParameterString name:(NSString*)name completionBlock:(void (^)(id name, id albumid))completionBlock error:(void (^)(id response))errorBlock;
-(void) getMagicAlbumsSummary:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getMagicAlbumImages:(NSString*)albumId completionBlock:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) filterImages:(NSString*)searchParameterString completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getPeopleForMagicAlbum:(NSString*)albumParameterString completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) removeAssetsFromMagicAlbum:(NSString*)albumId assetsToRemove:(NSArray*)assetsToRemove completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) removeAssetsFromPhotoStream:(NSString*)streamId assetIDsToRemove:(NSArray*)assetIDsToRemove assetDetails:(NSArray*)assetDetails completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) removeAssetsFromOccasion:(NSString*)occasionId assetsToRemove:(NSArray*)assetsToRemove completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) removeMagicAlbum:(NSString*)albumId completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) peopleSeenInMagicAlbum:(NSString*)albumId completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getParamsForEditingMagicAlbum:(NSString*)albumId completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) editParamsForMagicAlbum:(NSString*)albumId albumParameterString:(NSString*)albumParameterString completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) editNameForMagicAlbum:(NSString*)albumId name:(NSString*)name completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getFirstPhotoStreamAssets:(NSString*)albumId completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getPhotoStreamAssets:(NSString*)albumId completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getCategoryAssets:(NSString*)albumId categoryId:(NSInteger)catID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getPagedCategoryAssets:(NSString*)albumId categoryId:(NSInteger)catID page:(int)page pageSize:(int)pageSize ascending:(BOOL)ascending completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getPagedCategoryHighlights:(NSString*)albumId categoryId:(NSInteger)catID page:(int)page pageSize:(int)pageSize ascending:(BOOL)ascending completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getPhotoStreamBlackoutTimes:(NSString*)albumId completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) getSharedPhotoStreamRecipients:(NSString*)albumId completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
-(void) updateContributorStatus:(NSString*)streamAlbumId ownerId:(NSString*)ownerId newStatus:(NSString*)newStatus retryString:(NSString*)retryString completion:(void (^)(id response))completionBlock error:(void (^)(id response, NSInteger responseStatusCode))errorBlock;
-(void) getPhotoStreamAssetsByPersonId:(NSString*)streamAlbumId personId:(NSString*)personId ownerId:(NSString*)ownerId completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) photoStreamPersonAsUIImage:(NSString*)personId streamId:(NSString*)photoStreamId completionBlock:(void (^)(id response))completionBlock;
-(void) getPhotoStreamCommentCounts:(NSArray*)psids completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
-(void) setStreamCover:(UIImage*)image streamID:(NSString*)streamID completionBlock:(void (^)(id success))completionBlock;

// Activity Feed
-(void) getActivitySince:(NSDate*)since completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
-(void) getIsActivity:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;

// Likes / Liking / Favorites (deprecating this one)
-(void) setPhotoLike:(NSString*)assetId photoStreamId:(NSString*)photoStreamId isFavorite:(BOOL)isFavorite completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
// Use this one, which takes the internal ID of the asset, in case it hasn't been uploaded yet
-(void) setPhotoLike:(NSString*)assetId photoStreamId:(NSString*)photoStreamId streamAssetID:(NSString*)streamAssetID isFavorite:(BOOL)isFavorite completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;

// Duplicate photo handling
-(void)addPhotosToCluster:(NSNumber*)masterAssetId assetList:(NSMutableArray*)assetList completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;

-(void)splitPhotosFromCluster:(NSMutableArray*)assetList completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;

-(void)switchMasterAssetIdFrom:(NSString*)masterAssetId to:(NSString*)newMasterAssetId inStreamByID:(NSString*)streamID completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;

-(void)resetAllPhotosInCluster:(NSNumber*)masterAssetId completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;

// Remove from PhotoButler
-(void) removeAssetsFromPhotoButler:(NSArray*)assetIDsToRemove assetDetails:(NSArray*)assetDetails completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Magic Tiles (Header Tiles)
-(void) getMagicTiles:(NSString*)tileParameterString completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Search
-(void) searchImages:(NSString*)searchParameterString completion:(void (^)(id response))completion error:(void (^)(id response))errorHandler;
//-(void) getFriendsLocationImages:(NSString*)personId;

// Sharing
// Get basic info of a stream based on invite code
-(void) getStreamFromInviteCode:(NSString*)inviteCode completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
// Get all liked photos
-(void) getLikedPhotos:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
// Add self to stream using invite code
-(void) joinStreamWithInviteCode:(NSString*)inviteCode completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
// Create share link from assetids
-(void) shareCreateLink:(NSString*)albumName assets:(NSMutableArray*)assets recipientEmails:(NSArray*)emails recipientPhones:(NSArray*)phones completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
// Create share link from magic album
-(void) shareMagicAlbum:(NSString *)albumId recipientEmails:(NSArray*)emails recipientPhones:(NSArray*)phones completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
// Get albums shared with this user
-(void) getSharedAlbumsToThisUser:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
// Get assets in an album shared with this user
-(void) getAlbumSharedWithUser:(NSString*)albumId completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
// Get albums shared by this user
-(void) getSharedAlbumsFromThisUser:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
// Get assets in an album shared by this user
-(void) getSharedAlbumAssets:(NSString*)albumId userId:(NSString*)userId completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
// Get shared album recipients (For shared by you)
-(void) getSharedAlbumRecipients:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
// Get top ten people shared with
-(void) getSharedAlbumTopTenRecipients:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;
// Get user information for users we have userid for but not name and/or masterpersonid
-(void) getUsers:(NSArray*)userIds completionBlock:(void (^)(id response))completionBlock errorBlock:(void (^)(id response))errorBlock;

// Get all uploaded images (refresh uploaded image array)
-(void) updateUploadedImagesFromServer;

// Crashlytics
- (void) logCrashlyticsUser;
@property (nonatomic,assign) BOOL crashUserSet;

// Internal Logging
-(void) log:(NSString*) message;

// Builds POST content for multipart
+(NSData *) createBodyWithBoundary:(NSString *)boundary data:(NSData*)data filename:(NSString *)filename creationDate:(NSString*)creationDate originalWidth:(int)originalWidth originalHeight:(int)originalHeight;

// Image resize
+ (NSData *)JPEGRepresentationSavedMetadataWithImage:(NSData *)imageData compressionQuality:(CGFloat)compressionQuality maxSize:(CGFloat)maxSize filename:(NSString*)filename;

// Detect debugging console
+ (BOOL)isDebuggerAttached;

// Timers
-(void) timersStart;
-(void) timersKill;
-(void) timersRestart;

// Helpers
// Build search parameter string
+(NSString*) getSearchParams:(NSMutableArray*)personFilters locationIds:(NSMutableArray*)locationFilters occasionIds:(NSMutableArray*)occasionFilters dateTo:(NSString*)dateTo dateFrom:(NSString*)dateFrom;

// Build Attributed String
+(NSMutableAttributedString*) buildAttributedString:(NSString*)theString highlights:(NSArray*)highlights;

// Build image from given vars
+(void) getImageNamed:(NSString*)fileName timeCreated:(NSString*)timeCreated assetId:(NSString*)assetId personId:(NSString*)personId base64:(NSString*)base64 width:(float)width height:(float)height isThumb:(BOOL)isThumb completionBlock:(void (^)(id response))completionBlock;
+(NSString*) getThumbByAssetID:(NSString*)assetId;
+(NSString*) getSomeoneElsesImage:(NSString*)assetId userId:(NSString*)userId albumId:(NSString*)albumId;
+(NSString*) getSomeoneElsesThumbnail:(NSString*)assetId userId:(NSString*)userId albumId:(NSString*)albumId;
+(NSString*) getSomeoneElsesPerson:(NSString *)personId userId:(NSString *)userId sharedAlbumId:(NSString *)albumId;
+(NSString*) getHeroImageForAssetId:(NSString*)assetId albumOwnerId:(NSString*)albumOwnerId sharedAlbumId:(NSString*)sharedAlbumId;

+(NSString *) gmtDate : (NSDate *)deviceDate deviceStr:(NSString *)deviceStr dateFormat:(NSString *)dateFormat;
+(NSDate *) gmtDateM : (NSDate *)deviceDate deviceStr:(NSString *)deviceStr dateFormat:(NSString *)dateFormat;
// Log an error to error log server
-(void)logError:(NSString*)serviceCall error:(NSString*)error;

// Logging when log flags are set
+(void)logEvent:(NSString*)eventName logLevel:(int)logLevel information:(NSDictionary*)info;

-(NSString *)manageDictionaryExport:(NSMutableDictionary *)dict;

-(BOOL) isAnotherAlertVisible;
-(void)popUpAlertForNoWifi;
-(void)popUpCheckWifiAndGenerate;
-(BOOL) isMagicAlbumAPhotoStream:(NSString*)albumID;
-(void) refreshAllViewsInForeground;
-(void) refreshAllViewsInBackground;
-(void) refreshPeopleInForeground;
-(void) refreshPlacesInForeground;
-(void) refreshOccasionsInForeground;
-(void) refreshAlbumsInForeground;
-(void) refreshTimelinesInForeground;
-(void) refreshSharedInForeground;
-(void) everyTenSeconds; // Refreshes certain views if they need it.
+(void) retryAllTimedOutServices;
+(BOOL) handleErrorInImageLoading:(NSError*)error completionBlock:(void (^)(void))completionBlock;
-(void) processInstantPhotos;
-(void) processInstantVideos;

-(BOOL) checkDataWifiForService:(void (^)(id response))completionBlock;
-(BOOL) checkDataWifiForServiceNoPopup:(NSString*)callDescriptor callBack:(void (^)(id response))completionBlock;
-(BOOL) handleError:(NSError*)error fromRequest:(NSURLRequest*)request completionBlock:(void (^)(void))completionBlock;
-(BOOL) handleErrorNoPopup:(NSError*)error fromRequest:(NSURLRequest*)request completionBlock:(void (^)(void))completionBlock;
-(NSMutableURLRequest*) buildUrlRequest:(NSURL*)url;
+(NSData*) jsonDataFromParams:(NSString*)paramString;
-(void) requestDidCompleteSuccessfully;
+(NSDictionary*) dictionaryFromString:(NSString*)theString;
+(NSString*) stringFromDictionary:(NSDictionary*)theDict;

+(void) formEventForAnalytics:(NSMutableDictionary*)props eventName:(NSString*)eventName;
+(void) setUserForAnalytics;

// SDK
-(NSString*) buildAuthStringGETParams;

// Our own date->string conversion (to get around iOS bugs with date formatting)
+(NSString*)dateToString:(NSDate*)date isUTC:(BOOL)isUTC;

// CURL For given request, for testing
+(NSString *)curlForRequest:(NSURLRequest*)req;

// Error checking, to make sure we're ready to make calls
-(NSError*) checkForErrorsBeforeCalling;

+(int) numberOfQueuedCalls;
-(BOOL) checkReachability:(void (^)(BOOL wifiReachable, BOOL wwanReachable, BOOL hasCheckedReach))completionBlock;
-(void) checkConnectivity:(void (^)(BOOL success, NSError *error))completionBlock;
+(void) setUploadProgressBlock:(void (^)(NSString *filename, NSUInteger totalBytes, NSProgress *progress))progressBlock;
+(void) setUploadCompletionBlock:(void (^)(NSString *filename, NSUInteger totalBytes))completionBlock;
+(NSArray*) getUploadsQueued;
+(NSArray*) getUploadsActive;

@end
