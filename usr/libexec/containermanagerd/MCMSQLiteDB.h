//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface MCMSQLiteDB : NSObject
{
    struct sqlite3 *_db;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
}

+ (struct sqlite3 *)openDBWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100081fe4
- (void).cxx_destruct;	// IMP=0x0000000100081fd8
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
- (_Bool)deleteAllAdvanceCopiesOfCodeSigningEntriesWithError:(id *)arg1;	// IMP=0x0000000100081acc
- (id)parentIdentifierForChildIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100081558
- (id)childIdentifiersForParentIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100080f50
- (id)identifiersWithError:(id *)arg1;	// IMP=0x00000001000809fc
- (id)enumerateIdentifiersAndCodeSigningInfoUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100080388
- (_Bool)invalidateCodeSigningForIdentifierAndAllChildren:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007fc28
- (_Bool)invalidateCodeSigningWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007fb24
- (id)codeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007f77c
- (_Bool)deleteCodeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007f6a8
- (_Bool)addCodeSigningEntry:(id)arg1 withIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000010007f124
- (id)_selectCodeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007eca4
- (id)_codeSigningEntryFromStatementRow:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x000000010007e960
- (_Bool)_deleteCodeSigningWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007e880
- (_Bool)_insertCodeSigningData:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000010007e244
- (_Bool)_insertCodeSigningInfo:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000010007e04c
- (_Bool)_performInsertOrUpdateQuery:(const char *)arg1 withCodeSigningEntry:(id)arg2 forIdentifier:(id)arg3 isUpdate:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000010007d7ec
- (_Bool)_insertChildIdentifier:(id)arg1 forParentIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000010007d6dc
- (_Bool)_performSingleParameterQuery:(const char *)arg1 withTextInput:(id)arg2 error:(id *)arg3;	// IMP=0x000000010007d6c8
- (_Bool)_performSingleParameterQuery:(const char *)arg1 withTextInput:(id)arg2 expectedChanges:(int)arg3 error:(id *)arg4;	// IMP=0x000000010007d6b0
- (_Bool)_performTwoParameterQuery:(const char *)arg1 withTextInputOne:(id)arg2 andTextInputTwo:(id)arg3 expectedChanges:(int)arg4 error:(id *)arg5;	// IMP=0x000000010007d0e8
- (void)closeDB;	// IMP=0x000000010007cef8
- (_Bool)_sqliteExec:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007cdbc
- (void)dealloc;	// IMP=0x000000010007cd70
- (id)initWithParentDirectoryURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007cc54

@end

