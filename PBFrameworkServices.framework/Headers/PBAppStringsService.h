//
//  PBAppStringsService.h
//  PBPodServices
//
//  Created by Michael Liptuga on 2/8/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol PBAppStringsServiceDataSource <NSObject>

@optional

- (NSArray*) helloScreen_pagesList; //Must contain a list of dictionaries (example : @{@"title" : @"some title", @"subtitle" : @"some subtitle"})
- (NSArray*) tutorialScreen_pagesList; //Must contain a list of dictionaries (example : @{@"bgMainImageName" : @"background image name", @"waveImageName" : @"wave image name", @"iconImageName" : @"icon image name", @"pageDescription" : @"page description"})
- (NSArray*) onboardingTutorialScreen_pagesList; //Must contain a list of dictionaries (example : @{@"bgMainImageName" : @"background image name", @"waveImageName" : @"wave image name", @"iconImageName" : @"icon image name", @"pageDescription" : @"page description"})


- (NSString*) helloScreen_agreementString; //Default value: @"By using this app, you agree to our Terms of Use and Privacy Policy"
- (NSString*) settingsScreen_copyrightString; //Default value: nil

- (NSString*) startStreamOptions_joinStreamButtonTitle;
- (NSString*) startStreamOptions_createStreamButtonTitle;

//These properties are used on the NewPhotoStream Screen. (PBPodUIStreamList)
- (NSString*) newPhotoStream_mainTitle; //Default value: @"Create a Photo Stream"
- (NSString*) newPhotoStream_subtitle; //Default value: @"Set a duration, invite your friends and family and Photo Butler will share your photos instantly."

//These properties are used on the HostContributorOptInView Screen. (PBPodUIStreamList)
- (NSString*) hostContributorOptInView_mainTitle; //Default value: @"How would you like to add photos to your stream?"
- (NSString*) hostContributorOptInView_subtitle; //Default value: @"Choose how you would like to share photos to your stream when it is live."

//These properties are used on the Contribution Opt-In Screen. (PBPodUIStreamDetails)
- (NSString*) optInButton_autoShareTitle; //Default value: @"Auto-Share"
- (NSString*) optInButton_autoShareSubtitle; //Default value: @"Share photos as you take them."

- (NSString*) optInButton_manualShareTitle; //Default value: @"Select Photos"
- (NSString*) optInButton_manualShareSubtitle; //Default value: @"Choose which photos you want to share."

//Errors
- (NSString*) error_unnamedUserAction; //This error is returned, when Unnamed User tries to post a comment / to like Photostream / to create new Photostream / to create new Photostream from local. Default value: @"Must login before performing this action."

@end

@interface PBAppStringsService : NSObject

+ (instancetype) createWithDataSource : (nullable id<PBAppStringsServiceDataSource>) dataSource;

@property (nonatomic, weak) id<PBAppStringsServiceDataSource> dataSource;

#pragma mark - PBPodUIStreamList
@property (nonatomic, strong) NSArray *helloScreen_pagesList;
@property (nonatomic, strong) NSArray *tutorialScreen_pagesList;
@property (nonatomic, strong) NSArray *onboardingTutorialScreen_pagesList;

@property (nonatomic, strong) NSString *helloScreen_agreementString;
@property (nonatomic, strong) NSString *helloScreen_termsOfUseString;
@property (nonatomic, strong) NSString *helloScreen_privacyPolicyString;
@property (nonatomic, strong) NSString *settingsScreen_copyrightString;

@property (nonatomic, strong) NSString *startStreamOptions_joinStreamButtonTitle;
@property (nonatomic, strong) NSString *startStreamOptions_createStreamButtonTitle;

@property (nonatomic, strong) NSString *newPhotoStream_mainTitle;
@property (nonatomic, strong) NSString *newPhotoStream_subtitle;

@property (nonatomic, strong) NSString *hostContributorOptInView_mainTitle;
@property (nonatomic, strong) NSString *hostContributorOptInView_subtitle;

#pragma mark - PBPodUIStreamDetails
//These properties are used on the Contribution Opt-In Screen.
@property (nonatomic, strong) NSString *optInButton_autoShareTitle;
@property (nonatomic, strong) NSString *optInButton_autoShareSubtitle;

@property (nonatomic, strong) NSString *optInButton_manualShareTitle;
@property (nonatomic, strong) NSString *optInButton_manualShareSubtitle;

#pragma mark - Errors
@property (nonatomic, strong) NSString *error_unnamedUserAction;

@end

NS_ASSUME_NONNULL_END
