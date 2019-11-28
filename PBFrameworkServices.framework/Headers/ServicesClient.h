@interface ServicesClient : NSObject
{
    
}

// Client Services

// Initialize
+(void) initWithServer:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Login new user
+(void) createNewPBUserSession:(NSString*)firstName lastName:(NSString*)lastName cellPhoneNumber:(NSString*)cellPhoneNumber emailId:(NSString*)emailId completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Login existing user
+(void) restoreExistingUserSession:(NSString*)pbId completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Join Stream
+(void) joinStream:(NSString*)streamGUID completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Get stream information / precache
+(void) cacheStream:(NSString*)streamGUID completion:(void (^)(BOOL success))completionBlock error:(void (^)(id response))errorBlock;

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

@end
