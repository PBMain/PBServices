//
//  PBAppEndpointsSettingsService.h
//  PBPodServices
//
//  Created by Michael Liptuga on 3/12/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol PBAppEndpointsSettingsServiceDataSource <NSObject>

@optional

- (NSString*) serverType; //Available values: @"dev", @"qa", @"prod"

- (NSString*) serverEndpoint;
- (NSString*) socketIOServerEndpoint;
- (NSString*) webViewServerEndpoint;

- (NSString*) routerServerEndpoint;
- (NSString*) partnerServerEndpoint;
- (NSString*) partnerServerFolder;

//Facebook Application ID
- (NSString*) facebookAppId;

//Mixpanel
- (NSString*) mixpanelToken;
- (BOOL) isMixpanelInTestMode;

@end

@interface PBAppEndpointsSettingsService : NSObject

+ (instancetype) createWithDataSource : (nullable id<PBAppEndpointsSettingsServiceDataSource>) dataSource;

@property (nonatomic, weak) id<PBAppEndpointsSettingsServiceDataSource> dataSource;

@property (nonatomic, strong) NSString* serverType;

@property (nonatomic, strong) NSString* serverEndpoint;
@property (nonatomic, strong) NSString* socketIOServerEndpoint;
@property (nonatomic, strong) NSString* webViewServerEndpoint;

@property (nonatomic, strong) NSString* routerServerEndpoint;
@property (nonatomic, strong) NSString* partnerServerEndpoint;
@property (nonatomic, strong) NSString* partnerServerFolder;

@property (nonatomic, strong) NSString* facebookAppId;

@property (nonatomic, strong) NSString* mixpanelToken;
@property (nonatomic, assign) BOOL isMixpanelInTestMode;

@end


NS_ASSUME_NONNULL_END
