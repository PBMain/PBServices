#import <UIKit/UIKit.h>

@interface UserInfo : NSObject
{
    NSArray *uploadedPhotos;
}

+(void)saveArbitraryData:(NSString*)theKey theData:(id)theData;
+(id)loadArbitraryData:(NSString*)theKey;

+(BOOL)getCanAccessPhotos;
+(void)setCanAccessPhotos:(BOOL)canAccess;
+(BOOL)getHasStartedUploading;
+(void)setHasStartedUploading:(BOOL)hasStarted;
+(BOOL)getAllowedUploading;
+(void)setAllowedUploading:(BOOL)isAllowed;
+(BOOL)getSignedUpForSharing;
+(void)setSignedUpForSharing:(BOOL)isSharingOnly;
+(BOOL)getHasDecidedNotifications;
+(void)setHasDecidedNotifications:(BOOL)hasDecidedNotifications;
+(BOOL)getIsLoudNotifications;
+(void)setIsLoudNotifications:(BOOL)isLoudNotifications;
+(BOOL)getUploadOldPhotos;
+(void)setUploadOldPhotos:(BOOL)shouldUploadOldPhotos;
+(int)getLoginVersion;
+(void)setLoginVersion:(int)loginVersion;
+(int)getDBVersion;
+(void)setDBVersion:(int)dbVersion;

+(void)clearPhotosUploaded;
+(void)clearPhotosSkipped;
+(void)clearPhotosPostponed;
+(void)clearCachedSettings;
+(NSMutableDictionary*)getUploadedPhotos;
+(BOOL)isPhotoUploaded:(NSString*)filename creationDate:(NSString*)creationDate;
+(void)setPhotoNeverTryAgain:(NSString*)filename creationDate:(NSString*)creationDate;
+(NSDate*)isPhotoNeverTryAgain:(NSString*)filename creationDate:(NSString*)creationDate;
+(void)setPhotoNeverTryAgainDatesForInstantRetry;
+(NSMutableDictionary*)getSkippedPhotos;
+(void)setPhotoSkipped:(NSString*)filename creationDate:(NSString*)creationDate;
+(BOOL)isPhotoSkipped:(NSString*)filename creationDate:(NSString*)creationDate;
+(NSMutableDictionary*)getScreenshotPhotos;
+(void)setPhotoScreenshot:(NSString*)filename creationDate:(NSString*)creationDate;
+(BOOL)isPhotoScreenshot:(NSString*)filename creationDate:(NSString*)creationDate;
+(NSMutableDictionary*)getPostponedPhotos;
+(void)setPhotoPostponed:(NSString*)filename creationDate:(NSString*)creationDate;
+(BOOL)isPhotoPostponed:(NSString*)filename creationDate:(NSString*)creationDate;
+(void)setPhotoSaved:(NSString*)filename creationDate:(NSString*)creationDate;
+(BOOL)isPhotoSaved:(NSString*)filename creationDate:(NSString*)creationDate;

+(void)setOfflineBannerClosed:(BOOL)bannerClosed;
+(BOOL)getOfflineBannerClosed;

// Locations

// People
+(void)clearPeopleArray;
+(NSMutableDictionary*)getPeopleHash;
+(void)setPeopleHash:(NSMutableDictionary*)hashDictionary;
+(NSMutableArray*)getPeople;
+(void)setPeople:(NSMutableArray*)thePeople;
+(void)setPersonName:(NSString*)name personId:(NSString*)personId;
+(NSMutableDictionary*)getPerson:(NSString*)personId;

// Occasions
+(NSMutableArray*)getOccasions;
+(void) clearOccasionsArray;

// Magic Albums
+(void)clearMagicAlbums;
+(NSMutableArray*)getMagicAlbums;
+(NSMutableDictionary*)getMagicAlbumByID:(NSString*)albumId;
+(NSMutableArray*)getMagicAlbumAllImagesByID:(NSString*)albumId;
+(void)setMagicAlbums:(NSMutableArray*)magicAlbumArray;
+(void)addMagicAlbum:(NSString*)albumName albumID:(NSString*)albumID images:(NSMutableArray*)images thumbnail:(NSMutableDictionary*)thumbnail totalAssets:(NSString*)totalAssets;

