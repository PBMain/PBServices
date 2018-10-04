//
//  CommentThread.h
//  AFNetworking
//
//  Created by Michael Liptuga on 10.09.2018.
//

#import <Foundation/Foundation.h>

@interface CommentThread : NSObject

@property (nonatomic, strong) NSString *streamId;
@property (nonatomic, strong) NSArray *comments;

+(instancetype) create : (NSDictionary*) dictionary;

@end
