@class CameraControllerViewController;
@class ContactPeopleIdentifyViewController;
@class ContactViewController;
@class EditCurrentUserProfileViewController;
@class EditUserProfileDataViewController;
@class MainViewController;
@class MoreStreamsViewController;
@class SettingViewController;
@class PhotoAlbumViewController;
@class PhotoStreamRecipients;
@class PrivateCollectionViewController;
@class PublicCollectionViewController;
@class ShareViewController;
@class ImageDetailViewController;
@class ImageDuplicateViewController;
@class InviteCodeViewController;
@class RSVPViewController;
@class NewInviteUpcomingStream;
@class UploadProgressViewController;
@class SearchViewController;
@class TimelineDetailViewController;
@class ViewController_SearchFilterResult;
@class MagicAlbumViewController;
@class NewMagicAlbumViewController;
@class NewPhotoStream;
@class NewPhotoStreamLive;
@class EditPhotoStreamViewController;
@class CommentWebViewController;
@class NewInviteStreamSchedule;
@class CommentWebView;
@class ImageDetailView;
@class ImageDuplicateView;
@class ActiveStreamCountdownView;
@class LocationAlbumView;
@class UIView_NewLocationAlbumView;
@class OccasionsContainerView;
@class OccasionDetails;
@class UIView_NewPeopleAlbumView;
@class NewPersonClusterView;
@class PeopleClusterView;
@class PeopleContainerView;
@class PeopleIdentifyView;
@class PeopleMoreView;
@class PeopleRecentTimelineView;
@class PeoplePlaceAsTimelineView;
@class PlacesContainerView;
@class SharedAlbumTimelineView;
@class TimeoutPopupView;
@class ScrollTimeView;
@class TimelinesContainerView;
@class FavoritesContainerView;
@class ExistingMagicAlbumsGrid;
@class MagicAlbumEditView;
@class PeopleOccasionsView;
@class MainTabBarController;
@class PhotosTabBarController;

@interface ViewCollector : NSObject
{
    
}

// UIViewControllers
@property (nonatomic) CameraControllerViewController *vcCameraController;
@property (nonatomic) ContactPeopleIdentifyViewController *vcContactPeopleIdentify;
@property (nonatomic) ContactViewController *vcContact;
@property (nonatomic) EditCurrentUserProfileViewController *vcEditCurrentUserProfile;
@property (nonatomic) EditUserProfileDataViewController *vcEditUserProfileData;
@property (nonatomic) MainViewController *vcMain;
@property (nonatomic) MoreStreamsViewController *vcMoreStreams;
@property (nonatomic) SettingViewController *settingViewMain;
@property (nonatomic) PhotoAlbumViewController *vcPhotoAlbum;
@property (nonatomic) PhotoStreamRecipients *vcPhotoStreamRecipients;
@property (nonatomic) PrivateCollectionViewController *vcPrivateCollection;
@property (nonatomic) PublicCollectionViewController *vcPublicCollection;
@property (nonatomic) ShareViewController *vcShare;
@property (nonatomic) ImageDetailViewController *vcDetails;
@property (nonatomic) ImageDuplicateViewController *vcDuplicates;
@property (nonatomic) InviteCodeViewController *vcInviteCode;
@property (nonatomic) RSVPViewController *vcRsvp;
@property (nonatomic) NewInviteUpcomingStream *vcNewInviteUpcomingStream;
@property (nonatomic) UploadProgressViewController *vcUploadProgress;
@property (nonatomic) SearchViewController *vcSearch;
@property (nonatomic) TimelineDetailViewController *vcTimelineDetail;
@property (nonatomic) ViewController_SearchFilterResult *vcSearchFilterResult;
@property (nonatomic) MagicAlbumViewController *vcMagicAlbum;
@property (nonatomic) NewMagicAlbumViewController *vcNewMagicAlbum;
@property (nonatomic) NewPhotoStream *vcNewPhotoStream;
@property (nonatomic) NewPhotoStreamLive *vcNewPhotoStreamLive;
@property (nonatomic) EditPhotoStreamViewController *vcEditPhotoStreamViewController;
@property (nonatomic) CommentWebViewController * vcCommentWeb;
@property (nonatomic) NewInviteStreamSchedule * vcNewInviteStreamSchedule;
// UIViews
@property (nonatomic) CommentWebView *vCommentWeb;
@property (nonatomic) ImageDetailView *vImageDetail;
@property (nonatomic) ImageDuplicateView *vImageDuplicate;
@property (nonatomic) ActiveStreamCountdownView *vActiveStreamCountdown;
@property (nonatomic) LocationAlbumView *vLocationAlbum;
@property (nonatomic) UIView_NewLocationAlbumView *vNewLocationAlbum;
@property (nonatomic) OccasionsContainerView *vOccasionsContainer;
@property (nonatomic) OccasionDetails *vOccasionsDetails;
@property (nonatomic) UIView_NewPeopleAlbumView *vNewPeopleAlbum;
@property (nonatomic) NewPersonClusterView *vNewPersonCluster;
@property (nonatomic) PeopleClusterView *vPeopleCluster;
@property (nonatomic) PeopleContainerView *vPeopleContainer;
@property (nonatomic) PeopleIdentifyView *vPeopleIdentify;
@property (nonatomic) PeopleMoreView *vPeopleMore;
@property (nonatomic) PeopleRecentTimelineView *vPeopleRecentTimeline;
@property (nonatomic) PeoplePlaceAsTimelineView *vPeoplePlacesAsTimeline;
@property (nonatomic) PlacesContainerView *vPlacesContainer;
@property (nonatomic) SharedAlbumTimelineView *vShareAlbumTimeline;
@property (nonatomic) TimeoutPopupView *vTimeoutPopup;
@property (nonatomic) ScrollTimeView *vScrollTime;
@property (nonatomic) TimelinesContainerView *vTimelinesContainer;
@property (nonatomic) FavoritesContainerView *vFavoritesContainer;
@property (nonatomic) ExistingMagicAlbumsGrid *vMagicAlbumsContainer;
@property (nonatomic) MagicAlbumEditView *vMagicAlbumEdit;
@property (nonatomic) PeopleOccasionsView *vPeopleOccasions;

// TabBarControllers
@property (nonatomic) MainTabBarController *tbcMain;
@property (nonatomic) PhotosTabBarController *tbcPhotos;

+(instancetype)sharedDelegate;
+(void)wipeOldData;
+(NSString*)getNextView:(NSString*)currentView;
+(NSString*)getMainStoryboardName;

@end