// General Info
+(NSString*)getLogin;
+(void)setLogin:(NSString*)login;
+(NSString*)getTimestamp;
+(void)setTimestamp:(NSString*)timestamp;
+(NSString*)getSecurityHash;
+(void)setSecurityHash:(NSString*)hash;
+(NSString*)getDeviceToken;
+(void)setDeviceToken:(NSString*)deviceToken;
+(NSString*)getDeviceTokenForPushNotifications;
+(void)setDeviceTokenForPushNotifications:(NSString*)deviceToken;
+(NSString*)getUserId;
+(void)setUserId:(NSString*)userId;
+(NSString*)getPBID;
+(void)setPBID:(NSString*)PBID;
+(NSString*)getUserEmail;
+(void)setUserEmail:(NSString*)userEmail;
+(NSString*)getUserPhone;
+(void)setUserBirthday:(NSString*)userBirthday;
+(NSString*)getUserBirthday;
+(void)setUserPhone:(NSString*)userPhone;
+(BOOL)getPhoneVerified;
+(void)setPhoneVerified:(BOOL)isVerified;
+(BOOL)getRegistered;
+(void)setRegistered:(BOOL)isRegistered;
+(BOOL)hasChosenDataOrWifi;
+(BOOL)getDataOnly;
+(void)setDataOnly:(BOOL)isAllowedDataOnly;
+(BOOL)getHasSeenSharePopup;
+(void)setHasSeenSharePopup:(BOOL)hasSeenSharePopup;
+(BOOL)getHasSeenPushNotificationPopup;
+(void)setHasSeenPushNotificationPopup:(BOOL)hasSeenPushNotificationPopup;
+(BOOL)shouldHideOptInPopup;
+(void)setShouldHideOptInPopup:(BOOL)shouldHideOptInPopup;
+(NSString*)hasOptedInToUploadAllPhotos;
+(void)setHasOptedInToUploadAllPhotos:(NSString*)optIn;
+(BOOL)shouldShowLocationPopup;
+(void)setHasShowedLocationPopup;
+(BOOL)hasAllowedLocation;
+(void)setHasAllowedLocation:(BOOL)allowed;
+(BOOL)hasLiveStreams;
+(void)setHasLiveStreams:(BOOL)liveStreams;
+(BOOL)hasActivity;
+(void)setHasActivity:(BOOL)activity;

+(int)flashSetting;
+(void)setFlashSetting:(int)flashSetting;

+(NSDictionary*)getSelectedContact;
+(void)setSelectedContact:(NSDictionary*)dict;

// Profile
+(NSString*)getUserName;
+(NSString*)getUserFirstName;
+(NSString*)getUserLastName;
+(void)setUserFirstName:(NSString*)userFirstName;
+(void)setUserLastName:(NSString*)userLastName;
+(NSString*)getUserPersonId;
+(NSArray*)getUserPersonIds;
+(void)addUserPersonId:(NSString*)userPersonId;
+(void)setUserPersonIds:(NSArray*)userPersonIds;
+(int)getUserPersonPhotoCount;
+(void)setLastUploadDate:(NSString*)timestamp;
+(NSDate*)getLastUploadDate;
+(void)setAccountCreationDate:(NSString*)timestamp;
+(NSDate*)getAccountCreationDate;
+(void)setAccountLastSeenDate;
+(NSDate*)getAccountLastSeenDate;
+(void)setReviewPopupLastSeenDate;
+(NSDate*)getReviewPopupLastSeenDate;
+(void)setInstallDate;
+(NSDate*)getInstallDate;

// Totals
+(NSInteger)getTotalUploads;
+(void)setTotalUploads:(NSInteger)totalUploads;
+(NSInteger)getTotalUploadsThisBatch;
+(void)setTotalUploadsThisBatch:(NSInteger)totalUploadsThisBatch;
+(void)setTotalScreenshotsSkipped:(NSInteger)totalScreenshots;
+(NSInteger)getTotalUploadsDone;
+(NSInteger)getTotalUploadsSkipped;

// Permissions
+(BOOL)getPhotoPermission;

// Device UUID
+ (NSString *)deviceUUID;

// Auth Token
+(NSString*)getAuthToken;
+(void)setAuthToken:(NSString*)authToken;

