/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, NSMutableArray, NSMutableDictionary;

@interface HMDBackingStoreLocal : HMFObject <HMFLogging> {

	sqlite3Ref context;
	void* sqlite3_cache;
	sqlite3_stmtRef insertZone;
	sqlite3_stmtRef deleteZone;
	sqlite3_stmtRef selectZones;
	sqlite3_stmtRef insertStore;
	sqlite3_stmtRef selectStores;
	sqlite3_stmtRef insertGroup;
	sqlite3_stmtRef deleteGroup;
	sqlite3_stmtRef selectGroups;
	sqlite3_stmtRef updateGroupToken;
	sqlite3_stmtRef updateGroupSubscription;
	sqlite3_stmtRef insertShare;
	sqlite3_stmtRef updateShareShare;
	sqlite3_stmtRef updateShareUsers;
	sqlite3_stmtRef deleteShare;
	sqlite3_stmtRef selectShares;
	sqlite3_stmtRef insertRecord;
	sqlite3_stmtRef updateRecordSchema;
	sqlite3_stmtRef selectRecordCountGroup;
	sqlite3_stmtRef selectRecordGroup;
	sqlite3_stmtRef selectRecordGroupMap;
	sqlite3_stmtRef selectRecordUUID;
	sqlite3_stmtRef selectRecordParentUUID;
	sqlite3_stmtRef selectRecordParent;
	sqlite3_stmtRef selectRecordName;
	sqlite3_stmtRef selectRecordUUIDNoShare;
	sqlite3_stmtRef selectRecordParentNoShare;
	sqlite3_stmtRef selectRecordNameNoShare;
	sqlite3_stmtRef selectRecords;
	sqlite3_stmtRef selectStoreRecords;
	sqlite3_stmtRef deleteRecord;
	sqlite3_stmtRef flushPushedXact;
	sqlite3_stmtRef insertLog;
	sqlite3_stmtRef updateLogXactID;
	sqlite3_stmtRef selectLog;
	sqlite3_stmtRef selectChangeExistsLog;
	sqlite3_stmtRef selectAllLog;
	sqlite3_stmtRef insertLogOptions;
	sqlite3_stmtRef selectLogOptions;
	sqlite3_stmtRef updateLog;
	sqlite3_stmtRef deleteLog;
	sqlite3_stmtRef commit;
	sqlite3_stmtRef rollback;
	sqlite3_stmtRef begin;
	NSString* _datastoreFile;
	NSMutableArray* _zoneCache;
	NSMutableDictionary* _storeCache;

}

@property (nonatomic,retain) NSMutableArray * zoneCache;                    //@synthesize zoneCache=_zoneCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * storeCache;              //@synthesize storeCache=_storeCache - In the implementation block
@property (nonatomic,readonly) NSString * datastoreFile;                    //@synthesize datastoreFile=_datastoreFile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(void)cleanDatastoreFilesAt:(id)arg1 everything:(BOOL)arg2 ;
-(void)dealloc;
-(id)_begin;
-(NSMutableDictionary *)storeCache;
-(void)setStoreCache:(NSMutableDictionary *)arg1 ;
-(id)_commit;
-(id)flush:(BOOL)arg1 ;
-(id)logIdentifier;
-(long long)_insertZoneWithName:(id)arg1 error:(id*)arg2 ;
-(NSMutableArray *)zoneCache;
-(void)_rollback;
-(void)_fetchRecordsWithGroupID:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(id)_deleteRecordWithGroupID:(long long)arg1 recordName:(id)arg2 ;
-(id)_deleteGroupWithID:(long long)arg1 ;
-(id)_deleteZoneWithID:(long long)arg1 ;
-(long long)_insertGroupWithZoneID:(long long)arg1 root:(id)arg2 owner:(id)arg3 subscription:(id)arg4 error:(id*)arg5 ;
-(id)_updateGroupWithID:(long long)arg1 serverChangeToken:(id)arg2 ;
-(id)_updateGroupWithID:(long long)arg1 subscription:(id)arg2 ;
-(unsigned long long)_fetchIDForStore:(id)arg1 error:(id*)arg2 ;
-(id)_updateRecordWithGroupID:(long long)arg1 store:(long long)arg2 record:(id)arg3 data:(id)arg4 encoding:(long long)arg5 ;
-(id)_updateRecordWithGroupID:(long long)arg1 store:(long long)arg2 name:(id)arg3 model:(id)arg4 ;
-(void)_fetchRecordCountWithGroupID:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(void)_fetchRecordsWithGroupID:(long long)arg1 uuids:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_fetchRecordsWithGroupID:(long long)arg1 names:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_fetchRecordsWithGroupID:(long long)arg1 parentUuids:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_fetchRecordsWithGroupID:(long long)arg1 parent:(id)arg2 type:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)_fetchRecordMapWithGroupID:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(id)_updateRecordWithGroupID:(long long)arg1 name:(id)arg2 schema:(id)arg3 ;
-(id)_instanceResources:(BOOL)arg1 migrate:(BOOL)arg2 ;
-(id)initWithDB:(id)arg1 migrate:(BOOL)arg2 error:(id*)arg3 ;
-(void)_freeResources;
-(NSString *)datastoreFile;
-(id)_createNewDatastore:(id)arg1 ;
-(id)_fillZoneCache;
-(id)_fillStoreCache;
-(id)_fetchZonesWithError:(id*)arg1 ;
-(id)_fetchGroupsForZone:(id)arg1 withError:(id*)arg2 ;
-(void)setZoneCache:(NSMutableArray *)arg1 ;
-(id)_updateRecordWithGroupID:(long long)arg1 store:(long long)arg2 name:(id)arg3 record:(id)arg4 uuid:(id)arg5 parentUUID:(id)arg6 type:(id)arg7 data:(id)arg8 encoding:(long long)arg9 schema:(id)arg10 ;
-(id)_insertLogOptionsWithID:(long long)arg1 options:(id)arg2 ;
-(id)_runSQLite3:(const char*)arg1 bind:(id)arg2 error:(id*)arg3 ;
-(id)initWithDatastore:(id)arg1 ;
-(id)_updateRecordWithGroupID:(long long)arg1 store:(long long)arg2 record:(id)arg3 ;
-(id)_fetchRecordWithUUID:(id)arg1 root:(id)arg2 error:(id*)arg3 ;
-(void)_selectAllRecords:(/*^block*/id)arg1 ;
-(unsigned long long)_insertLogWithRoot:(id)arg1 transaction:(id)arg2 set:(long long)arg3 error:(id*)arg4 ;
-(void)_selectLogWithRoot:(id)arg1 after:(long long)arg2 mask:(long long)arg3 compare:(long long)arg4 callback:(/*^block*/id)arg5 ;
-(void)_selectLogWithMask:(long long)arg1 compare:(long long)arg2 callback:(/*^block*/id)arg3 ;
-(id)_selectLogOptionsWithID:(long long)arg1 ;
-(void)_selectAllLog:(/*^block*/id)arg1 ;
-(id)_updateLog:(long long)arg1 mask:(long long)arg2 set:(long long)arg3 ;
-(id)_deleteLog:(long long)arg1 ;
@end

