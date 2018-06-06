// Server Location / Information on each build
// ------ Beta / "Photo Butler App" In iTunes Connect ------
// App ID In Build Target: com.photobutler.PhotoButlerBeta
// ICON AssetPack In Build Target: AppIconBeta
/*
 #define cMixpanelToken @"c9f33b73e627bc4ef8744e0fcfe286e7"
 // Is DEV Facebook ID
 #define cFacebookAppId @"960223207430209"
 #define cServerDirectory @"photobutler_V1.4"
 #define cServer [NSString stringWithFormat:@"%@%@", @"https://blkx.photobutler.com/", cServerDirectory]
 #define cUploadEndpoint [NSString stringWithFormat:@"%@%@", @"https://blkx.photobutler.com/", cServerDirectory]
 #define isAdminVersion NO
 #define cServerType @"Production"
 */
// ------ Admin / "PhotoButler Admin" In iTunes Connect  ------
// App ID In Build Target: com.yourvideokeepsakes.PhotoButlerAdmin
// ICON AssetPack In Build Target: AppIconAdmin
//#define cMixpanelToken @"038ce02309c68eebebe13a66d78429f8"
// Is DEV Facebook ID
//#define cFacebookAppId @"960223207430209"
//#define cServerDirectory @"photobutler"
//#define cServer [NSString stringWithFormat:@"%@%@", @"http://services-dev.photobutler.com/", cServerDirectory]
//#define cUploadEndpoint [NSString stringWithFormat:@"%@%@", @"http://services-dev.photobutler.com/", cServerDirectory]
//#define isAdminVersion YES
//#define cServerType @"Admin"

// ------ Staging / "Photo Butler Staging" In iTunes Connect  ------
// App ID In Build Target: com.photobutler.PhotoButlerStaging
// ICON AssetPack In Build Target: AppIconStaging
/*
 #define cMixpanelToken @"7acf7f70f50bfce516bd1969b002c2fc"
 // Is DEV Facebook ID
 #define cFacebookAppId @"960223207430209"
 #define cServerDirectory @"photobutler_v1.6"
 #define cServer [NSString stringWithFormat:@"%@%@", @"http://services-qa.photobutler.com/", cServerDirectory]
 #define cUploadEndpoint [NSString stringWithFormat:@"%@%@", @"http://services-qa.photobutler.com/", cServerDirectory]
 #define isAdminVersion NO
 #define cServerType @"Staging"
 */

// ------ Lite / "Photo Butler Lite" In iTunes Connect ------
// App ID In Build Target: com.photobutler.PhotoButlerLite
// ICON AssetPack In Build Target: AppIconBeta

#define cMixpanelToken @"48837303f16edb45e643d8e2b8cbecea"
#define cFacebookAppId @"847948338671877"
#define IntercomAppId @"vchaj5cv"
#define IntercomAPIKey @"ios_sdk-035465bd098527227c022744b7e23514e247d3fa"
#define cNanigansId @"584857"
#define cNaniganInTestMode NO
#define cMixpanelTestMode NO
#define cNodeJSServerDirectory @"v2/s"
#define cServer [NSString stringWithFormat:@"%@%@", @"https://prjs.photobutler.com/", cNodeJSServerDirectory]
#define cNodeJSServer [NSString stringWithFormat:@"%@%@", @"https://prjs.photobutler.com/", cNodeJSServerDirectory]
#define cSocketIOServer [NSString stringWithFormat:@"%@", @"https://notification.photobutler.com/photo"]
#define cWebViewServer [NSString stringWithFormat:@"%@", @"https://m2.pb.life/"]
#define isAdminVersion NO
// Router call
#define cRouterURL [NSString stringWithFormat:@"https://router.photobutler.com/"]
#define cRouterBuildType @"prod"

