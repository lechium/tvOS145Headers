/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKSQLiteDelegate;
#import <CloudKit/CloudKit-Structs.h>
@class NSString, NSMutableDictionary, NSDateFormatter;

@interface CKSQLite : NSObject {

	BOOL _hasMigrated;
	BOOL _shouldVacuum;
	BOOL _traced;
	BOOL _corrupt;
	int _userVersion;
	NSString* _path;
	NSString* _schema;
	NSString* _schemaVersion;
	NSString* _objectClassPrefix;
	long long _synchronousMode;
	id<CKSQLiteDelegate> _delegate;
	sqlite3Ref _db;
	unsigned long long _openCount;
	NSMutableDictionary* _statementsBySQL;
	NSDateFormatter* _dateFormatter;
	NSMutableDictionary* _unitTestOverrides;

}

@property (assign,nonatomic) sqlite3Ref db;                                        //@synthesize db=_db - In the implementation block
@property (assign,nonatomic) unsigned long long openCount;                         //@synthesize openCount=_openCount - In the implementation block
@property (assign,nonatomic) BOOL corrupt;                                         //@synthesize corrupt=_corrupt - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * statementsBySQL;              //@synthesize statementsBySQL=_statementsBySQL - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                      //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * unitTestOverrides;              //@synthesize unitTestOverrides=_unitTestOverrides - In the implementation block
@property (nonatomic,readonly) NSString * path;                                    //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSString * schema;                                  //@synthesize schema=_schema - In the implementation block
@property (nonatomic,readonly) NSString * schemaVersion;                           //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (nonatomic,retain) NSString * objectClassPrefix;                         //@synthesize objectClassPrefix=_objectClassPrefix - In the implementation block
@property (assign,nonatomic) int userVersion;                                      //@synthesize userVersion=_userVersion - In the implementation block
@property (assign,nonatomic) long long synchronousMode;                            //@synthesize synchronousMode=_synchronousMode - In the implementation block
@property (nonatomic,readonly) BOOL isOpen; 
@property (nonatomic,readonly) BOOL hasMigrated;                                   //@synthesize hasMigrated=_hasMigrated - In the implementation block
@property (assign,nonatomic) BOOL shouldVacuum;                                    //@synthesize shouldVacuum=_shouldVacuum - In the implementation block
@property (assign,nonatomic) BOOL traced;                                          //@synthesize traced=_traced - In the implementation block
@property (nonatomic,retain) id<CKSQLiteDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
+(id)equalityClauseAndBindingsForDict:(id)arg1 ;
-(void)dealloc;
-(id<CKSQLiteDelegate>)delegate;
-(void)open;
-(void)close;
-(void)setDelegate:(id<CKSQLiteDelegate>)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(NSString *)path;
-(id)creationDate;
-(void)remove;
-(int)changes;
-(void)end;
-(id)initWithPath:(id)arg1 schema:(id)arg2 ;
-(int)userVersion;
-(id)_synchronousModeString;
-(id)_createSchemaHash;
-(BOOL)isOpen;
-(BOOL)openWithError:(id*)arg1 ;
-(void)begin;
-(void)rollback;
-(void)analyze;
-(void)vacuum;
-(long long)lastInsertRowID;
-(void)executeSQL:(id)arg1 ;
-(void)executeSQL:(id)arg1 arguments:(char*)arg2 ;
-(id)statementForSQL:(id)arg1 ;
-(void)removeAllStatements;
-(id)allTableNames;
-(void)dropAllTables;
-(NSDateFormatter *)dateFormatter;
-(id)datePropertyForKey:(id)arg1 ;
-(void)setDateProperty:(id)arg1 forKey:(id)arg2 ;
-(void)removePropertyForKey:(id)arg1 ;
-(id)columnNamesForTable:(id)arg1 ;
-(id)select:(id)arg1 from:(id)arg2 ;
-(id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 ;
-(void)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5 limit:(id)arg6 block:(/*^block*/id)arg7 ;
-(void)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 block:(/*^block*/id)arg6 ;
-(id)selectFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4 ;
-(void)update:(id)arg1 set:(id)arg2 where:(id)arg3 bindings:(id)arg4 limit:(id)arg5 ;
-(id)selectAllFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(unsigned long long)selectCountFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(long long)insertOrReplaceInto:(id)arg1 values:(id)arg2 ;
-(void)deleteFrom:(id)arg1 matchingValues:(id)arg2 ;
-(void)deleteFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(id)_tableNameForClass:(Class)arg1 ;
-(int)dbUserVersion;
-(NSString *)schema;
-(NSString *)schemaVersion;
-(NSString *)objectClassPrefix;
-(void)setObjectClassPrefix:(NSString *)arg1 ;
-(void)setUserVersion:(int)arg1 ;
-(long long)synchronousMode;
-(void)setSynchronousMode:(long long)arg1 ;
-(BOOL)hasMigrated;
-(BOOL)traced;
-(void)setTraced:(BOOL)arg1 ;
-(sqlite3Ref)db;
-(void)setDb:(sqlite3Ref)arg1 ;
-(unsigned long long)openCount;
-(void)setOpenCount:(unsigned long long)arg1 ;
-(BOOL)corrupt;
-(void)setCorrupt:(BOOL)arg1 ;
-(NSMutableDictionary *)statementsBySQL;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSMutableDictionary *)unitTestOverrides;
-(void)willCreateDatabase;
-(BOOL)shouldVacuum;
-(void)_periodicVacuum;
-(void)raise:(id)arg1 ;
-(id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4 orderBy:(id)arg5 ;
-(id)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(id)_boxedPropertyDictionary:(id)arg1 forObjCClass:(id)arg2 ;
-(id)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3 limit:(id)arg4 ;
-(id)_boxedValue:(id)arg1 forObjcCProperty:(id)arg2 ;
-(long long)upsertInto:(id)arg1 values:(id)arg2 onConflict:(id)arg3 doUpdate:(id)arg4 where:(id)arg5 ;
-(long long)insertOrReplaceObject:(id)arg1 ;
-(BOOL)deleteExactObject:(id)arg1 ;
-(int)deleteAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(id)selectAllObjectsOfClass:(Class)arg1 ;
-(void)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3 orderBy:(id)arg4 limit:(id)arg5 block:(/*^block*/id)arg6 ;
-(id)selectObjectOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3 ;
-(void)updateAllObjectsOfClass:(Class)arg1 set:(id)arg2 where:(id)arg3 bindings:(id)arg4 ;
-(void)setShouldVacuum:(BOOL)arg1 ;
-(void)setUnitTestOverrides:(NSMutableDictionary *)arg1 ;
@end

