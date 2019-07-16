#import <Foundation/Foundation.h>

@interface BlackoutChecker : NSObject

+(instancetype) sharedDelegateForStreamID:(NSString*)streamID;

@property (nonatomic) NSString* streamID;
@property (nonatomic) NSArray* blackoutTimes;
@property (nonatomic) NSString* dateFormat;
@property (nonatomic) BOOL hasLoaded;
@property (nonatomic) BOOL isLoading;

-(void) updateBlackoutTimesWithStreamID:(NSString*)streamId completion:(void (^)(void))completionBlock error:(void (^)(void))errorBlock;
-(void) updateBlackoutTimesIfNeededWithStreamID:(NSString*)streamId completion:(void (^)(void))completionBlock error:(void (^)(void))errorBlock;
-(BOOL) isDateInBlackout: (NSDate*) date;
-(NSDate*) blackoutExpirationTime: (NSDate*) date;
-(NSMutableArray*) getValidContributionRanges;
-(void)loadInformation;

@end