// ------  QA  / "Photo Butler QA" In iTunes Connect   ------
// App ID In Build Target: com.photobutler.PhotoButlerQA
// ICON AssetPack In Build Target: AppIconStaging
/*
#define cMixpanelToken @"771c9c7e26a613249d71e02700a0ee5e"
#define cFacebookAppId @"960223207430209"
#define IntercomAppId @"lad0o4jk"
#define IntercomAPIKey @"ios_sdk-656bf0cb856ca58bccc1a8be610d4b6fdde87018"
#define cNanigansId @"584857"
#define cNaniganInTestMode YES
#define cMixpanelTestMode YES
#define cNodeJSServerDirectory @"v2/s"
#define cServer [NSString stringWithFormat:@"%@%@", @"http://qajs.photobutler.com/", cNodeJSServerDirectory]
#define cNodeJSServer [NSString stringWithFormat:@"%@%@", @"http://qajs.photobutler.com/", cNodeJSServerDirectory]
#define cSocketIOServer [NSString stringWithFormat:@"%@", @"https://qa-notification.photobutler.com/photo"]
#define cWebViewServer [NSString stringWithFormat:@"%@", @"http://qa-webview.photobutler.com/"]
#define isAdminVersion NO
// Router call
#define cRouterURL [NSString stringWithFormat:@"https://router-qa.photobutler.com/"]
#define cRouterBuildType @"qa"
*/
// ------  Dev / "Photo Butler Dev" In iTunes Connect  ------
// App ID In Build Target: com.photobutler.PhotoButlerDev
// ICON AssetPack In Build Target: AppIconDev
/*
#define cMixpanelToken @"038ce02309c68eebebe13a66d78429f8"
#define cFacebookAppId @"960223207430209"
#define IntercomAppId @""
#define IntercomAPIKey @""
#define cNanigansId @"584857"
#define cNaniganInTestMode YES
#define cMixpanelTestMode YES
#define cNodeJSServerDirectory @"v2/s"
#define cServer [NSString stringWithFormat:@"%@%@", @"http://devjs.photobutler.com/", cNodeJSServerDirectory]
#define cSocketIOServer [NSString stringWithFormat:@"%@", @"https://dev-notification.photobutler.com/photo"]
#define cWebViewServer [NSString stringWithFormat:@"%@", @"http://dev-webview.photobutler.com/"]
#define isAdminVersion NO
#define cServerType @"Development"
// Router call
#define cRouterURL [NSString stringWithFormat:@"https://router-dev.photobutler.com/"]
#define cRouterBuildType @"dev"
*/

// Turns on or off test data / logins
// The NOs
#define isTestEnviron NO
#define isRemoteImagesOnly NO
#define isAlwaysShowPatchNotes NO
#define isAlwaysShowPermissions NO
#define isSimulator NO
#define isHeaderSnaps NO
#define isSkippingContacts NO
#define isUploadingRepeats NO
#define useAlwaysOnLocations NO
#define cAllDatesInGMT NO
#define useDBUserBackup NO
#define alwaysGetCoversFromRemote NO
#define GUARD_UI_THREAD NO

// The YESes
#define isLoadingOnlyOnSlowScrolling YES
#define cWaitForWifi YES
#define cDisplayWifiPopup YES
#define cUsingSockets YES
#define cAllowCustomCovers YES
#define useLocationServicesOnSilentPush YES
#define useBackgroundLocationsOnlyIfAlways YES
#define useExtendedBackground YES
#define useLocalImageCache YES
#define allowUploadInBackground YES
#define allowUploadInForeground YES
#define streamsWithoutCoversUseTopHighlight YES

// Tracking
#define onlyTrackingProductionFacebook NO
#define onlyTrackingProductionGoogle NO
#define onlyTrackingProductionMixpanel NO
#define trackingNanigan YES

// Settings
// Set to YES if you want images larger in image size than 4500 (on their largest side) to be skipped (postponed)
#define bIsPostponingUploadsOverSize YES
#define bIsPerformingSecondPass YES
#define cUploadImageSizeLimit 4500
#define cUploadImageResize 1700.0
#define cUploadImageQuality 0.9
// Set to YES if you want the upload processing to alternate on/off every 30 seconds.
#define bIsPausingUploads YES
#define bIsPausingFirstPass NO
#define cTimeSpentUploadingPassOne 120.0f
#define cTimeSpentUploadingPassTwo 30.0f
#define cTimeSpentPausing 30.0f
// Set to YES if you want the uploads to refresh the PHAsset array every X assets processed.
#define bIsRefreshingAssetArrayForUploads YES
#define cRefreshAssetArrayEvery 10
#define cLoginVersion 1

