//
//  PBAppSettings.h
//  PBPodServices
//
//  Created by Michael Liptuga on 1/24/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@protocol PBAppSettingsDataSource <NSObject>

@required
//Application Client ID and Client Key
- (NSString*) clientId; //Default value: Empty string
- (NSString*) clientKey; //Default value: Empty string

//Application Name and Client Name
- (NSString*) fullAppName; //Default value: @"Photo Butler"
- (NSString*) clientName; //Default value: Empty string

- (NSString*) facebookId; //Default value: nil


@optional

- (BOOL) needToShowAllUserSettings; //Shows a full list of User settings (default is YES)

- (BOOL) registerScreen_isEmailRequired; //Checking the user's email on Register Screen. If user doesn't enter a valid email, the application doesn't allow the registration process to continue. If we want to ignore this field, please  return the value of this property - NO. (Value by default -  [UserInfo getAllowEmailRegistration]).

- (BOOL) registerScreen_isPhoneRequired; //Checking the user's phone number on Register Screen. If user doesn't enter a valid phone number, the application doesn't allow the registration process to continue. If we want to ignore this field, please return the value of this property - NO. (Value by default - [UserInfo getAllowPhoneRegistration]).

- (BOOL) registerScreen_isEmailAccepted; //Allow the user to sign up / login using email

- (BOOL) registerScreen_isPhoneAccepted; //Allow the user to sign up / login using phone number

- (BOOL) newPhotoStream_needToShowSignalIcon; //Default value: NO
- (BOOL) newPhotoStream_needToHideStreamDurationTextForLiveStream; //Default value: NO
- (BOOL) newPhotoStream_needToHideStreamDurationTextForScheduledStream; //Default value: NO

- (BOOL) needToApplyDarkThemeOnUserSettingsScreen; //Default value: NO

- (BOOL) isAdminVersion; //Default value: NO

- (BOOL) needToHideLeaveStreamButton; //Default value: NO

- (BOOL) isSocialSharingAllowed; //To allow social sharing in the application (Nasdaq behavior). Default: YES

- (BOOL) isLightStatusBar; //Changing the status bar style. Default value: NO (UIStatusBarStyleDefault)

- (BOOL) isAppUsedSpotlightSearch; //Default value: NO

- (BOOL) isAppUsedPhotoAnalysis; //Default value: NO

- (BOOL) isAppUsingVideoStories; // Default value: NO

- (BOOL) isAppShowingHighlights; // Default value: YES

- (BOOL) isAppUsingVideoStoriesCarouselBadges; // Default value: YES

- (BOOL) isAppUsingVideoStoriesComingSoonCarouselCard; // Default value: NO

- (BOOL) isAppUsingBIBSearchForAllPublicStreams; // Default value: NO

- (NSString*) videoStoryLocalVideoExampleFileName; // Default value: @""

- (NSString*) videoStoryDefaultZIPLocation; // Default value: @""

- (BOOL) showStreamInformationOnCoverInDetails; // Default value: NO

- (NSString*) clientCineURL; //Default value: nil

- (int) maxConcurrentUploads; //Default value: 10

@end

@interface PBAppSettings : NSObject

+ (instancetype) createWithDataSource : (nullable id<PBAppSettingsDataSource>) dataSource;

@property (nonatomic, weak) id<PBAppSettingsDataSource> dataSource;

@property (nonatomic, strong) NSString *clientId;
@property (nonatomic, strong) NSString *clientKey;

@property (nonatomic, strong) NSString *fullAppName;
@property (nonatomic, strong) NSString *clientName;

@property (nonatomic, strong) NSString *facebookId;

#pragma mark - PBPodUIStreamList
@property (nonatomic, assign) BOOL needToShowAllUserSettings; //This property is used on Settings Screen.

@property (nonatomic, assign) BOOL registerScreen_isEmailRequired; //This property is used on Register Screen.

@property (nonatomic, assign) BOOL registerScreen_isPhoneRequired; //This property is used on Register Screen.

@property (nonatomic, assign) BOOL registerScreen_isEmailAccepted; //This property is used on Register Screen.

@property (nonatomic, assign) BOOL registerScreen_isPhoneAccepted; //This property is used on Register Screen.

@property (nonatomic, assign) BOOL newPhotoStream_needToShowSignalIcon; //This property is used on NewPhotoStream Screen.
@property (nonatomic, assign) BOOL newPhotoStream_needToHideStreamDurationTextForLiveStream; //This property is used on NewPhotoStream Screen.
@property (nonatomic, assign) BOOL newPhotoStream_needToHideStreamDurationTextForScheduledStream; //This property is used on NewPhotoStream Screen.

@property (nonatomic, assign) BOOL needToApplyDarkThemeOnUserSettingsScreen;  //This property is used on ParksSelection Screen.

// General Info
@property (nonatomic, assign) BOOL isAdminVersion;

@property (nonatomic, assign) BOOL needToHideLeaveStreamButton;

@property (nonatomic, assign) BOOL isSocialSharingAllowed;

@property (nonatomic, assign) BOOL isLightStatusBar;

@property (nonatomic, assign) BOOL isLoudNotifications; //

@property (nonatomic, assign) BOOL isOfflineBannerClosed;

@property (nonatomic, assign) BOOL hasChosenDataOrWifi;

@property (nonatomic, assign) BOOL isCellularDataOnly;

@property (nonatomic, assign) BOOL isAppUsedSpotlightSearch;

@property (nonatomic, assign) BOOL isAppUsedPhotoAnalysis;

@property (nonatomic, assign) BOOL isAppUsingVideoStories;

@property (nonatomic, assign) BOOL isAppShowingHighlights;

@property (nonatomic, assign) BOOL isAppUsingVideoStoriesCarouselBadges;
@property (nonatomic, assign) BOOL isAppUsingVideoStoriesComingSoonCarouselCard;

@property (nonatomic, assign) BOOL isAppUsingBIBSearchForAllPublicStreams;

@property (nonatomic, assign) NSString *videoStoryLocalVideoExampleFileName;

@property (nonatomic, assign) NSString *videoStoryDefaultZIPLocation;

@property (nonatomic, assign) int loginVersion;

@property (nonatomic, assign) int dbVersion;

@property (nonatomic, assign) int loggingLevel; //Logging settings

@property (nonatomic, strong) NSString *log; // Non-Debugger Logging

@property (nonatomic) BOOL showStreamInformationOnCoverInDetails; // Defines whether to show ColVSectionStreamInfo information on the stream cover

@property (nonatomic, strong) NSString *clientCineURL;

@property (nonatomic, assign) int maxConcurrentUploads;

@end

NS_ASSUME_NONNULL_END
