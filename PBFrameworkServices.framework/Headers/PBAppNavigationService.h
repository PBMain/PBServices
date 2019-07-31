//
//  PBAppNavigationService.h
//  PBPodServices
//
//  Created by Michael Liptuga on 1/22/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@protocol PBAppNavigationServiceDataSource <NSObject>

@optional
- (BOOL) needToShowOnboardingTutorial; //Shows the PhotoButler tutorial screen (default is NO)
- (BOOL) needToShowSingleMainViewController; //Shows a list of photo streams (default is NO)
- (BOOL) needToShowMainViewController; //Shows a list of photo streams with a bottom tab bar (default is YES)
- (BOOL) needToShowPhotoAlbumWithActivityFeed; //Should use Activity Feed stream details instead of single stream details view. Shows PhotoAlbumViewController with Activity Feed (like in Bizzabo app) (default is NO)
- (BOOL) needToShowParksAndResortsViewController; //Shows a list of Parks and Resorts (default is NO)
- (BOOL) needToShowPhotosTab; //Shows the photos tab on the main view (shown with needToShowMainViewController) (default is YES)
- (BOOL) needToShowPOIOptions; //Shows the POI options in a menu, along with profile edit options, when tapping profile pic in stream list views (default is NO)
- (BOOL) needToShowQRCodes; //Shows the QR code reader and display

- (BOOL) singleMainViewHasBackButton; //You can manage left button on the navigation bar on the "SingleMain" View. Default value is NO (Displayed as a user photo. Transition to the "Settings" screen). if you set the value of YES to this property, the left button will look like a "back" button and dismiss "SingleMain" View.

- (BOOL) shouldHideMenuInStreamDetailsForPastStreams;

@end

@interface PBAppNavigationService : NSObject

+ (instancetype) createWithDataSource : (nullable id<PBAppNavigationServiceDataSource>) dataSource;

@property (nonatomic, weak) id<PBAppNavigationServiceDataSource> dataSource;

@property (nonatomic, assign) BOOL needToShowOnboardingTutorial;
@property (nonatomic, assign) BOOL needToShowSingleMainViewController;
@property (nonatomic, assign) BOOL needToShowMainViewController;
@property (nonatomic, assign) BOOL needToShowPhotosTab;
@property (nonatomic, assign) BOOL needToShowPhotoAlbumWithActivityFeed;
@property (nonatomic, assign) BOOL needToShowParksAndResortsViewController;
@property (nonatomic, assign) BOOL needToShowPOIOptions;
@property (nonatomic, assign) BOOL needToShowQRCodes;

@property (nonatomic, assign) BOOL singleMainViewHasBackButton;

@property (nonatomic, assign) BOOL shouldHideMenuInStreamDetailsForPastStreams;

@property (nonatomic, assign) BOOL needToUpdateScreens;
@property (nonatomic, assign) BOOL isUploadListRefreshed;
@property (nonatomic, assign) BOOL isTutorialShown;
@property (nonatomic, assign) BOOL isIntroductionScreenShown;
@property (nonatomic, assign) BOOL isSelfieSkipped;
@property (nonatomic, assign) BOOL isMapTutorialPressed;
@property (nonatomic, assign) BOOL isPersonOpenWithEvent; // Open people with event rather than internally (for clients that want to handle people themselves). Default value: NO


@end

NS_ASSUME_NONNULL_END
