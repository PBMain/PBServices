#import <UIKit/UIKit.h>

@interface DBManager : NSObject

@property (nonatomic, strong) NSString *documentsDirectory;
@property (nonatomic, strong) NSString *databaseFilename;
@property (nonatomic, strong) NSMutableArray *arrResults;

-(void)copyDatabaseIntoDocumentsDirectory;
-(void)runQuery:(const char *)query isQueryExecutable:(BOOL)queryExecutable;

-(instancetype)initWithDatabaseFilename:(NSString*)dbFilename;
+(DBManager*) prepareDatabase;

@property (nonatomic, strong) NSMutableArray *arrColumnNames;
@property (nonatomic) int affectedRows;
@property (nonatomic) long long lastInsertedRowID;

-(NSArray *)loadDataFromDB:(NSString *)query;
-(void)executeQuery:(NSString *)query;

// Reset (Drop all tables, and recreate)
+(void) clearDatabase;

// Clear stream offline mode caches
+(void) clearStreamCaches;

// Clear all records of uploads
+(void) clearUploadRecords;

@end
