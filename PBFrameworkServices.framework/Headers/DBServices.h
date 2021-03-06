#import "DBManager.h"

@interface DBServices : DBManager

// Insert
+(void) insertService:(NSString*)serviceName parameters:(NSString*)params uniqueCode:(NSString*)code streamID:(NSString*)streamID assetID:(NSString*)assetID;

// Select
+(NSArray*) getServiceCallsOfName:(NSString*)serviceName;
+(NSArray*) getUnassignedServiceCallsOfName:(NSString*)serviceName;
+(NSArray*) getDuplicateCallsWithName:(NSString*)serviceName parameters:(NSString*)params streamID:(NSString*)streamID assetID:(NSString*)assetID;
+(NSArray*) getIncompleteCalls;
+(int) getIncompleteCallCount;

// Update
+(void) setServiceCallAssigned:(NSString*)code;
+(void) setServiceCallUnassigned:(NSString*)code;
+(void) setAllServiceCallsUnassigned;
+(void) setNewStreamID:(NSString*)streamID forOldStreamID:(NSString*)oldStreamID;

// Delete
+(void) deleteAllServiceCalls;
+(void) deleteServiceCall:(NSString*)code;
+(void) deleteServiceCallsForStreamID:(NSString*)streamID;

// Settings (not implemented)
//+(void) stopTrackingOfflineCalls;
//+(void) startTrackingOfflineCalls;

@end
