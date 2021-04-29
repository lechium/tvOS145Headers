/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CFNetwork/CFNetwork-Structs.h>
@class NSMutableArray, NSString;

@interface NSURLStorageURLCacheDB : NSObject {

	sqlite3Ref _dbReadConnection;
	sqlite3Ref _dbWriteConnection;
	os_unfair_lock_s _dbReadConnectionLock;
	os_unfair_lock_s _dbWriteConnectionLock;
	sqlite3_stmtRef _sqlUpdateReceiverDataStmt;
	sqlite3_stmtRef _sqlInsertStmtResponse;
	sqlite3_stmtRef _sqlInsertStmtBlobData;
	sqlite3_stmtRef _sqlInsertStmtReceiverData;
	sqlite3_stmtRef _sqlUpdateResponseStmt;
	sqlite3_stmtRef _sqlUpdateBlobDataStmt;
	sqlite3_stmtRef _sqlSelectStmt;
	sqlite3_stmtRef _sqlSelectEntry_idAndRecevierDataForKeyStmt;
	sqlite3_stmtRef _sqlSelectIsDataOnFSForEntry_IDStmt;
	sqlite3_stmtRef _sqlSelectFileSystemFileForDeletionStmt;
	sqlite3_stmtRef _sqlDeleteStmtResponse;
	sqlite3_stmtRef _sqlDeleteStmtBlobData;
	sqlite3_stmtRef _sqlDeleteStmtReceiverData;
	NSMutableArray* _entryIDsToDelete;
	unsigned long long _writeCount;
	BOOL _isDBOpen;
	NSString* _dbPathDirectory;
	NSString* _dbPathFile;
	long long _maxDBSize;
	unsigned long long _currentFSBackedUsage;
	unsigned long long _currentSQLiteDBUsage;
	unsigned long long _currentTotalPersistentCacheUsage;
	long long _minSizeForFileSystemBackedCacheItem;

}
-(void)dealloc;
@end
