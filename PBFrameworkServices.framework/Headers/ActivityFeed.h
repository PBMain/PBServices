//
//  ActivityFeed.h
//  AFNetworking
//
//  Created by Michael Liptuga on 10.09.2018.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, ActivityFeedType) {
    addComment,
    streamFavorited,
    photoFavorited,
    newPhotoAdded,
    unknown
};


@interface ActivityFeed : NSObject

@property (nonatomic, strong) NSString *idStr;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *timestamp;
@property (nonatomic, strong) NSString *userId;
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *masterPersonId;
@property (nonatomic, strong) NSString *comment;
@property (nonatomic, assign) BOOL isNew;
@property (nonatomic, strong) NSString *assetId;
@property (nonatomic, strong) NSString *streamId;
@property (nonatomic, strong) NSString *streamName;
@property (nonatomic, strong) NSNumber *numcount;

@property (nonatomic, assign) NSTimeInterval timeInterval;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSString *fullMessage;
@property (nonatomic, assign) ActivityFeedType activityType;

+(instancetype) create : (NSDictionary*) dictionary;

@end
