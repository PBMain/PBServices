//
//  PBSpotlightService.h
//  PBPodServices
//
//  Created by Michael Liptuga on 6/21/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PBSpotlightService : NSObject

+ (instancetype) service;

+ (instancetype) alloc __attribute__((unavailable("alloc not available, call service instead")));
- (instancetype) init __attribute__((unavailable("init not available, call service instead")));
+ (instancetype) new __attribute__((unavailable("new not available, call service instead")));


@property (nonatomic, strong) NSString *uniqueIdentifier;
@property (nonatomic, strong) NSDictionary *userInfo;


- (void) addPhotostream : (NSDictionary*) photostream
             coverImage : (nullable UIImage*) coverImage
  placeholderCoverImage : (nullable UIImage*) placeholderCoverImage;

- (void) updatePhotostreamName : (nullable NSString*) newPhotostreamName
                    coverImage : (nullable UIImage*) coverImage
         placeholderCoverImage : (nullable UIImage*) placeholderCoverImage
                   photostream : (NSDictionary*) photostream;

- (void) deletePhotostream : (NSDictionary*) photostream;

@end

NS_ASSUME_NONNULL_END
