//
//  PBImagesService.h
//  PBPodServices
//
//  Created by Michael Liptuga on 1/21/19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@protocol PBImagesServiceDataSource <NSObject>

@optional

#pragma mark - PBPodUIStreamList
//Backgrounds
- (NSString*) bg_splashScreenImageName; //Image name that we use on the Splash screen

- (NSString*) bg_helloScreenImageName;  //Image name that we use on the Hello screen

- (NSString*) bg_registerScreenImageName; //Image name that we use on the Register screen

- (NSString*) bg_verifyPhoneScreenImageName; //Image name that we use on the Verify phone screen

//Placeholders
- (NSString*) upcomingStreamHostPlaceholderName;
- (NSString*) upcomingStreamSpectatorPlaceholderName;
- (NSString*) streamCoverPlaceholderName;

//AppLogo
- (NSString*) appLogoPhotoName;

//PhotoAlbumScrollIndicator
- (NSString*) photoAlbumScrollIndicatorName;

//Icons
- (NSString*) startStreamOptions_joinStreamIconName;
- (NSString*) startStreamOptions_createStreamIconName;
- (NSString*) settingsScreen_appLogoIconName; //Icon name that we use on the Settings screen, it is located on the right side of the screen.

//These images are used only for the "Parks and Resorts" application.
- (UIImageRenderingMode) appLogoRenderingMode; //This flag is used in OptInView. If we want to change the color of the appLogo to the same color as the buttons, set the value to UIImageRenderingModeAlwaysTemplate.

- (NSString*) bg_logoParkImageName : (NSString*) themeId;
- (NSString*) bg_emptyParkImageName : (NSString*) themeId;
- (NSString*) bg_coverParkImageName : (NSString*) themeId;

#pragma mark - PBPodUIStreamDetails
//These properties are used on the Contribution Opt-In Screen.

- (NSString*) optInButton_autoShareMainIconName; //Default value: @"streamdetails_icon_camera_sync_large"
- (NSString*) optInButton_autoShareDefaultIconName; //Default value: @"streamdetails_icon_check_circle_normal"
- (NSString*) optInButton_autoShareSelectedIconName; //Default value: @"streamdetails_icon_circle_check_filled"

- (NSString*) optInButton_manualShareMainIconName; //Default value: @"streamdetails_icon_photo_upload"
- (NSString*) optInButton_manualShareDefaultIconName; //Default value: @"streamdetails_icon_check_circle_normal"
- (NSString*) optInButton_manualShareSelectedIconName; //Default value: @"streamdetails_icon_circle_check_filled"

- (NSString*) optInButton_helpIconName; //Default value: nil

@end

@interface PBImagesService : NSObject

+ (instancetype) createWithDataSource : (nullable id<PBImagesServiceDataSource>) dataSource;

@property (nonatomic, weak) id<PBImagesServiceDataSource> dataSource;

#pragma mark - PBPodUIStreamList

//Backgrounds
@property (nonatomic, strong) NSString *bg_splashScreenImageName;
@property (nonatomic, strong) NSString *bg_helloScreenImageName;
@property (nonatomic, strong) NSString *bg_registerScreenImageName;
@property (nonatomic, strong) NSString *bg_verifyPhoneScreenImageName;

//Placeholders
@property (nonatomic, strong) NSString *upcomingStreamHostPlaceholderName;
@property (nonatomic, strong) NSString *upcomingStreamSpectatorPlaceholderName;
@property (nonatomic, strong) NSString *streamCoverPlaceholderName;

//AppLogo
@property (nonatomic, strong) NSString *appLogoPhotoName;

//PhotoAlbumScrollIndicator
@property (nonatomic, strong) NSString *photoAlbumScrollIndicatorName;

//Icons
@property (nonatomic, strong) NSString *startStreamOptions_joinStreamIconName;
@property (nonatomic, strong) NSString *startStreamOptions_createStreamIconName;
@property (nonatomic, strong) NSString *settingsScreen_appLogoIconName;

//These methods are used only for the "Parks and Resorts" application.
- (UIImageRenderingMode) appLogoRenderingMode;

- (NSString*) bg_logoParkImageName : (NSString*) themeId;
- (NSString*) bg_emptyParkImageName : (NSString*) themeId;
- (NSString*) bg_coverParkImageName : (NSString*) themeId;

#pragma mark - PBPodUIStreamDetails
//These properties are used on the Contribution Opt-In Screen.
@property (nonatomic, strong) NSString *optInButton_autoShareMainIconName;
@property (nonatomic, strong) NSString *optInButton_autoShareDefaultIconName;
@property (nonatomic, strong) NSString *optInButton_autoShareSelectedIconName;

@property (nonatomic, strong) NSString *optInButton_manualShareMainIconName;
@property (nonatomic, strong) NSString *optInButton_manualShareDefaultIconName;
@property (nonatomic, strong) NSString *optInButton_manualShareSelectedIconName;

@property (nonatomic, strong) NSString *optInButton_helpIconName;

@end

NS_ASSUME_NONNULL_END
