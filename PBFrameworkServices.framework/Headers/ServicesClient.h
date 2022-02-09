@interface ServicesClient : NSObject
{
    
}

// Client Services

// Initialize
+(void) initWithServer:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Join Stream
+(void) joinStream:(NSString*)streamGUID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;


// Bib search
+(void) getBibFile:(NSString*)location completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) getImagesForBibID:(NSString*)bibID bibPath:(NSString*)bibPath completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
// Team search
+(void) getImagesForTeamID:(NSString*)teamID bibPath:(NSString*)bibPath completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// BBYO
// Get account balance
+(void) getUserAccountBalance:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
+(void) withdrawFunds:(int)amount completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Spartan BIB
+(void) getBibMetaFile: (NSString *)location completion: (void (^)(id response))completionBlock error: (void (^)(id response))errorBlock;

+(void) getAssets: (NSString *)bib
         location: (NSString *) location
       completion: (void (^)(id response))completionBlock
            error: (void (^)(id response))errorBlock;

// Random Event Photos (Nasdaq)
+(void) getRandomEventPhotos:(NSString*)systemID sessionID:(NSString*)sessionID imageCount:(int)imageCount completion:(void (^)(NSArray *photos))completionBlock;
+(void) getEventInfo:(NSString*)systemID completion:(void (^)(NSDictionary *photos))completionBlock;

@end
