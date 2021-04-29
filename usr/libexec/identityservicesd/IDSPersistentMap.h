//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSPersistentMapMergePolicy, NSMutableDictionary, NSSet, NSString;
@protocol IDSPersistentMapDelegate, IDSPersistentMapPersister, OS_dispatch_queue, OS_dispatch_source;

@interface IDSPersistentMap : NSObject
{
    _Bool _isLoaded;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    id <IDSPersistentMapDelegate> _delegate;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    long long _versionNumber;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_serialPersistQueue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_saveTimer;	// 48 = 0x30
    double _writeCoalescingDelay;	// 56 = 0x38
    double _writeCoalescingLeeway;	// 64 = 0x40
    CDUnknownBlockType _migrationBlock;	// 72 = 0x48
    id <IDSPersistentMapPersister> _persister;	// 80 = 0x50
    NSSet *_decodableClasses;	// 88 = 0x58
    NSMutableDictionary *_cachedMap;	// 96 = 0x60
    unsigned long long _mergePolicyType;	// 104 = 0x68
    IDSPersistentMapMergePolicy *_mergePolicy;	// 112 = 0x70
}

+ (id)defaultPersisterForIdentifier:(id)arg1 dataProtectionClass:(long long)arg2;	// IMP=0x0000000100108bec
- (void).cxx_destruct;	// IMP=0x000000010010d33c
@property(retain, nonatomic) IDSPersistentMapMergePolicy *mergePolicy; // @synthesize mergePolicy=_mergePolicy;
@property(nonatomic) unsigned long long mergePolicyType; // @synthesize mergePolicyType=_mergePolicyType;
@property(readonly, nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(readonly, nonatomic) NSMutableDictionary *cachedMap; // @synthesize cachedMap=_cachedMap;
@property(retain, nonatomic) NSSet *decodableClasses; // @synthesize decodableClasses=_decodableClasses;
@property(retain, nonatomic) id <IDSPersistentMapPersister> persister; // @synthesize persister=_persister;
@property(copy, nonatomic) CDUnknownBlockType migrationBlock; // @synthesize migrationBlock=_migrationBlock;
@property(nonatomic) double writeCoalescingLeeway; // @synthesize writeCoalescingLeeway=_writeCoalescingLeeway;
@property(nonatomic) double writeCoalescingDelay; // @synthesize writeCoalescingDelay=_writeCoalescingDelay;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *saveTimer; // @synthesize saveTimer=_saveTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialPersistQueue; // @synthesize serialPersistQueue=_serialPersistQueue;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) long long versionNumber; // @synthesize versionNumber=_versionNumber;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <IDSPersistentMapDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_performLockedBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010010cef8
- (long long)_versionNumberForPersistedMap:(id)arg1;	// IMP=0x000000010010ce18
- (id)_mapByStrippingMetadataFromMap:(id)arg1;	// IMP=0x000000010010cda0
- (id)_mapByAddingMetadataToMap:(id)arg1;	// IMP=0x000000010010cc98
- (id)_timerIdentifierFromBaseIdentifier:(id)arg1;	// IMP=0x000000010010cc10
- (id)_encodeMap:(id)arg1;	// IMP=0x000000010010c948
- (id)_decodeMapData:(id)arg1;	// IMP=0x000000010010c598
- (void)_save;	// IMP=0x000000010010bc74
- (void)delayedSave;	// IMP=0x000000010010b84c
- (void)persistImmediately;	// IMP=0x000000010010b3ac
- (_Bool)loadAndCheckStatus;	// IMP=0x000000010010a900
- (id)copyDictionaryRepresentation;	// IMP=0x000000010010a75c
- (void)removeAllObjects;	// IMP=0x000000010010a688
- (id)allValues;	// IMP=0x000000010010a4dc
- (id)allKeys;	// IMP=0x000000010010a330
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x000000010010a264
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000010010a1f0
- (void)_performCacheReadingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010010a0b4
- (void)_performCacheModifyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100109d68
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000100109c0c
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100109a44
- (id)objectForKey:(id)arg1;	// IMP=0x0000000100109844
- (id)debugDescription;	// IMP=0x000000010010957c
- (id)initWithIdentifier:(id)arg1 versionNumber:(long long)arg2 decodableClasses:(id)arg3 mergePolicy:(id)arg4 writeCoalescingDelay:(double)arg5 writeCoalescingLeeway:(double)arg6 persister:(id)arg7 migrationBlock:(CDUnknownBlockType)arg8;	// IMP=0x0000000100109144
- (id)initWithIdentifier:(id)arg1 versionNumber:(long long)arg2 decodableClasses:(id)arg3 dataProtectionClass:(long long)arg4 mergePolicy:(id)arg5 migrationBlock:(CDUnknownBlockType)arg6;	// IMP=0x0000000100108fc4
- (id)initWithIdentifier:(id)arg1 versionNumber:(long long)arg2 decodableClasses:(id)arg3 migrationBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100108ec4
- (id)init;	// IMP=0x0000000100108da4

@end
