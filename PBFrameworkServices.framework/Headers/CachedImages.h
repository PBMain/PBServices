#import <UIKit/UIKit.h>

@interface CachedImages : NSObject
{
    
}

+(void) saveImage:(UIImage*)image withIdentifier:(NSString*)filename;
+(BOOL) loadImageWithIdentifier:(NSString*)filename completionBlock:(void (^)(id image))completionBlock;
+(void) removeFromCacheWithIdentifier:(NSString*)filename;
+(BOOL) clearCache;
+(void) monitorCacheSize;

@property (nonatomic) NSTimer *cacheSaveTimer;
@property (nonatomic) NSMutableDictionary *cacheSaveDict;
@property (nonatomic) NSLock *cacheSaveLock;
@property (nonatomic) NSString *cacheFolderLocal;

+(void) listFilesInCache;

@end
