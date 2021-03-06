/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, CKVDatabaseReadOnlyAccess;
@class CKVFilesystemBase, NSObject, CKVDatabaseConnection, NSURL;

@interface CKVIndexManager : NSObject {

	CKVFilesystemBase* _filesystemBase;
	NSObject*<OS_dispatch_queue> _queue;
	CKVDatabaseConnection* _readWrite;
	NSObject*<CKVDatabaseReadOnlyAccess> _readOnly;
	NSURL* _databaseFileURL;

}

@property (retain) NSObject*<CKVDatabaseReadOnlyAccess> readOnly;              //@synthesize readOnly=_readOnly - In the implementation block
@property (nonatomic,readonly) NSURL * databaseFileURL;                        //@synthesize databaseFileURL=_databaseFileURL - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setReadOnly:(NSObject*<CKVDatabaseReadOnlyAccess>)arg1 ;
-(NSObject*<CKVDatabaseReadOnlyAccess>)readOnly;
-(NSURL *)databaseFileURL;
-(void)closeAllConnections;
-(BOOL)submitDatabaseTransactionBlock:(/*^block*/id)arg1 ;
-(id)accessReadOnlyDatabase;
-(id)initWithFilesystemBase:(id)arg1 ;
-(void)_setReadOnlyDatabaseAccess;
-(BOOL)_isDatabaseCreated;
-(BOOL)_readOnlyAccessIsRealDatabaseConnection;
-(void)_closeAllConnections;
-(BOOL)_setReadWriteDatabaseAccess;
-(BOOL)_executeTransactionBlock:(/*^block*/id)arg1 ;
-(void)resetWithFilesystemBase:(id)arg1 ;
@end

