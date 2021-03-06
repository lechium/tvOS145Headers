/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreKnowledge/CoreKnowledge-Structs.h>
#import <libobjc.A.dylib/CKVDatabase.h>

@class NSMutableDictionary, NSString;

@interface CKVSQLiteDatabase : NSObject <CKVDatabase> {

	sqlite3Ref _handle;
	NSMutableDictionary* _cachedSQLiteStatements;
	NSString* _path;
	long long _accessPermission;
	long long _threadingMode;
	long long _dataProtectionClass;
	long long _databaseOptions;

}

@property (nonatomic,readonly) NSString * path;                            //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) long long accessPermission;                 //@synthesize accessPermission=_accessPermission - In the implementation block
@property (nonatomic,readonly) long long threadingMode;                    //@synthesize threadingMode=_threadingMode - In the implementation block
@property (nonatomic,readonly) long long dataProtectionClass;              //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (nonatomic,readonly) long long databaseOptions;                  //@synthesize databaseOptions=_databaseOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)path;
-(BOOL)openWithError:(id*)arg1 ;
-(long long)dataProtectionClass;
-(BOOL)closeWithError:(id*)arg1 ;
-(id)initWithPath:(id)arg1 accessPermission:(long long)arg2 threadingMode:(long long)arg3 dataProtectionClass:(long long)arg4 databaseOptions:(long long)arg5 ;
-(BOOL)executeCommandString:(id)arg1 error:(id*)arg2 ;
-(BOOL)beginTransactionWithError:(id*)arg1 ;
-(BOOL)commitTransactionWithError:(id*)arg1 ;
-(BOOL)rollbackTransactionWithError:(id*)arg1 ;
-(id)executeCommand:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)executeCommand:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(long long)accessPermission;
-(long long)threadingMode;
-(long long)databaseOptions;
@end