#define uploadsPerBatch 10
#define distanceFromTopShrinkHeader 300
#define sizeOfContentShrinkHeader 220.0
#define firstPhotosWithoutWifi 300
#define dragRefreshDistance -100.0f

#define backgroundOpacity 0.4

// Math
#define radians(degrees) (degrees * M_PI/180)
#define IS_IPHONE (!IS_IPAD)
#define IS_IPAD (UI_USER_INTERFACE_IDIOM() != UIUserInterfaceIdiomPhone)
#define IS_IPHONE_4S ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )480 ) < DBL_EPSILON )
#define IS_IPHONE_SE ([[UIScreen mainScreen] bounds].size.height == (double)568)
#define IS_IPHONE_6ARCH ([[UIScreen mainScreen] bounds].size.height == (double)667)
#define IS_IPHONE_6PARCH ([[UIScreen mainScreen] bounds].size.height == (double)736)
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

// Logging
//#define NSLog(__FORMAT__, ...) NSLog((@"%s [Line %d] " __FORMAT__), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

// ALog always displays output regardless of the DEBUG setting
#define ALog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

// For outputting huge strings to nslog... comment above redefinition of nslog and uncomment this for it to work.
//#define NSLog(FORMAT, ...) printf("%s\n", [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);


// Colors
#define pbColorBlueGreen [UIColor colorWithRed:0.0 green:184.0/255.0 blue:194.0/255.0 alpha:1.0]
#define pbColorGreen [UIColor colorWithRed:52.0/255.0 green:174.0/255.0 blue:76.0/255.0 alpha:1.0]
#define pbColorMain [UIColor colorWithRed:0.0 green:0.68 blue:0.94 alpha:1.0]
#define pbColorMainHeader [UIColor colorWithRed:0.0 green:188.0/255.0 blue:242.0/255.0 alpha:1.0]
#define pbColorMainButLighter [UIColor colorWithRed:161.6/255.0 green:227.0/255.0 blue:253.0/255.0 alpha:1.0]
#define pbColorLightGray [UIColor colorWithRed:0.8 green:0.8 blue:0.8 alpha:1.0]
#define pbColorTranslucentLightGray [UIColor colorWithRed:0.9 green:0.9 blue:0.9 alpha:0.6]
#define pbColorDarkGreen [UIColor colorWithRed:50.0/255.0 green:184.0/255.0 blue:47.0/255.0 alpha:1.0]
#define pbColorTranslucentBlack [UIColor colorWithRed:0.0 green:0.0 blue:0.0 alpha:0.7]
#define pbColorTranslucentGray [UIColor colorWithRed:0.0 green:0.0 blue:0.0 alpha:0.4]

// Keys
#define kPhotoUploadedDictionary @"uploaded_photos"
#define kPhotoSkippedDictionary @"skipped_photos"
#define kPhotoDeferredDictionary @"dolater_photos"
#define kCanAccessPhotos @"can_access_photos"
#define kHasStartedFirstUpload @"has_started_first_upload"
#define kHasDecidedNotifications @"has_decided_on_notifications"
#define kLocations @"locations"
#define kPeople @"people"
#define kPeopleHash @"people_hash"
#define kOccasions @"occasions"
#define kLogin @"login"
#define kTimestamp @"timestamp"
#define kSecurityHash @"security_hash"
#define kUserId @"user_id"
#define kPBID @"pbid"
#define kAuthToken @"auth_token"
#define kCurrentUploads @"current_uploads"
#define kCurrentTotalUploads @"current_total_uploads"
#define kCurrentTotalScreenshotsSkipped @"current_total_screenshotsskipped"
#define kTotalUploads @"total_uploads"
#define kPhotoPermission @"photo_permissions"
#define kDeviceToken @"device_token"
#define kNonDebugLog @"non_debug_log"
#define kUserEmail @"user_email"
#define kUserPhone @"user_phone"
#define kUserBirthday @"user_birthday"
#define kUserName @"user_name"
#define kUserFirstName @"user_firstname"
#define kUserLastName @"user_lastname"
#define kUserPersonId @"user_person_id"
#define kPhoneVerified @"user_phone_verified"
#define kRegistered @"user_is_registered"
#define kShouldGetImageListFromServer @"user_should_get_photos_from_server"
#define kMagicAlbums @"magic_album_array"
#define kSearchContact @"user_search_contact"
#define kIntroductionSeen @"introduction_seen"
#define kNameSelfSeen @"nameself_seen"
#define kSelfIDSeen @"selfid_seen"
#define kCanStartUploading @"can_start_uploading_has_updated_upload_list"
#define kAllowUploads @"uploads_allowed_switch"
#define kAllowDataOnly @"uploads_allowed_over_data"
#define kSignUpForSharedOnly @"signup_for_shared_only"
#define kHasSeenSharePopup @"has_seen_share_popup"
#define kAccountCreationTimestamp @"account_creation_timestamp"
#define kLastUploadTimestamp @"latest_upload_timestamp"
#define kLoudNotifications @"loud_silent_notes"
#define kPhotosSaved @"saved_photos_hash"
#define kUploadOldPhotos @"upload_old_photos_flag"
#define kHideOptInUploadAll @"kHideOptInUploadAll"
#define kOptInToUploadAllPhotos @"kOptInToUploadAllPhotos"
#define kFlashSetting @"kFlashSetting"
#define kDidSkipSelfie @"kDidSkipSelfie"
#define kHasFavorites @"kHasFavorites"
#define kLoginVersion @"kLoginVersion"

