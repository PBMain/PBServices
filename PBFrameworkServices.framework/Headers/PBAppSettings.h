//
//  PBAppSettings.h
//  PBPodServices
//
//  Created by Michael Liptuga on 1/24/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@protocol PBAppSettingsDataSource <NSObject>

@optional

- (BOOL) needToShowAllUserSettings; //Shows a full list of User settings (default is YES)

- (BOOL) registerScreen_isEmailRequired; //Checking the user's email on Register Screen. If user doesn't enter a valid email, the application doesn't allow the registration process to continue. If we want to ignore this field, please  return the value of this property - NO. (Value by default -  [UserInfo getAllowEmailRegistration]).

- (BOOL) registerScreen_isPhoneRequired; //Checking the user's phone number on Register Screen. If user doesn't enter a valid phone number, the application doesn't allow the registration process to continue. If we want to ignore this field, please return the value of this property - NO. (Value by default - [UserInfo getAllowPhoneRegistration]).

@end

@interface PBAppSettings : NSObject

+ (instancetype) createWithDataSource : (nullable id<PBAppSettingsDataSource>) dataSource;

@property (nonatomic, weak) id<PBAppSettingsDataSource> dataSource;

#pragma mark - PBPodUIStreamList
@property (nonatomic, assign) BOOL needToShowAllUserSettings; //This property is used on Settings Screen.

@property (nonatomic, assign) BOOL registerScreen_isEmailRequired; //This property is used on Register Screen.

@property (nonatomic, assign) BOOL registerScreen_isPhoneRequired; //This property is used on Register Screen.

@end

NS_ASSUME_NONNULL_END
