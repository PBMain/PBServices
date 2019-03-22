//
//  PBAppFontsService.h
//  PBPodServices
//
//  Created by Michael Liptuga on 3/1/19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol PBAppFontsServiceDataSource <NSObject>

@optional

#pragma mark - Application fonts

- (UIFont*) customFont : (UIFontWeight) fontWeight fontSize : (float) fontSize;

@end


@interface PBAppFontsService : NSObject

+ (instancetype) createWithDataSource : (nullable id<PBAppFontsServiceDataSource>) dataSource;

@property (nonatomic, weak) id<PBAppFontsServiceDataSource> dataSource;

- (UIFont*) customFont : (UIFontWeight) fontWeight fontSize : (float) fontSize;

- (UIFont*) defaultAppFont : (UIFontWeight) fontWeight fontSize : (float) fontSize;

- (UIFont*) helveticaNeue : (UIFontWeight) fontWeight fontSize : (float) fontSize;


@end

NS_ASSUME_NONNULL_END
