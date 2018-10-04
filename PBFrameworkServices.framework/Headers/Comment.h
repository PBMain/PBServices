//
//  Comment.h
//  AFNetworking
//
//  Created by Michael Liptuga on 10.09.2018.
//

#import <Foundation/Foundation.h>

@interface Comment : NSObject

@property (nonatomic, strong) NSString *commentId;
@property (nonatomic, strong) NSNumber *timestamp;
@property (nonatomic, strong) NSString *userId;
@property (nonatomic, strong) NSString *assetId;
@property (nonatomic, strong) NSString *comment;
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *cellPhone;
@property (nonatomic, strong) NSString *masterPersonId;

@property (nonatomic, assign) NSTimeInterval timeInterval;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSString *fullMessage;

+(instancetype) create : (NSDictionary*) dictionary;



@end
