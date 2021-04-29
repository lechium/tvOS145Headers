//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMapTable, NSMutableArray, SQLiteConnectionOptions;
@protocol SQLiteConnectionDelegate;

@interface SQLiteConnection : NSObject
{
    NSMutableArray *_afterTransactionBlocks;	// 8 = 0x8
    struct sqlite3 *_database;	// 16 = 0x10
    id <SQLiteConnectionDelegate> _delegate;	// 24 = 0x18
    _Bool _didResetForCorruption;	// 32 = 0x20
    NSMapTable *_preparedStatements;	// 40 = 0x28
    long long _transactionDepth;	// 48 = 0x30
    _Bool _transactionWantsRollback;	// 56 = 0x38
    SQLiteConnectionOptions *_options;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000c5b08
@property(readonly, copy, nonatomic) SQLiteConnectionOptions *options; // @synthesize options=_options;
@property(nonatomic) __weak id <SQLiteConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_verifiedStatementForSQL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000c594c
- (id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000c5784
- (id)_statementForPreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000c5674
- (_Bool)_resetAfterIOError;	// IMP=0x00000001000c5390
- (_Bool)_resetAfterCorruptionError;	// IMP=0x00000001000c5318
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000c514c
- (_Bool)_performResetAfterCorruptionError;	// IMP=0x00000001000c4ee0
- (_Bool)_open;	// IMP=0x00000001000c4dbc
- (void)_flushAfterTransactionBlocks;	// IMP=0x00000001000c4bfc
- (void)_finalizeAllStatements;	// IMP=0x00000001000c4a90
- (_Bool)_executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c4868
- (_Bool)_executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000c47a4
- (_Bool)_close;	// IMP=0x00000001000c473c
- (_Bool)executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c4730
@property(readonly, copy, nonatomic) NSError *currentError;
- (_Bool)tableExists:(id)arg1;	// IMP=0x00000001000c45b4
- (_Bool)truncate;	// IMP=0x00000001000c4520
- (id)prepareStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000c43e0
- (void)performTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c41d0
- (_Bool)performSavepoint:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c3f98
- (_Bool)open;	// IMP=0x00000001000c3f8c
@property(readonly, nonatomic) long long lastChangeCount;
- (_Bool)finalizePreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000c3e28
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c3c90
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000c3c80
- (void)executeQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c3adc
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c39a0
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000c3990
- (void)executePreparedQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c3844
- (void)dispatchAfterTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c3790
- (_Bool)close;	// IMP=0x00000001000c3784
- (void)dealloc;	// IMP=0x00000001000c367c
- (id)initWithOptions:(id)arg1;	// IMP=0x00000001000c35d0

@end

