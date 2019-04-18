//
//  PBPhotosService.h
//  PBPodServices
//
//  Created by Michael Liptuga on 4/4/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PBPhotosService : NSObject

+ (instancetype) create;

@property (nonatomic, assign) BOOL allowedUploading; //
@property (nonatomic, assign) BOOL signedUpForSharing; //

// Limits on contribution types
@property (nonatomic, assign) BOOL manualContributionOnly; //
@property (nonatomic, assign) BOOL manualContributionOnlyPublic;//

@property (nonatomic, assign) BOOL shouldSetManualContributionForAllStreams; //
@property (nonatomic, assign) BOOL shouldSetManualContributionForPublicStreams; //

//Screenshot
@property (nonatomic, strong, readonly) NSMutableDictionary *screenshotPhotos; //
// Magic Albums
@property (nonatomic, strong) NSMutableArray *magicAlbums; //

//Screenshot
- (void)setPhotoScreenshot:(NSString*)filename creationDate:(NSString*)creationDate; //
- (BOOL)isPhotoScreenshot:(NSString*)filename creationDate:(NSString*)creationDate; //

- (void)setPhotoSaved:(NSString*)filename creationDate:(NSString*)creationDate; //
- (BOOL)isPhotoSaved:(NSString*)filename creationDate:(NSString*)creationDate; //

// Magic Albums
- (void) clearMagicAlbums; //
- (NSMutableDictionary*) magicAlbumByID: (NSString*) albumId; //
- (NSMutableArray*) magicAlbumAllImagesByID: (NSString*) albumId; //
- (void) addMagicAlbum: (NSString*) albumName albumID: (NSString*) albumID images: (NSMutableArray*) images thumbnail: (NSMutableDictionary*) thumbnail totalAssets: (NSString*) totalAssets; //

@property (nonatomic, assign) int numberOfPhotosToShowBeforeHighlights; // Added for custom BBYO behavior

// Totals
//@property (nonatomic, assign) NSInteger totalUploads;
//@property (nonatomic, assign, readonly) NSInteger totalUploadsDone;
//@property (nonatomic, assign, readonly) NSInteger totalUploadsSkipped;

@end

NS_ASSUME_NONNULL_END
