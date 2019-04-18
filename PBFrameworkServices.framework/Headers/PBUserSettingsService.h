//
//  PBUserSettingsService.h
//  PBPodServices
//
//  Created by Michael Liptuga on 3/28/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PBUserSettingsService : NSObject

+ (instancetype) create;

@property (nonatomic, strong) NSString* authToken; //User auth token. Default value: @"".
@property (nonatomic, strong) NSString* deviceToken; //User device token. Default value: @"".
@property (nonatomic, strong) NSString* deviceTokenForPushNotifications; //User device token for registering push notifications. Default value: @"".

@property (nonatomic, strong, readonly) NSString* personId; //If the user is already logged in, this property returns user person ID. If not: @"".
@property (nonatomic, strong) NSString* userId; //User ID. Default value: @"".
@property (nonatomic, strong) NSString* pbId; //PhotoButler user ID. Default value: @"".

@property (nonatomic, strong) NSArray* personIds; //

@property (nonatomic, strong, readonly) NSString* userName; //User full name. Default value: @"".
@property (nonatomic, strong) NSString* firstName; //User first name. Default value: @"".
@property (nonatomic, strong) NSString* lastName; //User last name. Default value: @"".
@property (nonatomic, strong) NSString* email; //User email. Default value: @"".
@property (nonatomic, strong) NSString* phone; //User phone. Default value: @"".
@property (nonatomic, strong) NSString* birthdayString; //User birthday. Default value: @"".

@property (nonatomic, strong) NSString *hasOptedInToUploadAllPhotos; //If value is Empty or nil - Photo Butler stops sorting photos and identifying faces from new photos taken outside of streams.
@property (nonatomic, strong) NSString *authenticationHeader; //"Authentication" header
@property (nonatomic, strong) NSString *OTPFromLink; //Onboarding OTP from a link
@property (nonatomic, strong, readonly) NSString *deviceUUID; //Device UUID.

@property (nonatomic, assign) BOOL isPhoneVerified; //User phone is verified. Default value: NO.
@property (nonatomic, assign) BOOL isRegistered; //User is registered. Default value: NO.
@property (nonatomic, assign) BOOL hasSeenSharePopup; //User has already seen SharePopup. Default value: NO.
@property (nonatomic, assign) BOOL hasSeenPushNotificationPopup; //User has already seen PushNotificationPopup. Default value: NO.
@property (nonatomic, assign) BOOL shouldHideOptInPopup; //Hide OptInPopup. Default value: NO.
@property (nonatomic, assign) BOOL shouldShowLocationPopup; //Show LocationPopup. Default value: NO.
@property (nonatomic, assign) BOOL hasAllowedLocation; //User has already allowed to access his phone's location. Default value: NO.
@property (nonatomic, assign) BOOL hasActivity; //This flag checks whether the user has a new activity since the date of the last activity or not. Default value: NO.
@property (nonatomic, assign, readonly) BOOL isNotificationServiceEnabled; //Registered for notifications
@property (nonatomic, assign, readonly) BOOL arePhotoPermissionsEnabled; //Photo permissions
@property (nonatomic, assign) BOOL hasFavorites; //Does the user has favorite photos or not? Default value: NO
@property (nonatomic, assign, readonly) BOOL isAuthenticationHeaderEmpty; 

@property (nonatomic, strong) NSDate* accountCreationDate; //Contains the date the account was created. Default value: nil.
@property (nonatomic, strong) NSDate* accountLastSeenDate; //Contains the date, when the user last opened the application. Default value: [NSDate date].
@property (nonatomic, strong) NSDate* lastUploadDate; //Contains last upload date. Default value: accountCreationDate.
@property (nonatomic, strong) NSDate* reviewPopupLastSeenDate; //Contains the date of the last seen Application Review Popup. Default value: [NSDate dateWithTimeIntervalSince1970:0]
@property (nonatomic, strong) NSDate* installDate; //Contains the application installation date. Default value:

//People
@property (nonatomic, assign, readonly) int personPhotoCount; //Returns the current number of user photos. Default value: 0.
@property (nonatomic, strong) NSMutableDictionary *peopleHash; //
@property (nonatomic, strong) NSMutableArray *people; //
@property (nonatomic, strong) NSDictionary *selectedContact; //

- (void) logout;

- (void) updatePersonName : (NSString*) name
                 personId : (NSString*) personId; //Updates username by person ID.

- (NSMutableDictionary*) personById : (NSString*) personId; //Returns a person by ID.

- (void) clearPeopleArray; //Clear "peopleHash" and "people".



@end

NS_ASSUME_NONNULL_END
