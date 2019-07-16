#import "DBManager.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface DBStreamCategories : DBManager

// Insert
+(void) insertStreamCategories:(NSArray*)categories streamID:(NSString*)streamID isLocation:(BOOL)isLocation completion:(void (^)(void))completionBlock;
+(void) insertStreamCategoryAssets:(NSArray*)assets streamID:(NSString*)streamID categoryID:(NSString*)categoryID completion:(void (^)(void))completionBlock;

// Select
+(NSArray*) getLocationCategoriesForStream:(NSString*)streamID completion:(void (^)(NSArray *categories))completionBlock;
+(NSArray*) getCategoriesForStreamID:(NSString*)streamID completion:(void (^)(NSArray *categories))completionBlock;
+(NSDictionary*) getCategoryForStreamID:(NSString*)streamID categoryID:(NSString*)categoryID completion:(void (^)(NSDictionary *category))completionBlock;
+(NSArray*) getAssetsForStreamID:(NSString*)streamID categoryID:(NSString*)categoryID completion:(void (^)(NSArray *categories))completionBlock;
+(int) getAssetCountForStreamID:(NSString*)streamID categoryID:(NSString*)categoryID completion:(void (^)(int count))completionBlock;

// Delete
+(void) deleteStreamCategory:(NSString*)streamID categoryID:(NSString*)categoryID;
+(void) deleteCategoriesFromStream:(NSString*)streamID;

@end
