#import <UIKit/UIKit.h>

@interface PBDSP : NSObject

@property (nonatomic) NSMutableDictionary *requests;

+(instancetype) instance;
+(void) getAllFacesInImage:(UIImage*)image completion:(void (^)(NSMutableArray *data))completionBlock;

- (void) getAllTextInImage: (UIImage*) image
                completion: (void (^)(NSMutableArray *data))completionBlock API_AVAILABLE(ios(11.0));

-(void) detectDominantObjectInImage : (UIImage*) image
                         completion : (void (^)(NSArray *detectedObjects)) completionBlock
                            failure : (void (^)(NSError *error)) failure API_AVAILABLE(ios(11.0));

// Reference images should be the unaltered image to use to detect. The functions will draw the boxes for detected items on top of the 'image'.
// This is so boxes and markings from other detections don't alter the results.

// Returns in completion block the face rectangles as well as an image of the bounding boxes drawn over the faces found
+(void) drawFacesOnImage:(UIImage*)image usingReferenceImage:(UIImage*)reference completion:(void (^)(NSMutableArray *data, UIImage *image))completionBlock;
+(void) drawTextOnImage:(UIImage*)image usingReferenceImage:(UIImage*)reference completion:(void (^)(NSMutableArray *data, UIImage *image))completionBlock;
+(void) drawDominantImage:(UIImage*)image usingReferenceImage:(UIImage*)reference completion:(void (^)(NSMutableArray *data, UIImage *image))completionBlock;

@end
