//
//  PBLinkProviderService.h
//  PBPodServices
//
//  Created by Michael Liptuga on 1/23/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@protocol PBLinkProviderServiceDataSource <NSObject>

@optional

- (NSString*) privacyPolicyURLString; //Privacy policy URL String for an Application. Default value: @"http://legal.photobutler.com/privacy/"

- (NSString*) termsAndConditionsURLString; //Terms and conditions URL String for an Application. Default value: @"http://legal.photobutler.com/terms/"

- (NSString*) appITunesLink; //Actual iTunes link for an Application. Default value:  @"https://itunes.apple.com/us/app/photo-butler-app/id1209878239?ls=1&mt=8"

- (NSString*) userFeedbackEmail; //Email address for user feedback. Default value: @"feedback@photobutler.com"

- (NSString*) userSupportEmail; //Email address for user support, such as reporting objectionable content. Default value: @"support@photobutler.com"

@end

@interface PBLinkProviderService : NSObject

+ (instancetype) createWithDataSource : (nullable id<PBLinkProviderServiceDataSource>) dataSource;

@property (nonatomic, weak) id<PBLinkProviderServiceDataSource> dataSource;

@property (nonatomic, strong) NSString *privacyPolicyURLString;
@property (nonatomic, strong) NSString *termsAndConditionsURLString;
@property (nonatomic, strong) NSString *appITunesLink;
@property (nonatomic, strong) NSString *userFeedbackEmail;
@property (nonatomic, strong) NSString *userSupportEmail;


@end

NS_ASSUME_NONNULL_END
