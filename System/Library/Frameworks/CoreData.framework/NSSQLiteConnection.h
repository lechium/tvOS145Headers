/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreData/CoreData-Structs.h>
@class NSObject, NSSQLCore, NSURL, NSString, NSSQLiteStatement, NSArray, NSSQLEntity, NSMutableDictionary, NSMutableSet, NSMutableArray, NSSQLSaveChangesRequestContext, NSSQLitePrefetchRequestCache;

@interface NSSQLiteConnection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSSQLCore* _sqlCore;
	NSURL* _workingURL;
	NSString* _dbPath;
	BOOL _transactionIsOpen;
	BOOL _transactionIsCurrentlyReadOnly;
	BOOL _useSyntaxColoredLogging;
	NSSQLiteStatement* _sqlStatement;
	NSArray* _columnsToFetch;
	NSArray* _metadataColumns;
	sqlite3Ref _db;
	sqlite3_stmtRef _vmstatement;
	int _rowsProcessedCount;
	unsigned _lastEntityKey;
	NSSQLEntity* _finalEntity;
	NSSQLEntity* _lastEntity;
	sqlite3_stmtRef _fetchPKStatement;
	sqlite3_stmtRef _updatePKStatement;
	NSSQLiteStatement* _beginStatement;
	NSSQLiteStatement* _commitStatement;
	NSSQLiteStatement* _rollbackStatement;
	CFDictionaryRef _vmCachedStatements;
	NSMutableDictionary* _pragmaSettings;
	NSMutableSet* _mObjectIDsUpdatedByTriggers;
	NSMutableArray* _mObjectIDsInsertedByDATriggers;
	NSMutableArray* _mObjectIDsUpdatededByDATriggers;
	NSSQLSaveChangesRequestContext* _saveRequest;
	CFDictionaryRef _statementCachesByEntity;
	NSSQLitePrefetchRequestCache* _prefetchRequestCache;
	CFDictionaryRef _cachedEntityUpdateStatements;
	CFDictionaryRef _cachedEntityConstrainedValuesUpdateStatements;
	double _timeOutOption;
	double _timeOutIncrement;
	void** _extraBuffersForRegisteredFunctions[5];
	NSString* _dbPathRegisteredWithBackupd;
	long long _vacuumTracker;
	NSMutableArray* _temporaryTables;
	struct {
		unsigned _readyToBind : 1;
		unsigned _fetchInProgress : 1;
		unsigned _fileSystemType : 2;
		unsigned _proxyLocking : 1;
		unsigned _vacuumSetupNeeded : 1;
		unsigned _usingWAL : 1;
		unsigned _disallowReconnect : 1;
		unsigned _isWriter : 1;
		unsigned _didSnapshotRecovery : 1;
		unsigned _hasTransactionStringTable : 1;
		unsigned _isQueryGenTracking : 1;
		unsigned _reserved : 20;
	}  _sqliteConnectionFlags;
	unsigned long long _debugInode;
	NSMutableArray* _activeGenerations;
	NSMutableDictionary* _transactionStringName;
	NSMutableDictionary* _usedIndexes;

}

