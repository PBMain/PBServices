@interface SocketStreams : NSObject

+(void) listenForChanges;
+(void) joinStream: (NSString*) streamId;

+(void) disconnect;

@end
