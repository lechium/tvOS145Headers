//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SecPinningDb : NSObject
{
    struct os_unfair_lock_s _regexCacheLock;	// 8 = 0x8
    struct __OpaqueSecDb *_db;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSURL *_dbPath;	// 32 = 0x20
    NSMutableDictionary *_regexCache;	// 40 = 0x28
}

+ (id)pinningDbPath;	// IMP=0x000000010003034c
- (void).cxx_destruct;	// IMP=0x000000010002ddac
@property(retain) NSMutableDictionary *regexCache; // @synthesize regexCache=_regexCache;
@property struct os_unfair_lock_s regexCacheLock; // @synthesize regexCacheLock=_regexCacheLock;
@property(retain) NSURL *dbPath; // @synthesize dbPath=_dbPath;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property struct __OpaqueSecDb *db; // @synthesize db=_db;
- (id)queryForPolicyName:(id)arg1;	// IMP=0x000000010002d874
- (id)queryForDomain:(id)arg1;	// IMP=0x000000010002d1f0
- (_Bool)isPinningDisabled:(id)arg1;	// IMP=0x000000010002cfb8
- (_Bool)queryCacheForSuffix:(id)arg1 firstLabel:(id)arg2 results:(id *)arg3;	// IMP=0x000000010002cc34
- (void)addSuffixToCache:(id)arg1 entry:(id)arg2;	// IMP=0x000000010002cadc
- (void)clearCache;	// IMP=0x000000010002ca6c
- (void)dealloc;	// IMP=0x000000010002ca1c
- (id)init;	// IMP=0x000000010002c954
- (void)initializedDb;	// IMP=0x000000010002c8fc
- (struct __OpaqueSecDb *)createAtPath;	// IMP=0x000000010002c818
- (_Bool)updateDb:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2 pinningList:(id)arg3 updateSchema:(_Bool)arg4 updateContent:(_Bool)arg5;	// IMP=0x000000010002c6d8
- (id)copySystemPinningList;	// IMP=0x000000010002c54c
- (_Bool)installDbFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002c0b4
- (_Bool)createOrAlterRulesTable:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x000000010002bf04
- (_Bool)createOrAlterAdminTable:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x000000010002be1c
- (_Bool)removeAllRulesFromDb:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x000000010002bcc0
- (_Bool)populateDbFromBundle:(id)arg1 dbConnection:(struct __OpaqueSecDbConnection *)arg2 error:(struct __CFError **)arg3;	// IMP=0x000000010002bb2c
- (_Bool)insertRuleWithName:(id)arg1 domainSuffix:(id)arg2 labelRegex:(id)arg3 policies:(id)arg4 transparentConnection:(id)arg5 dbConnection:(struct __OpaqueSecDbConnection *)arg6 error:(struct __CFError **)arg7;	// IMP=0x000000010002b89c
- (_Bool)shouldUpdateContent:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002b69c
- (_Bool)setContentVersion:(id)arg1 dbConnection:(struct __OpaqueSecDbConnection *)arg2 error:(struct __CFError **)arg3;	// IMP=0x000000010002b504
- (id)getContentVersion:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x000000010002b408
- (_Bool)setSchemaVersion:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x000000010002b2e8
- (id)getSchemaVersion:(struct __OpaqueSecDbConnection *)arg1 error:(struct __CFError **)arg2;	// IMP=0x000000010002b1ec

@end

