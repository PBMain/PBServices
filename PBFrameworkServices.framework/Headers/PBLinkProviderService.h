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

- (NSString*) privacyPolicyURLString; //Privacy policy URL String for an Application.

- (NSString*) termsAndConditionsURLString; //Terms and conditions URL String for an Application.

- (NSString*) appITunesLink; //Actual iTunes link for an Application.

- (NSString*) userFeedbackEmail; //Email address for user feedback.

@end

@interface PBLinkProviderService : NSObject

+ (instancetype) createWithDataSource : (nullable id<PBLinkProviderServiceDataSource>) dataSource;

@property (nonatomic, weak) id<PBLinkProviderServiceDataSource> dataSource;

@property (nonatomic, strong) NSString *privacyPolicyURLString;
@property (nonatomic, strong) NSString *termsAndConditionsURLString;
@property (nonatomic, strong) NSString *appITunesLink;
@property (nonatomic, strong) NSString *userFeedbackEmail;



@end

NS_ASSUME_NONNULL_END
