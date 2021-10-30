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
#define cMixpanelTestMode NO
#define cNodeJSServerDirectory @"v2/s"
#define cServer [NSString stringWithFormat:@"%@%@", @"https://prjs.photobutler.com/", cNodeJSServerDirectory]
#define cNodeJSServer [NSString stringWithFormat:@"%@%@", @"https://prjs.photobutler.com/", cNodeJSServerDirectory]
#define cSocketIOServer [NSString stringWithFormat:@"%@", @"https://notification.photobutler.com/photo"]
#define cWebViewServer [NSString stringWithFormat:@"%@", @"https://m2.pb.life/"]
// #define isAdminVersion NO
// Router call
#define cRouterURL [NSString stringWithFormat:@"https://router.photobutler.com/"]
#define cRouterBuildType @"prod"

// ------  QA  / "Photo Butler QA" In iTunes Connect   ------
// App ID In Build Target: com.photobutler.PhotoButlerQA
// ICON AssetPack In Build Target: AppIconStaging
/*
#define cMixpanelToken @"771c9c7e26a613249d71e02700a0ee5e"
#define cFacebookAppId @"960223207430209"
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
#define onlyTrackingProductionMixpanel NO

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
#define kNasdaqToken @"nasdaq_token"
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
#define kUserAvatar @"user_avatar"
#define kUserPersonId @"user_person_id"
#define kPhoneVerified @"user_phone_verified"
#define kEmailVerified @"user_email_verified"
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
#define kAllowLeavePBPhotoStream @"allow_user_to_leave_pb_photostreams"
#define kPhotosSaved @"saved_photos_hash"
#define kUploadOldPhotos @"upload_old_photos_flag"
#define kHideOptInUploadAll @"kHideOptInUploadAll"
#define kOptInToUploadAllPhotos @"kOptInToUploadAllPhotos"
#define kFlashSetting @"kFlashSetting"
#define kDidSkipSelfie @"kDidSkipSelfie"
#define kHasFavorites @"kHasFavorites"
#define kLoginVersion @"kLoginVersion"
#define kDeviceTokenForPushNotifications @"kDeviceTokenForPushNotifications"
#define kHasSeenPushNotificationPopup @"kHasSeenPushNotificationPopup"
#define kShouldShowLocationPopup @"kShouldShowLocationPopup"
#define kHasAllowedLocation @"kHasAllowedLocation"
#define kHasActivity @"kHasActivity"
#define kAccountLastSeenDate @"kAccountLastSeenDate"
#define kReviewPopupLastSeenDate @"kReviewPopupLastSeenDate"
#define kInstallDate @"kInstallDate"
#define kOfflineBannerClosed @"kOfflineBannerClosed"
#define kDBVersion @"kDBVersion"
#define kLoggingLevel @"kLoggingLevel"
#define kNumberOfPhotosToShowBeforeHighlights @"kNumberOfPhotosToShowBeforeHighlights"
#define kHasSeenTutorial @"kHasSeenTutorial"
#define kMapTutorialPressed @"kMapTutorialPressed"
#define kOpenPersonWithEvent @"kOpenPersonWithEvent"
#define kAuthenticationHeader @"kAuthenticationHeader"
#define kOTPFromLink @"kOTPFromLink"
#define PhotoButlerErrorDomain @"PhotoButlerErrorDomain"

// Init call to get status of current buildalvars
#define cInit [NSString stringWithFormat:@"%@", [PBSettingsService service].appEndpointsSettingsService.routerServerEndpoint]

#define cBoundaryString @"-------BOUNDARY-PB000000001------"

#define cLogTimeForEachUpload NO // Turning this on (YES) will currently crash at runtime. Might want to fix that if you want to log this info, but we probably don't really care about this info anymore. It's the tracking for individual files' upload times.
#define IS_IOS11orHIGHER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 11.0)
