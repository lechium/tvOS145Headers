/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSString, _PASDatabaseJournalFile;

@interface _PASDatabaseJournal : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _directoryPath;
	unsigned long long _serialNumber;
	NSString* _uuid;
	BOOL _journaling;
	BOOL _inMemory;
	_PASDatabaseJournalFile* _currentFile;

}

@property (nonatomic,readonly) BOOL journaling;              //@synthesize journaling=_journaling - In the implementation block
+(/*^block*/id)_binderForDictionary:(id)arg1 ;
+(id)_journalPathForDbPath:(id)arg1 ;
+(id)journalWithDbPath:(id)arg1 ;
+(id)journalForInMemoryDb;
-(id)description;
-(BOOL)journaling;
-(id)_getCurrentFile;
-(void)_clearCurrentFile;
-(void)_addCurrentFileToLog;
-(void)_closeCurrentFile;
-(void)runQuery:(id)arg1 values:(id)arg2 onDb:(id)arg3 ;
-(BOOL)_executeNextRecordFromFile:(id)arg1 onDb:(id)arg2 becameLocked:(BOOL*)arg3 deleteFile:(BOOL*)arg4 ;
-(BOOL)_executeFile:(id)arg1 onDb:(id)arg2 becameLocked:(BOOL*)arg3 ;
-(BOOL)executeQueriesOnDatabase:(id)arg1 ;
-(BOOL)deleteAllJournaledQueries;
-(BOOL)startJournaling;
-(BOOL)stopJournaling;
-(id)directoryPath;
@end