// New Build Update Screen
+(BOOL)getUpdateScreenSeen;
+(void)setUpdateScreenSeen:(BOOL)seen;
+(BOOL)getHasRefreshedUploadList;
+(void)setHasRefreshedUploadList:(BOOL)canUpload;
+(BOOL)getHasSeenTutorial;
+(void)setHasSeenTutorial:(BOOL)seen;

// Introduction Screen
+(BOOL)getIntroductionScreenSeen;
+(void)setIntroductionScreenSeen:(BOOL)seen;

// Name Yourself  Screen
+(BOOL)getNameYourselfScreenSeen;
+(void)setNameYourselfScreenSeen:(BOOL)seen;

// Self Identify Flow
+(BOOL)getSelfIDScreenSeen;
+(void)setSelfIDScreenSeen:(BOOL)seen;

// Skipped Selfie Taking
+(BOOL)didSkipSelfie;
+(void)setDidSkipSelfie:(BOOL)skipped;

// Has favorites
+(BOOL)hasFavorites;
+(void)setHasFavorites:(BOOL)hasFavorites;

// Non-Debugger Logging
+(void)setLog:(NSString*)log;
+(NSString*)getLog;

// Holiday Image Sets
+(void)setImageSet:(NSDictionary*)imageSet;

// Registered for notifications
+(BOOL)notificationServicesEnabled;

// Registered MixPanel
+(BOOL) hasIdentifiedMixPanel;
+(void) setHasIdentifiedMixPanel;

// Nanigan Tracking
+(BOOL) hasNaniganInstalled;
+(void) setHasNaniganInstalled:(BOOL)hasNI;

// Changing Services Endpoint
+(NSString*) getServerEndpoint;
+(void) setServerEndpoint:(NSString*)endpoint;
+(NSString*) getFacebookAppId;
+(void) setFacebookAppId:(NSString*)appId;
+(NSString*) getIntercomAPIKey;
+(void) setIntercomAPIKey:(NSString*)apiKey;
+(NSString*) getIntercomAppId;
+(void) setIntercomAppId:(NSString*)appId;
+(NSString*) getMixpanelToken;
+(void) setMixpanelToken:(NSString*)mixpanelToken;
+(NSString*) getNanigansId;
+(void) setNanigansId:(NSString*)nanigansId;
+(BOOL) getMixpanelTestMode;
+(void) setMixpanelTestMode:(BOOL)testMode;
+(BOOL) getNaniganInTestMode;
+(void) setNaniganInTestMode:(BOOL)testMode;
+(NSString*) getSocketIOServer;
+(void) setSocketIOServer:(NSString*)socketIOServer;
+(NSString*) getWebViewServer;
+(void) setWebViewServer:(NSString*)webViewServer;

// SDK Settings
+(BOOL)showNSLogs;
+(void)setShowNSLogs:(BOOL)showThem;

+(NSString*)getClientName;
+(void)setClientName:(NSString*)clientName;

+(NSString*)getClientKey;
+(void)setClientKey:(NSString*)clientKey;

+(NSString*)getClientID;
+(void)setClientID:(NSString*)clientID;

+(UIFont*)getFontNameRegular:(float)fontSize;
+(void)setFontNameRegular:(NSString*)fontNameRegular;

+(UIFont*)getFontNameMedium:(float)fontSize;
+(void)setFontNameMedium:(NSString*)fontNameMedium;

+(UIFont*)getFontNameSemiBold:(float)fontSize;
+(void)setFontNameSemiBold:(NSString*)fontNameSemiBold;

+(UIFont*)getFontNameBold:(float)fontSize;
+(void)setFontNameBold:(NSString*)fontNameBold;

+(BOOL)getShouldUsePBPermissionsScreens;
+(void)setShouldUsePBPermissionsScreens:(BOOL)shouldUsePBScreens;

+(void)setIsLightStatusBar: (BOOL) isLight;
+(BOOL)getIsLightStatusBar;

+(UIColor*)getColorNavigationBar;
+(void)setColorNavigationBar:(UIColor*)color;

+(UIColor*)getColorNavigationText;
+(void)setColorNavigationText:(UIColor*)color;

+(UIColor*)getColorNavigationSubBar;
+(void)setColorNavigationSubBar:(UIColor*)color;

+(UIColor*)getColorNavigationSubText;
+(void)setColorNavigationSubText:(UIColor*)color;

+(void) clearColors;

@end
