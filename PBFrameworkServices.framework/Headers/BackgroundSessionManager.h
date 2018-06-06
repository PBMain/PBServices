#import <AFNetworking/AFHTTPSessionManager.h>

@interface BackgroundSessionManager : AFHTTPSessionManager

+ (instancetype)sharedManager;

@property (nonatomic, copy) void (^savedCompletionHandler)(void);

@end