// New Uploading
#define cNodeUploadStart [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/start_upload"]
#define cNodeUploadComplete [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/upload_complete"]

// Get nearby events/streams
#define getStreamLocations [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/getStreamLocations"]

// Init call to get status of current build
#define cInit [NSString stringWithFormat:@"%@", cRouterURL]

// Set new device token for this user
#define cUpdateDeviceId [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/users/UpdateDeviceID/"]

// Get All locations with a thumbnail for each
#define cGetImagesByLocation [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/getimagesgroupbylocation/"]
// Get All assets for a location given location ID (in one big array)
#define cGetImagesByLocationID [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/getassetsbylocationid/"]
// Get All assets for a location given location ID (grouped by month)
#define cGetAssetsAtLocation [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/getassetsatlocation_v2/"]
// Get All assets for the user (grouped by month)
#define cGetUserImagesGroupByMonth [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/GetUserImagesGroupByMonth_v2/"]
// Get All friends with a thumbnail for each
#define cGetUsersFriendSummary [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoFaces/GetUsersFriendSummary"]
// Set a friend's name
#define cUpdateFriendName [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoFaces/UpdateFriendName/"]
// Get magic albums with a thumbnail for each
#define cGetMagicAlbums [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/album/getdynamicalbumsv1-2/"]
// Get magic album assets by album ID
#define cGetMagicAlbumImages [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/album/getdynamicalbumsassets/"]
// Create magic ablum using filters
#define cCreateMagicAlbum [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/album/createdynamicalbum/"]
// Remove Image from Magic Album
#define cRemoveAssetsFromMagicAlbum [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/RemoveAssetsFromMagicAlbum/"]
// Remove Image from Photo Stream
#define cRemoveAssetsFromPhotoStream [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/RemoveAssetsFromPhotoStream/"]
// Rename magic album
#define cRenameMagicAlbum [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/album/UpdateMagicAlbumName/"]
// Get a user's information
#define cGetUsers [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/getUsers"]