@property (assign,nonatomic) BOOL isWriter; 
+(void)initialize;
+(BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5 ;
+(BOOL)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(BOOL)_rekeyPersistentStoreAtURL:(id)arg1 options:(id)arg2 withKey:(id)arg3 error:(id*)arg4 ;
+(int)readMagicWordFromPath:(const char*)arg1 options:(id)arg2 ;
+(int)openAtPath:(const char*)arg1 withKey:(id)arg2 handle:(sqlite3*)arg3 flags:(int)arg4 module:(const char*)arg5 checkpointOnClose:(BOOL)arg6 ;
+(const char*)_databaseOpenURLStringForURL:(id)arg1 ;
+(void)_setDebugFlags:(int)arg1 ;
+(void)__INode_Changed_AllThatIsLeftToUsIsHonor__;
-(void)dealloc;
-(void)beginTransaction;
-(void)commitTransaction;
-(void)disconnect;
-(BOOL)isOpen;
-(void)execute;
-(void)connect;
-(id)adapter;
-(int)freeQueryGenerationWithIdentifier:(id)arg1 ;
-(id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)connectionManager;
-(id)fetchTableCreationSQL;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(void)beginReadTransaction;
-(int)adoptQueryGenerationWithIdentifier:(id)arg1 ;
-(void)endFetchAndRecycleStatement:(BOOL)arg1 ;
-(void)rollbackTransaction;
-(void)setExclusiveLockingMode:(BOOL)arg1 ;
-(id)initForSQLCore:(id)arg1 ;
-(void)performAndWait:(/*^block*/id)arg1 ;
-(void)clearPrefetchRequestCache;
-(void)_clearSaveGeneratedCachedStatements;
-(BOOL)finishDeferredLightweightMigration:(BOOL)arg1 ;
-(BOOL)isLocalFS;
-(void)prepareAndExecuteSQLStatement:(id)arg1 ;
-(id)fetchTableNames;
-(BOOL)_hasTableWithName:(id)arg1 ;
-(BOOL)_dropTableWithName:(id)arg1 ;
-(BOOL)selectCountWithStatement:(id)arg1 ;
-(void)setColumnsToFetch:(id)arg1 ;
-(id)newFetchedArray;
-(void)_dropAllTriggers;
-(void)_dropAllDATriggers;
-(CFArrayRef)copyRawIntegerRowsForSQL:(id)arg1 ;
-(BOOL)_hasPersistentHistoryTables;
-(BOOL)_hasHistoryTransactionStringTable;
-(BOOL)_hasOldHistoryTrackingTables;
-(void)_dropOldHistoryTrackingTables;
-(void)dropHistoryTrackingTables;
-(unsigned long long)numberOfTombstones;
-(void)createMissingHistoryTables;
-(BOOL)addTombstoneColumnsForRange:(NSRange)arg1 ;
-(id)hasAncillaryEntitiesInHistory;
-(void)dropHistoryBeforeTransactionID:(id)arg1 ;
-(void)createTablesForEntities:(id)arg1 ;
-(BOOL)hasTransactionStringColumnsInTransactionTable;
-(BOOL)addTransactionStringColumnsToTransactionTable;
-(BOOL)hasHistoryRows;
-(BOOL)hasCachedModelTable;
-(void)saveCachedModel:(id)arg1 ;
-(id)fetchMetadata;
-(void)saveMetadata:(id)arg1 ;
-(BOOL)canConnect;
-(BOOL)databaseIsEmpty;
-(BOOL)hasMetadataTable;
-(BOOL)setUpIndexTracking;
-(BOOL)recreateIndices;
-(id)fetchCachedModel;
-(id)initAsQueryGenerationTrackingConnectionForSQLCore:(id)arg1 ;
-(id)_activeGenerations;
-(int)_registerNewQueryGenerationSnapshot:(id)arg1 ;
-(int)registerCurrentQueryGenerationWithStore:(id)arg1 ;
-(id)currentQueryGenerationIdentifier;
-(id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1 ;
-(void)_forceDisconnectOnError;
-(long long)fetchMaxPrimaryKeyForEntity:(id)arg1 ;
-(id)harvestUsedIndexes;
-(void)_dropKnownHistoryTrackingTables;
-(id)columnsToFetch;
-(long long)_ensureWalFileExists;
-(void)_performPostSaveTasks:(BOOL)arg1 andForceFullVacuum:(BOOL)arg2 ;
-(void)_executeSQLString:(id)arg1 ;
-(id)_currentQueryGenerationSnapshot:(id*)arg1 ;
-(void)releaseSQLStatement;
-(void)_ensureNoStatementPrepared;
-(void)_ensureNoFetchInProgress;
-(void)_ensureDatabaseOpen;
-(long long)_fetchMaxPrimaryKeyForEntity:(id)arg1 ;
-(void)createTableForEntity:(id)arg1 ;
-(void)createManyToManyTablesForEntity:(id)arg1 ;
-(void)createIndexesForEntity:(id)arg1 ;
-(void)createTriggersForEntities:(id)arg1 ;
-(BOOL)performIntegrityCheck;
-(void)_registerExtraFunctions;
-(void)_restoreBusyTimeOutSettings;
-(void)_configureSynchronousMode;
-(void)_configureIntegrityCheck;
-(void)createSchema;
-(void)_configurePragmaOptions:(int)arg1 createdSchema:(BOOL)arg2 ;
-(void)configureUbiquityMetadataTable;
-(void)forceTransactionClosed;
-(void)_clearTransactionCaches;
-(void)_clearCachedStatements;
-(void)_finalizeStatement;
-(BOOL)hasOpenTransaction;
-(void)_ensureNoTransactionOpen;
-(void)prepareSQLStatement:(id)arg1 ;
-(void)cacheCurrentDBStatementOn:(id)arg1 ;
-(void)resetSQLStatement;
-(void)transactionDidBegin;
-(void)_setupVacuumIfNecessary;
-(void)transactionDidCommit;
-(void)transactionDidRollback;
-(id)statementCacheForEntity:(id)arg1 ;
-(void)addVMCachedStatement:(id)arg1 ;
-(void)_bindVariablesWithInsertedRow:(id)arg1 ;
-(void)_clearBindVariablesForInsertedRow;
-(int)_rowsChangedByLastExecute;
-(id)cachedUpdateStatementForEntity:(id)arg1 andDeltasMask:(CFBitVectorRef)arg2 ;
-(void)cacheUpdateStatement:(id)arg1 forEntity:(id)arg2 andDeltasMask:(CFBitVectorRef)arg3 ;
-(void)_bindVariablesWithUpdatedRow:(id)arg1 andOriginalRow:(id)arg2 forDeltasMask:(CFBitVectorRef)arg3 ;
-(void)_clearBindVariablesForUpdateStatement:(id)arg1 forDeltasMask:(CFBitVectorRef)arg2 ;
-(id)cachedUpdateConstrainedValuesStatmentForEntity:(id)arg1 ;
-(void)cacheUpdateConstrainedValuesStatement:(id)arg1 forEntity:(id)arg2 ;
-(void)_bindVariablesForConstrainedValuesWithRow:(id)arg1 ;
-(void)_clearBindVariablesForConstrainedValuesUpdateStatement:(id)arg1 ;
-(void)_bindVariablesWithDeletedRow:(id)arg1 ;
-(void)executeCorrelationChangesForValue1:(unsigned long long)arg1 value2:(unsigned long long)arg2 value3:(unsigned long long)arg3 value4:(unsigned long long)arg4 ;
-(void)writeCorrelationInsertsFromTracker:(id)arg1 ;
-(void)writeCorrelationDeletesFromTracker:(id)arg1 ;
-(void)writeCorrelationMasterReordersFromTracker:(id)arg1 ;
-(void)writeCorrelationReordersFromTracker:(id)arg1 ;
-(void)bindTempTableForBindIntarray:(id)arg1 ;
-(void)bindTempTablesForStatementIfNecessary:(id)arg1 ;
-(void)_endFetch;
-(id)sqlStatement;
-(id)indexesUsedByStatement:(id)arg1 ;
-(BOOL)isFetchInProgress;
-(void)_clearOtherStatements;
-(unsigned long long)_countOfVMCachedStatements;
-(id)_newValueForColumn:(id)arg1 atIndex:(unsigned)arg2 inStatement:(sqlite3_stmtRef)arg3 ;
-(void)handleCorruptedDB:(id)arg1 ;
-(id)fetchCreationSQLForType:(id)arg1 containing:(id)arg2 ;
-(BOOL)_hasTableWithName:(id)arg1 isTemp:(BOOL)arg2 ;
-(id)fetchTableCreationSQLContaining:(id)arg1 ;
-(id)_tempNameForTableName:(id)arg1 ;
-(id)_createInsertStatementForEntity:(id)arg1 ;
-(id)_entitiesWithDeferredMigration;
-(id)_alterTableStatementsForEntities:(id)arg1 ;
-(id)_createTableStatementsForEntities:(id)arg1 ;
-(id)_createInsertStatementsForEntities:(id)arg1 ;
-(id)_dropTableStatementsForTempOfEntities:(id)arg1 ;
-(void)createMetadata;
-(id)metadataColumns;
-(id)_decompressedModelWithData:(id)arg1 ;
-(void)createCachedModelTable;
-(id)_compressedDataWithModel:(id)arg1 ;
-(void)_configurePageSize;
-(void)_configureAutoVacuum;
-(void)willCreateSchema;
-(void)didCreateSchema;
-(void)createPrimaryKeyTableForModel:(id)arg1 knownEmpty:(BOOL)arg2 ;
-(id)fetchIndexCreationSQL;
-(long long)_getCurrentAutoVacuumValue;
-(BOOL)hasIndexTrackingTable;
-(long long)generatePrimaryKeysForEntity:(id)arg1 batch:(unsigned)arg2 ;
-(void)dropIndexTrackingTable;
-(void)prepareInsertStatementForAncillaryEntity:(id)arg1 ;
-(BOOL)_tableHasRows:(id)arg1 ;
-(id)processRelationshipUpdates:(id)arg1 forRequestContext:(id)arg2 ;
-(id)_insertTransactionStringsForRequestContext:(id)arg1 ;
-(long long)_insertTransactionForRequestContext:(id)arg1 andStrings:(id)arg2 ;
-(void)insertChanges:(id)arg1 type:(long long)arg2 transactionID:(long long)arg3 context:(id)arg4 ;
-(void)insertReorderUpdates:(id)arg1 transactionID:(long long)arg2 context:(id)arg3 ;
-(void)insertBatchInserts:(id)arg1 transactionID:(long long)arg2 ;
-(BOOL)hasAttributeChanges:(id)arg1 ;
-(void)insertUpdates:(id)arg1 transactionID:(long long)arg2 updatedAttributes:(id)arg3 ;
-(BOOL)_hasOldHistoryTrackingTablesV0;
-(BOOL)_hasOldHistoryTrackingTablesV1;
-(void)_dropOldHistoryTrackingTablesV0;
-(void)_dropOldHistoryTrackingTablesV1;
-(BOOL)_hasTempTableWithName:(id)arg1 ;
-(void)insertBatchDeleteChangesForTransactionID:(long long)arg1 ;
-(id)_insertTransactionStringForMigrationAuthor:(id)arg1 ;
-(id)_lastInsertRowID;
-(id)transactionStringForName:(id)arg1 ;
-(id)_createTransactionStringWithName:(id)arg1 ;
-(id)_transactionsStringAndPKsForStrings:(id)arg1 ;
-(unsigned long long)insertDictionaryBlock:(/*^block*/id)arg1 forEntity:(id)arg2 includeOnConflict:(BOOL)arg3 ;
-(void)_batchInsertThrowWithErrorCode:(int)arg1 andMessage:(id)arg2 forKey:(id)arg3 andValue:(id)arg4 additionalDetail:(id)arg5 ;
-(void)prepareInsertStatementForEntity:(id)arg1 includeConstraints:(BOOL)arg2 includeOnConflict:(BOOL)arg3 ;
-(void)_validateProperty:(id)arg1 withValue:(id)arg2 ;
-(int)rowsChangedByLastStatement;
-(BOOL)_useContextObjects;
-(long long)_countOfRowsInTable:(id)arg1 ;
-(long long)_int64ResultForSQL:(id)arg1 ;
-(long long)pagesInStore;
-(long long)freePagesInStore;
-(long long)pagesUsedByTables:(id)arg1 ;
-(int)_adoptQueryGenerationWithSnapshot:(id)arg1 ;
-(int)registerCurrentQueryGenerationWithStore:(id)arg1 retries:(unsigned long long)arg2 ;
-(id)fetchTriggerCreationSQL;
-(int)logQueryPlanForStatement:(id)arg1 ;
-(BOOL)_isQueryGenerationTrackingConnection;
-(BOOL)isWriter;
-(void)setIsWriter:(BOOL)arg1 ;
-(void)insertRow:(id)arg1 ;
-(id)prefetchRequestCache;
-(void)updateRow:(id)arg1 forRequestContext:(id)arg2 ;
-(void)updateConstrainedValuesForRow:(id)arg1 ;
-(BOOL)deleteRow:(id)arg1 forRequestContext:(id)arg2 ;
-(void)uncacheVMStatement:(id)arg1 ;
-(void)writeCorrelationChangesFromTracker:(id)arg1 ;
-(void)selectRowsWithStatement:(id)arg1 cached:(BOOL)arg2 ;
-(int)fetchResultSet:(void*)arg1 usingFetchPlan:(id)arg2 ;
-(int)fetchBufferResultSet:(void*)arg1 usingFetchPlan:(id)arg2 ;
-(void)setSecureDeleteMode:(BOOL)arg1 ;
-(sqlite3_stmtRef)_vmstatement;
-(BOOL)_hasSaveRequest;
-(void)_setSaveRequest:(id)arg1 ;
-(void)_clearSaveRequest;
-(BOOL)hasPrimaryKeyTable;
-(void*)_buffersForRegisteredFunctions;
-(void)dropUbiquityTables;
-(void)processSaveRequest:(id)arg1 ;
-(void)processInsertRequest:(id)arg1 withOIDs:(id)arg2 ;
-(void)processUpdateRequest:(id)arg1 withOIDs:(id)arg2 forAttributes:(id)arg3 ;
-(BOOL)hasHistoryTransactionWithNumber:(id)arg1 ;
-(void)processDeleteRequest:(id)arg1 ;
-(void)processMigrationRequestForHash:(id)arg1 ;
-(void)processExternalDataReferenceFilesDeletedByRequest:(id)arg1 ;
-(unsigned long long)insertArray:(id)arg1 forEntity:(id)arg2 includeOnConflict:(BOOL)arg3 ;
-(unsigned long long)insertManagedObjectBlock:(/*^block*/id)arg1 forEntity:(id)arg2 includeOnConflict:(BOOL)arg3 ;
-(id)gatherObjectIDsFromTable:(id)arg1 ;
-(id)gatherObjectIDsAndAttributeNamesFromTable:(id)arg1 ;
-(long long)percentageUsedByPersistentHistory;
-(BOOL)registerMigrationUpdateFunctionWithMigrator:(id)arg1 ;
-(id)executeAttributeUniquenessCheckSQLStatement:(id)arg1 returningColumns:(id)arg2 ;
-(id)executeMulticolumnUniquenessCheckSQLStatement:(id)arg1 returningColumns:(id)arg2 ;
-(id)_checkActiveGenerationsForIdentfier:(id)arg1 ;
-(id)createSetOfObjectIDsUpdatedByTriggers;
-(void)clearObjectIDsUpdatedByTriggers;
-(void)triggerUpdatedRowInTable:(const char*)arg1 withEntityID:(long long)arg2 primaryKey:(long long)arg3 columnName:(const char*)arg4 newValue:(long long)arg5 ;
-(id)createSetOfObjectIDsInsertUpdatedByDATriggers;
-(void)clearObjectIDsInsertUpdatededByDATriggers;
-(void)derivedAttributeUpdatedInsertedRowInTable:(const char*)arg1 withEntityID:(long long)arg2 primaryKey:(long long)arg3 columnName:(const char*)arg4 newValue:(id)arg5 ;
-(id)createSetOfObjectIDsUpdatedByDATriggers;
-(void)clearObjectIDsUpdatededByDATriggers;
-(void)derivedAttributeUpdatedRowInTable:(const char*)arg1 withEntityID:(long long)arg2 primaryKey:(long long)arg3 columnName:(const char*)arg4 newValue:(id)arg5 ;
-(id)createArrayOfPrimaryKeysAndEntityIDsForRowsWithoutRecordMetadataWithEntity:(id)arg1 metadataEntity:(id)arg2 ;
@end

