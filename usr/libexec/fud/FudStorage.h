//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

__attribute__((visibility("hidden")))
@interface FudStorage : NSObject <NSSecureCoding>
{
    int storageVersion;	// 8 = 0x8
    NSString *storageFile;	// 16 = 0x10
    NSString *storageRoot;	// 24 = 0x18
    NSMutableDictionary *pluginToPolicy;	// 32 = 0x20
    NSMutableDictionary *pluginToClients;	// 40 = 0x28
    NSMutableDictionary *filterToStorageItem;	// 48 = 0x30
    NSRecursiveLock *lock;	// 56 = 0x38
    _Bool isNewStorage;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010001a50c
+ (_Bool)deleteStorageAtPath:(id)arg1;	// IMP=0x000000010001a450
+ (id)storageWithFile:(id)arg1;	// IMP=0x0000000100016cc0
@property(readonly) _Bool isNewStorage; // @synthesize isNewStorage;
@property(readonly) NSMutableDictionary *pluginToPolicy; // @synthesize pluginToPolicy;
@property(retain) NSString *storageFile; // @synthesize storageFile;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010001a7cc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010001a514
- (id)getObjectFromFile:(id)arg1;	// IMP=0x000000010001a1b0
- (_Bool)loadAllPluginData;	// IMP=0x0000000100019f60
- (_Bool)saveObject:(id)arg1 toFile:(id)arg2 needSecureCoding:(_Bool)arg3;	// IMP=0x0000000100019e24
- (_Bool)saveDataForPlugin:(id)arg1 filter:(id)arg2;	// IMP=0x0000000100019c44
- (_Bool)saveAllPluginData;	// IMP=0x00000001000199bc
- (_Bool)saveFudData;	// IMP=0x0000000100019944
- (_Bool)save;	// IMP=0x00000001000198dc
- (_Bool)setPluginInstance:(id)arg1 withVersion:(id)arg2 pluginName:(id)arg3 filterName:(id)arg4;	// IMP=0x0000000100019810
- (id)getPluginInstanceWithName:(id)arg1 filterName:(id)arg2;	// IMP=0x0000000100019590
- (id)getHistoryForPlugin:(id)arg1 filterName:(id)arg2;	// IMP=0x00000001000194d4
- (_Bool)removeStateMachineForFilterName:(id)arg1;	// IMP=0x0000000100019400
- (id)getFiltersInExclusionGroup:(id)arg1;	// IMP=0x00000001000191bc
- (id)getStateMachineForFilterName:(id)arg1;	// IMP=0x00000001000190ec
- (_Bool)setStateMachine:(id)arg1 forPlugin:(id)arg2 forFilter:(id)arg3;	// IMP=0x0000000100018fa4
- (_Bool)isPluginTracked:(id)arg1;	// IMP=0x0000000100018f44
- (id)getClientWithName:(id)arg1;	// IMP=0x0000000100018d30
- (_Bool)unregisterClient:(id)arg1 fromPlugin:(id)arg2;	// IMP=0x0000000100018b94
- (_Bool)unregisterClientFromAllPlugins:(id)arg1;	// IMP=0x0000000100018844
- (_Bool)registerClient:(id)arg1 withGroup:(id)arg2;	// IMP=0x000000010001867c
- (_Bool)registerClient:(id)arg1 withPlugin:(id)arg2;	// IMP=0x0000000100018404
- (id)getRegisteredClientsForPlugin:(id)arg1;	// IMP=0x0000000100018390
- (_Bool)unregisterAllClients;	// IMP=0x0000000100018320
- (_Bool)setContext:(id)arg1 forPluginName:(id)arg2 filter:(id)arg3;	// IMP=0x0000000100018274
- (id)getContextForPlugin:(id)arg1 filter:(id)arg2;	// IMP=0x00000001000181d0
- (_Bool)setStorageItem:(id)arg1 forPlugin:(id)arg2 filter:(id)arg3;	// IMP=0x0000000100018104
- (id)getStorageItemForPlugin:(id)arg1 filter:(id)arg2;	// IMP=0x0000000100018054
- (_Bool)isAnyStateMachineActive;	// IMP=0x0000000100017e24
- (_Bool)isAnyStateMachineActiveForPlugin:(id)arg1;	// IMP=0x0000000100017bb0
- (id)getPolicyForFilterName:(id)arg1;	// IMP=0x0000000100017984
- (id)getPolicyForPlugin:(id)arg1;	// IMP=0x0000000100017910
- (void)dealloc;	// IMP=0x0000000100017894
- (void)setPoliciesWithArray:(id)arg1;	// IMP=0x00000001000174c4
- (void)addPolicy:(id)arg1;	// IMP=0x00000001000171ac
- (id)initWithStorageFile:(id)arg1;	// IMP=0x00000001000170b4

@end