// Photo Streams
// Create Streaming Album (photo stream)
#define cCreatePhotoStream [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/CreatePhotoStream_v1_6/"]
// Share Streaming Album (photo stream)
#define cSharePhotoStream [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/SharePhotoStream_v1_5/"]
// Get a list of your photo streams
//#define cGetPhotoStreamSummary [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/album/GetAlbumsList-V1-4/"]
#define cGetPhotoStreamSummary [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/album/GetAlbumsList/"]
// Get summary of one photo stream
//#define cGetPhotoStream [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/GetPhotoStream-V1-4/"]
// Get people seen in a photo stream (as a person the album was shared with)
#define cGetPeopleSeenInPhotoStreamRecipient [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/GetPeopleSeenInPhotoStreamRecipient/"]
// Get people seen in a photo stream (as the creator)
#define cGetPeopleSeenInPhotoStream [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/GetPeopleSeenInPhotoStream/"]
// Get images for a photo stream (as host)
#define cGetPhotoStreamAssets [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/GetPhotoStreamAssets-v1-3/"]
// Get Stream Blackout Times
#define cGetPSBlockedHours [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/getStreamBlockedHours/"]
// Get images for a photo stream (as guest)
#define cGetPhotoStreamAssetsRecipients [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/GetPhotoStreamAssetsRecipients-v1-3/"]
// List of recipients on a photo stream
#define cGetSharedPhotoStreamRecipients [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/GetSharedPhotoStreamRecipients_v1_5/"]
// Update recipient status on a shared album
#define cUpdateContributorStatus [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/UpdateContributorStatus/"]
#define cApprovePhotoStreamInvitation [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/ApprovePhotoStreamInvitation/"]
// Remove someone from a stream altogether
#define cRemoveRecipientFromPhotoStream [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/RemoveRecipientFromPhotoStream/"]
// Update photo stream status (0 - inactive, 1 - active)
#define cUpdatePhotoStreamStatus [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/UpdatePhotoStreamStatus/"]
// Get person images from stream
#define cGetPhotoStreamAssetsByPersonId [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/GetPhotoStreamAssetsByPersonId/"]
// Delete Photo Stream
#define cDeletePhotoStream [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/DeletePhotoStream/"]
// Leave photo stream (delete for viewer)
#define cLeavePhotoStream [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/leaveStream"]
// Edit Photo Stream Name
#define cUpdatePhotoStreamName [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/UpdatePhotoStreamName/"]
// Extend Photo Stream
#define cExtendPhotoStreamTime [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/ExtendPhotoStreamTime/"]
// Change the Stream Active Time
#define cUpdatePhotoStreamTime [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/UpdatePhotoStreamTime/"]
// Get Photo Stream ID by mini token
#define cGetSharedAlbumIdFromMiniToken [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/Album/GetSharedAlbumIdFromMiniToken/"]
#define cGetAlbumIdFromMiniToken [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/Album/GetPSId/"]
// Get Streams call
#define cGetPhotostreams [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/GetPhotostreams_v2/"]
#define cGetPhotoStreamsNode [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/GetStreamsV3"]
// Get an image in photo stream
#define cGetPSPhotoThumb [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/GetPSPhotoThumb/"]
#define cGetPSPhoto [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/GetPSPhoto/"]
// Person's face from stream
#define cGetPSFaceThumb [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/GetPSFaceThumb/"]
#define cGetPSPersonProfileThumb [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/GetPSPersonProfileThumb/"]
// Get photos for stream
#define cGetPSPhotos [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/getPSPhotosV3/"]
#define cGetPSPhotosWithPersonID [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/getPSPhotosByPersonV3/"]
// Get people in photo stream
#define cGetPSFaces [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/GetPSFaces/"]
// Get the cropped hero image
#define cGetPSPhotoHero [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/GetPSPhotoHero/"]
// Active stream control
#define cLiveStreamsTimer [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/LiveStreamsTimer/"]
// Get stream details using an invite code
#define cGetPSBasicInfo [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/GetPSBasicInfo/"]
// set a vanity invite code
#define cUpdateStreamCode [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/updateStreamCode"]
// Sign up for a stream with an invite code
#define cRegisterPsUser [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/RegisterPsUser/"]
// Get photo stream comment counts
#define cStreamCommentCounts [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/listCounts"]
// Set custom cover
#define cSetCoverImage [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoFaces/SetCoverImage/"]

// Activity Feed
#define cGetActivityFeed [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/getActivityFeed"]

// Favorites
#define cSetPhotoStreamLike [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/Like/SetPhotoStreamLike/"]
#define cGetPhotoStreamLikes [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/Like/GetPhotoStreamLikes/"]
#define cSetPhotoLike [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/Like/SetPhotoLike/"]
#define cGetLikedPhotos [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/Like/GetLikedPhotos/"]

// Occasions

