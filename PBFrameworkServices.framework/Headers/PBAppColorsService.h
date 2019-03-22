//
//  PBAppColorsService.h
//  PBPodServices
//
//  Created by Michael Liptuga on 2/11/19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol PBAppColorsServiceDataSource <NSObject>

@optional

#pragma mark - Application colors
//App navigation colors
- (UIColor*) navigationBarColor; //Default value: pbColorMain
- (UIColor*) navigationTextColor; //Default value: [UIColor whiteColor]
- (UIColor*) navigationSubBarColor; //Default value: pbColorMain
- (UIColor*) navigationSubTextColor; //Default value: [UIColor whiteColor]

- (CAGradientLayer*) gradientCTAColor; //Default value: nil
- (CAGradientLayer*) gradientLogoColor; //Default value: nil

- (UIColor*) buttonTextColor; //Default value: [UIColor whiteColor]

- (UIColor*) buttonsColor; //Default value: pbColorMain
- (UIColor*) buttonsAgainstLightBGColor; //Default value: buttonsColor

//These properties are used on the NewPhotoStream Screen. (PBPodUIStreamList)
- (UIColor*) newPhotoStream_mainTitleColor; //Default value: [UIColor blackColor]
- (UIColor*) newPhotoStream_subtitleColor; //Default value: [UIColor colorWithWhite: 120.0 / 255.0 alpha: 1.0]

//These properties are used on the Contribution Opt-In Screen. (PBPodUIStreamDetails)
- (UIColor*) optInButton_titleDefaultColor; //Default value: [UIColor blackColor]
- (UIColor*) optInButton_titleSelectedColor; //Default value: [UIColor whiteColor]

- (UIColor*) optInButton_subtitleDefaultColor; //Default value: [UIColor lightGrayColor]
- (UIColor*) optInButton_subtitleSelectedColor; //Default value: [UIColor whiteColor]

- (UIColor*) optInButton_mainIconDefaultColor; //Default value: [self buttonsColor]
- (UIColor*) optInButton_mainIconSelectedColor; //Default value: [self buttonTextColor]

@end


@interface PBAppColorsService : NSObject

+ (instancetype) createWithDataSource : (nullable id<PBAppColorsServiceDataSource>) dataSource;

@property (nonatomic, weak) id<PBAppColorsServiceDataSource> dataSource;

#pragma mark - Application colors
//App navigation colors
@property (nonatomic, strong, nullable) UIColor *navigationBarColor;
@property (nonatomic, strong, nullable) UIColor *navigationTextColor;
@property (nonatomic, strong, nullable) UIColor *navigationSubBarColor;
@property (nonatomic, strong, nullable) UIColor *navigationSubTextColor;

@property (nonatomic, strong, nullable) CAGradientLayer *gradientCTAColor;
@property (nonatomic, strong, nullable) CAGradientLayer *gradientLogoColor;

@property (nonatomic, strong, nullable) UIColor *buttonTextColor;

@property (nonatomic, strong, nullable) UIColor *buttonsColor;
@property (nonatomic, strong, nullable) UIColor *buttonsAgainstLightBGColor;

//These properties are used on the NewPhotoStream Screen. (PBPodUIStreamList)
@property (nonatomic, strong) UIColor *newPhotoStream_mainTitleColor;
@property (nonatomic, strong) UIColor *newPhotoStream_subtitleColor;

#pragma mark - PBPodUIStreamDetails
//These properties are used on the Contribution Opt-In Screen.
@property (nonatomic, strong) UIColor *optInButton_titleDefaultColor;
@property (nonatomic, strong) UIColor *optInButton_titleSelectedColor;

@property (nonatomic, strong) UIColor *optInButton_subtitleDefaultColor;
@property (nonatomic, strong) UIColor *optInButton_subtitleSelectedColor;

@property (nonatomic, strong) UIColor *optInButton_mainIconDefaultColor;
@property (nonatomic, strong) UIColor *optInButton_mainIconSelectedColor;

#pragma mark - Сolor themes

- (void) applyDarkTheme;
- (void) clearApplicationColors;

@end

NS_ASSUME_NONNULL_END
