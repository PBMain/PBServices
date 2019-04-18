//
//  PBSettingsService.h
//  PBPodServices
//
//  Created by Michael Liptuga on 1/21/19.
//

#import <Foundation/Foundation.h>

#import "PBImagesService.h"
#import "PBAppNavigationService.h"
#import "PBLinkProviderService.h"
#import "PBAppSettings.h"
#import "PBAppStringsService.h"
#import "PBAppColorsService.h"
#import "PBAppFontsService.h"
#import "PBAppEndpointsSettingsService.h"
#import "PBUserSettingsService.h"
#import "PBPhotosService.h"

@class TrackingImports;

NS_ASSUME_NONNULL_BEGIN

@interface PBSettingsService : NSObject

+ (instancetype) service;
- (void)setDataSource:(id)dataSource;

+ (instancetype) alloc __attribute__((unavailable("alloc not available, call service instead")));
- (instancetype) init __attribute__((unavailable("init not available, call service instead")));
+ (instancetype) new __attribute__((unavailable("new not available, call service instead")));

@property (nonatomic, weak) id<PBImagesServiceDataSource> imagesServiceDataSource;
@property (nonatomic, weak) id<PBAppNavigationServiceDataSource> appNavigationServiceDataSource;
@property (nonatomic, weak) id<PBLinkProviderServiceDataSource> linkProviderServiceDataSource;
@property (nonatomic, weak) id<PBAppSettingsDataSource> appSettingsDataSource;
@property (nonatomic, weak) id<PBAppStringsServiceDataSource> appStringsServiceDataSource;
@property (nonatomic, weak) id<PBAppColorsServiceDataSource> appColorsServiceDataSource;
@property (nonatomic, weak) id<PBAppFontsServiceDataSource> appFontsServiceDataSource;
@property (nonatomic, weak) id<PBAppEndpointsSettingsServiceDataSource> appEndpointsSettingsServiceDataSource;


@property (nonatomic, strong) PBImagesService *imagesService; // This service is responsible for setting up images in the application. (It is responsible for the background images on the screen (icons, etc.) that you customized from the project.)

@property (nonatomic, strong) PBAppNavigationService *appNavigationService; // This service is responsible for setting up navigation in the application. (example: if we won't to show the  OnboardingTutorial Screen, set the needToShowOnboardingTutorial flag to NO)

@property (nonatomic, strong) PBLinkProviderService *linkProviderService; // This service is responsible for the URL links that we use in the application. This is needed to configure links for different applications. (example : privacyPolicy, termsAndConditions and etc.)

@property (nonatomic, strong) PBAppSettings *appSettings; // This service is responsible for setting up the application. (example: If you have two or more options for displaying one screen, we can add a new flag here and handle it on the screen. This allows you to manage pod files from a project.)

@property (nonatomic, strong) PBAppStringsService *appStringsService;

@property (nonatomic, strong) PBAppColorsService *appColorsService; // This service is responsible for setting up colors in the application.

@property (nonatomic, strong) PBAppFontsService *appFontsService; // This service is responsible for setting up fonts in the application.

@property (nonatomic, strong) PBAppEndpointsSettingsService *appEndpointsSettingsService; // This service is responsible for setting endpoints in the application.

@property (nonatomic, strong) PBUserSettingsService *userSettingsService; // This service is responsible for setting user in the application.

@property (nonatomic, strong) PBPhotosService *photosService; // This service is responsible for photos in the application.

#pragma mark - TrackingImports Initializing
// Initialization of application analytics
- (TrackingImports*) setAnalytics: (nullable NSString*) mixpanelToken
                    facebookAppId: (nullable NSString*)facebookAppId
                    intercomAppId: (nullable NSString*)intercomAppId
                   intercomAPIKey: (nullable NSString*)intercomAPIKey
                       nanigansId: (nullable NSString*)nanigansId;


@end

NS_ASSUME_NONNULL_END
