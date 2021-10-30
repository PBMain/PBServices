@import UIKit;

@interface PBPodServices : NSObject {}

// Initialize Services
/*!
    @method initServices
    @brief Initializes timers and listeners for Photo Butler Services Pod
    @code
 - (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    [PBPodServices initServices];
 }
    @endcode
 */
+(void) initServices;

// Allow caching of photos that don't appear in the device's photo roll
+(BOOL)getCachePhotosLocally;

/*!
 @method setCachePhotosLocally
 @brief Sets flag that determines whether images fetched remotely are then cached locally on the device. Defaults to true.
 @code
 [PBPodServices setCachePhotosLocally:YES];
 @endcode
 */
+(void)setCachePhotosLocally:(BOOL)cachePhotosLocally;

// Size in MB of the local photo cache
+(int)getPhotoCacheSize;

/*!
 @method setPhotoCacheSize
 @brief Sets size of the local photo cache, assuming setCachePhotosLocally has been set to true. Defaults to 75.
 @code
 [PBPodServices setPhotoCacheSize:75];
 @endcode
 */
+(void)setPhotoCacheSize:(int)cacheSize;

// Allow uploads. Turning this off will stop the checks for potential uploads.
+(BOOL)getAllowUploads;

/*!
 @method setAllowUploads
 @brief Sets flag that determines whether or not the user can upload assets. If set to false, the services will not attempt to find assets to upload. Defaults to true.
 @code
 [PBPodServices setAllowUploads:YES];
 @endcode
 */
+(void)setAllowUploads:(BOOL)allowUploads;

// SERVICES

/*!
 @method getSharedPhotoStreamRecipients
 @brief Gets all users that are spectating or participating in the stream
 @code
 [PBPodServices getSharedPhotoStreamRecipients:@"streamID" bypassCache:NO completion:^(id response) {
     NSLog(@"Array of spectators: %@", response);
 } error:^(id response) {
     NSLog(@"There was an error calling getSharedPhotoStreamRecipients: %@", response);
 }];
 @endcode
 */
+(void) getSharedPhotoStreamRecipients:(NSString*)streamID bypassCache:(BOOL)bypassCache completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

/*!
 @method setContributionToManual
 @brief Sets the current user's contribution to a stream to "Manual"
 @code
 [PBPodServices setContributionToManual:@"streamID" completion:^(id response) {
     // Logged in user is now contributing manually
 } error:^(id response, NSInteger responseStatusCode) {
     NSLog(@"There was an error calling setContributionToManual: %@", response);
     if responseStatusCode == 401 - the user has been removed from the stream by the host
 }];
 @endcode
 */
+(void) setContributionToManual:(NSString*)streamID completion:(void (^)(id response))completionBlock error:(void (^)(id response, NSInteger responseStatusCode))errorBlock;

/*!
 @method setContributionToAutomatic
 @brief Sets the current user's contribution to a stream to "Automatic"
 @code
 [PBPodServices setContributionToAutomatic:@"streamID" completion:^(id response) {
     // Logged in user is now contributing automatically
 } error:^(id response, NSInteger responseStatusCode) {
     NSLog(@"There was an error calling setContributionToAutomatic: %@", response);
     if responseStatusCode == 401 - the user has been removed from the stream by the host
 }];
 @endcode
 */
+(void) setContributionToAutomatic:(NSString*)streamID completion:(void (^)(id response))completionBlock error:(void (^)(id response, NSInteger responseStatusCode))errorBlock;

/*!
 @method setContributionToSpectator
 @brief Sets the current user's contribution to a stream to "Spectator"
 @code
 [PBPodServices setContributionToSpectator:@"streamID" completion:^(id response) {
     // Logged in user is now spectating (not contributing)
 } error:^(id response, NSInteger responseStatusCode) {
     NSLog(@"There was an error calling setContributionToSpectator: %@", response);
     if responseStatusCode == 401 - the user has been removed from the stream by the host
 }];
 @endcode
 */
+(void) setContributionToSpectator:(NSString*)streamID completion:(void (^)(id response))completionBlock error:(void (^)(id response, NSInteger responseStatusCode))errorBlock;

/*!
 @method setStreamCover
 @brief Sets the stream's cover image to the passed UIImage, if the user has permission to do so
 @code
 [PBPodServices setStreamCover:[UIImage imageNamed:@"SomeImage"] streamID:@"streamID" completion:^(id success) {
     // Image is now the cover
 }];
 @endcode
 */
+(void) setStreamCover:(UIImage*)image streamID:(NSString*)streamID completion:(void (^)(id success))completionBlock;

// Likes / Liking / Favorites
/*!
 @method setPhotoLike
 @brief Sets the asset identified by the passed assetID as a favorite of the current user
 @code
 [PBPodServices setPhotoLike:@"assetID" streamID:@"streamID" isFavorite:YES completion:^(id response) {
     // Is favorited
 } error:^(id response) {
     NSLog(@"There was an error calling setPhotoLike: %@", response);
 }];
 @endcode
 */
+(void) setPhotoLike:(NSString*)assetID streamID:(NSString*)streamID isFavorite:(BOOL)isFavorite completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;
/*!
 @method setPhotoStreamLike
 @brief Sets the stream identified by the passed streamID as a favorite of the current user
 @code
 [PBPodServices setPhotoStreamLike:@"streamID" isFavorite:YES completion:^(id response) {
     // Is now favorited
 } error:^(id response) {
     NSLog(@"There was an error calling setPhotoStreamLike: %@", response);
 }];
 @endcode
 */
+(void) setPhotoStreamLike:(NSString*)streamID isFavorite:(BOOL)isFavorite completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

// Operations on Assets
/*!
 @method removeAssetsFromPhotoStream
 @brief Removes the asset identified by the passed assetID from the stream, if the user has permission to do so (user is the host of the stream, or the owner of the asset)
 @code
 [PBPodServices removeAssetsFromPhotoStream:@"streamID" assetsToRemove:@[@{@"fileName":@"IMG_0001.JPG", @"creationDate":@"0000-00-00 00:00:00", @"assetID":@"12345"}] completion:^(id response) {
     // Asset has been removed
 } error:^(id response) {
     // Error
 }];
 @endcode
 */
+(void) removeAssetsFromPhotoStream:(NSString*)streamID assetsToRemove:(NSArray*)assetsToRemove completion:(void (^)(id response))completionBlock error:(void (^)(id response))errorBlock;

/*
 @method isAppExtension
 @brief Retertuns true whether is launched fro App Extension
 */

+ (BOOL) isAppExtension;
+ (UIApplication *) sharedUIApplication;

// ASSETS


+(void) setClientID:(NSString*)clientID andClientKey:(NSString*)clientKey error:(void (^)(NSString* error))errorBlock;

+(void) loginAnonymous:(void (^)(id response))successBlock error:(void (^)(NSString* error))errorBlock;

+(void) loginWithUserName:(NSString*)username success:(void (^)(id response))successBlock error:(void (^)(NSString* error))errorBlock;

+(void) loginWithUserName:(NSString*)username andPassword:(NSString*)password success:(void (^)(id response))successBlock error:(void (^)(NSString* error))errorBlock;

@end

