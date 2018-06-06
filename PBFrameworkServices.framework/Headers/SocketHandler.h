@import SocketIO;

@interface SocketHandler : NSObject

@property (nonatomic) SocketIOClient *socket;
@property (nonatomic) SocketManager *manager;

+(instancetype) sharedDelegate;
+(SocketIOClient*) sharedSocket;
+(void) connect;
+(void) disconnect;

@end
