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

//These properties are used on the Contribution Opt-In Screen. (PBPodUIStreamDetails)
- (UIColor*) optInButton_titleDefaultColor; //Default value: [UIColor blackColor]
- (UIColor*) optInButton_titleSelectedColor; //Default value: [UIColor whiteColor]

- (UIColor*) optInButton_subtitleDefaultColor; //Default value: [UIColor lightGrayColor]
- (UIColor*) optInButton_subtitleSelectedColor; //Default value: [UIColor whiteColor]

- (UIColor*) optInButton_mainIconDefaultColor; //Default value: [UserInfo getColorButtons]
- (UIColor*) optInButton_mainIconSelectedColor; //Default value: [UserInfo getColorButtonText]

@end


@interface PBAppColorsService : NSObject

+ (instancetype) createWithDataSource : (nullable id<PBAppColorsServiceDataSource>) dataSource;

@property (nonatomic, weak) id<PBAppColorsServiceDataSource> dataSource;


#pragma mark - PBPodUIStreamDetails
//These properties are used on the Contribution Opt-In Screen.
@property (nonatomic, strong) UIColor *optInButton_titleDefaultColor;
@property (nonatomic, strong) UIColor *optInButton_titleSelectedColor;

@property (nonatomic, strong) UIColor *optInButton_subtitleDefaultColor;
@property (nonatomic, strong) UIColor *optInButton_subtitleSelectedColor;

@property (nonatomic, strong) UIColor *optInButton_mainIconDefaultColor;
@property (nonatomic, strong) UIColor *optInButton_mainIconSelectedColor;


@end

NS_ASSUME_NONNULL_END
