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

@end

@interface PBAppNavigationService : NSObject

+ (instancetype) createWithDataSource : (nullable id<PBAppNavigationServiceDataSource>) dataSource;

@property (nonatomic, weak) id<PBAppNavigationServiceDataSource> dataSource;

@property (nonatomic, assign) BOOL needToShowOnboardingTutorial;
@property (nonatomic, assign) BOOL needToShowSingleMainViewController;
@property (nonatomic, assign) BOOL needToShowMainViewController;
@property (nonatomic, assign) BOOL needToShowPhotoAlbumWithActivityFeed;
@property (nonatomic, assign) BOOL needToShowParksAndResortsViewController;

@end

NS_ASSUME_NONNULL_END