// Remove Image from Occasion
#define cRemoveAssetsFromOccasion [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/updateoccasions/"]
// Delete magic album
#define cRemoveMagicAlbum [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/album/DeleteMagicAlbum/"]
// People seen in a magic album
#define cGetPeopleSeenInMagicAlbum [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/GetPeopleSeenInMagicAlbum/"]
// Get parameters for magic album
#define cGetMagicAlbumParameters [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/album/GetMagicAlbumCriteria/"]
// Update magic album parameters
#define cUpdateMagicAlbumParameters [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/album/updatedynamicalbum/"]
// Occasion by years
#define cGetOccasionsAssetsByYear [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/AssetPriority/GetOcassionsAssetsByYear/"]
// Occasion by year (top)
#define cGetTopAssetsForOccasion [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/AssetPriority/GetTopAssetsForOccasion/"]
// Occasion by year (bottom)
#define cGetBottomAssetsForOccasion [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/AssetPriority/GetBottomAssetsForOccasion/"]

// Remove image from PhotoButler
#define cRemoveAssetsFromPhotoButler [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/DeleteAssets/"]
// Array of all images for a person by personID
#define cGetPersonPhotos [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoFaces/GetPersonPhotos/"]
// Get person's recent images (9 most recent) by person ID
#define cGetFriendsRecentImages [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/getfriendsrecentimages_v2/"]
// Get ALL person's images by month using person ID
#define cGetFriendsMonthlyImages [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/GetFriendsMonthlyImages_v2/"]
// Get person's locations that they show up in by person ID
#define cGetPersonPhotosWithLocation [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoFaces/GetPersonPhotosWithLocation/"]
// Get person's photos in location
#define cGetPersonPhotosInLocation [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoFaces/GetPersonPhotosInLocation/"]
#define cGetPersonAssetsAtLocation [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/getpersonassetsatlocation_v2/"]
// Search using filters
#define cSearchAssets [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/basicsearch_v2/"]
// Filter for search using same filters
#define cFilterSearchChoices [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/searchassets/"]
// Returns a PNG/JPG to be used as UIImage
#define cGetImageByAssetID [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/getassetsbyid/"]
#define cGetImageByPersonID [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoFaces/GetPersonFace/"]
#define cGetThumbnailByAssetID [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/GetThumbAssetsById/"]
#define cGetSharedAlbumHeroImage [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/GetSharedAlbumHeroImage/"]
// Gets tiles for header image in main view
#define cGetMagicTiles [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/GetMagicTiles/"]
// Timestamp call
#define cGetTimestamp [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/users/gettimestamp/"]
// First step of registration: sending deviceID, getting userID back
#define cAddUserUrl [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/users/adduser/"]
// Get login token for security things
#define cAuthToken [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/auth/token/"]
// Send phone number so OTP can be sent
#define cPhoneUrl [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/users/sendotp/"]
// Sending phone number and GETTING OTP CODE. Not sending OTP code, as the name would suggest.
#define cSendOTP [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/getOTP"]
// Sending OTP code.
#define cVerifyOTP [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/verifyOTP"]
// Update Login Version
#define cUpdateSecurityToken [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/updateSecurityToken"]
// Sending OTP verification code
#define cPhoneVerifyUrl [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/users/verifyotp/"]
// Send all registration info to finalize process
#define cRegisterUser [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/users/registeruser_v1_6/"]
// Send photo to crop/profile image service
#define cSetProfileImage [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoFaces/SetProfileImage/"]
// Register for push notifications with service
#define cRegisterForPushNotifications [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/Notification/SubscribePushNotifications/"]
// Silently get a PBTOKEN if the user doesn't have one
#define cSilentUpdateToken [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/users/SilentUpdateToken/"]
// NodeJS push notification subscribe
#define cSubscribePushNotifications [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/subscribePushNotifications"]

// Sharing
// Create a link for sharing images
#define cCreateSharedAlbum [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/album/CreateSharedAlbum/"]
// Create a link for sharing an album
#define cShareMagicAlbum [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/album/ShareMagicAlbum/"]
// Get albums shared with this user by others
#define cGetAlbumsListSharedByOthers [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/photostream/GetAlbumsListSharedByOthers-v-1-3/"]
//#define cGetAlbumsListSharedByOthers [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/photostream/GetAlbumsListSharedByOthers-V1-4/"]
// Get album assets shared with this user for one album
#define cGetAlbumSharedWithUser [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/album/GetAlbumSharedWithUser/"]
// Get list of albums shared by this user
#define cGetSharedAlbumList [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/photostream/GetSharedAlbumListv1-3/"]
//#define cGetSharedAlbumList [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/photostream/GetSharedAlbumList-V1-4/"]
// Get assets for an album that this user shared
#define cGetSharedAlbumByAlbumId [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/album/GetSharedAlbumByAlbumId/"]
// Get shared album recipients (for shared by you)
#define cGetSharedAlbumRecipients [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/album/GetSharedAlbumRecipients/"]
// Get someone else's image for shared albums
#define getVerifiedAssetForSharedAlbum [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/getVerifiedAssetForSharedAlbum/"]
// Get someone else's image for shared albums (thumbnail)
#define getVerifiedThumbnailForSharedAlbum [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/GetVerifiedThumbnailForSharedAlbum/"]
#define cGetVerifiedPersonFace [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoStream/GetVerifiedPersonFace/"]
// Get frequently shared names
#define cGetFrequentlyShared [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/album/GetSharedAlbumTopTenRecipients/"]

/*****************
 Duplicate Photos
 ****************/
// Split photos from cluster
#define cSplitPhotosFromCluster  [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/SplitPhotosFromCluster/"]
// Add photos to cluster
#define cAddPhotosToCluster [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/AddPhotosToCluster/"]
// Switch master asset Id
#define cSwitchMasterAssetId [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/SwitchMasterAssetId/"]
// Reset all photos in cluster
#define cResetAllPhotosInCluster [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/ResetAllPhotosInCluster/"]

// Occasions
//#define cCreateOccasionAlbum @"http://nerdromancer.com/services/createocc.php"
#define cCreateOccasionAlbum [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/CreateOccasionAlbum/"]
// Get all occasions
#define cGetOccasions [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/album/GetOccasionsAlbumList/"]
// Get assets for an occasion
#define cGetAssetsForOccasion [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/album/GetAssetsForOccasionGroupByMonth/"]
// Get occasions for a friend
#define cGetFriendOccasions [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/GetFriendOccasions/"]
// Get image assetids for an occasion associated with a friend
#define cGetPersonOccasion [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/GetPersonOccasion/"]
// Get people in an occasion
#define cGetFriendInOccasion [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/Friends/GetFriendInOccasion/"]

// People Clustering
// Get unnamed people affinity
#define cGetUnidentifiedPeople [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoFaces/GetUnidentifiedPeople/"]
// Get named people affinity
#define cGetIdentifiedPeople [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoFaces/GetIdentifiedPeople/"]
// GetCluster
#define cGetPersonsCluster [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoFaces/GetPersonsCluster/"]
// Add People
#define cAddPersonsToCluster [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoFaces/AddPersonsToCluster/"]
// Remove People
#define cSplitPersonsFromCluster [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/PhotoFaces/SplitPersonsFromCluster/"]
// Remove personID from app entirely
#define cRemovePersonIDFromEntireApp [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/Friends/RemovePerson/"]
// Switch master person ID for a cluster
#define cSwitchMasterPersonId [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/Friends/SwitchMasterPersonId/"]
// Nuke a person
#define cNukePersonId [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/Friends/ResetAllPersonsInCluster/"]

// Update user profile information
#define cUpdateUserProfileInfo [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/users/UpdateUserProfileInfo/"]

// People seen in Location
#define cPeopleSeenWithUser [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/assets/getpeopleseenwithuser/"]

// Logging
#define cLogError [NSString stringWithFormat:@"%@%@", [UserInfo getServerEndpoint], @"/service/logmessage/"]

#define cLogUrl @"http://nerdromancer.com/services/log.php"
#define cBoundaryString @"-------BOUNDARY-PB000000001------"
#define cMaxConcurrentUploadSizeInKB 1000000

#define cLogTimeForEachUpload NO // Turning this on (YES) will currently crash at runtime. Might want to fix that if you want to log this info, but we probably don't really care about this info anymore. It's the tracking for individual files' upload times.
#define IS_IOS11orHIGHER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 11.0)
