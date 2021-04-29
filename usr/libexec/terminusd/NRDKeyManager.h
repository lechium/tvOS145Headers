//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface NRDKeyManager : NSObject
{
    unsigned char _currentDataProtectionClass;	// 8 = 0x8
    _Bool _wasUnlockedOnce;	// 9 = 0x9
    _Bool _hasCheckedUnlockOnce;	// 10 = 0xa
    int _lockStateNotifyToken;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CDUnknownBlockType _idsKeyManagerUpdateBlock;	// 24 = 0x18
    CDUnknownBlockType _localDeviceClassCUnlockedBlock;	// 32 = 0x20
    NSMutableArray *_classCUnlockedBlocks;	// 40 = 0x28
    NSMutableArray *_classAUnlockedBlocks;	// 48 = 0x30
}

+ (id)copySharedKeyManager;	// IMP=0x00000001000be6c0
- (void).cxx_destruct;	// IMP=0x00000001000be610
@property(retain, nonatomic) NSMutableArray *classAUnlockedBlocks; // @synthesize classAUnlockedBlocks=_classAUnlockedBlocks;
@property(retain, nonatomic) NSMutableArray *classCUnlockedBlocks; // @synthesize classCUnlockedBlocks=_classCUnlockedBlocks;
@property(copy, nonatomic) CDUnknownBlockType localDeviceClassCUnlockedBlock; // @synthesize localDeviceClassCUnlockedBlock=_localDeviceClassCUnlockedBlock;
@property(copy, nonatomic) CDUnknownBlockType idsKeyManagerUpdateBlock; // @synthesize idsKeyManagerUpdateBlock=_idsKeyManagerUpdateBlock;
@property(nonatomic) _Bool hasCheckedUnlockOnce; // @synthesize hasCheckedUnlockOnce=_hasCheckedUnlockOnce;
@property(nonatomic) _Bool wasUnlockedOnce; // @synthesize wasUnlockedOnce=_wasUnlockedOnce;
@property(nonatomic) unsigned char currentDataProtectionClass; // @synthesize currentDataProtectionClass=_currentDataProtectionClass;
@property(nonatomic) int lockStateNotifyToken; // @synthesize lockStateNotifyToken=_lockStateNotifyToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)reportEvent:(int)arg1;	// IMP=0x00000001000be55c
- (void)reportEvent:(int)arg1 detailsFormat:(id)arg2;	// IMP=0x00000001000be4c8
- (void)reportEvent:(int)arg1 details:(id)arg2;	// IMP=0x00000001000be4b4
- (id)copyStatusString;	// IMP=0x00000001000be414
- (id)readNRUUIDDictionaryOfClass:(Class)arg1 fromKeychainWithName:(id)arg2 dataProtectionClass:(unsigned char)arg3;	// IMP=0x00000001000bdf04
- (void)saveNRUUIDDictionary:(id)arg1 toKeychainWithName:(id)arg2 dataProtectionClass:(unsigned char)arg3 retryBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000bddc4
- (_Bool)saveNRUUIDDictionary:(id)arg1 toKeychainWithName:(id)arg2 dataProtectionClass:(unsigned char)arg3;	// IMP=0x00000001000bdcb4
- (_Bool)_saveNRUUIDDictionary:(id)arg1 toKeychainWithName:(id)arg2 dataProtectionClass:(unsigned char)arg3 retryBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000bd96c
- (id)readFromKeychainWithName:(id)arg1 keychainLocked:(_Bool *)arg2 dataProtectionClass:(unsigned char)arg3;	// IMP=0x00000001000bd5b0
- (_Bool)saveData:(id)arg1 toKeychainWithName:(id)arg2 dataProtectionClass:(unsigned char)arg3 keychainLocked:(_Bool *)arg4;	// IMP=0x00000001000bcf54
- (void)stopWatchingLockStateIfThereAreNoClients;	// IMP=0x00000001000bcf2c
- (void)stopWatchingLockState;	// IMP=0x00000001000bce7c
- (void)startWatchingLockState;	// IMP=0x00000001000bcd18
- (void)handleLockStateChange;	// IMP=0x00000001000bca4c
- (void)checkIfDeviceHasBeenUnlockedOnceSinceBoot;	// IMP=0x00000001000bc90c
- (void)reportDataProtectionClassChange;	// IMP=0x00000001000bc61c
- (void)runAfterNextClassAUnlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bc468
- (void)runAfterClassAUnlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bc39c
- (void)runForLocalDeviceAfterClassCUnlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bc208
- (void)runAfterClassCUnlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bc030
@property(readonly, nonatomic) _Bool isClassAUnlocked;
@property(readonly, nonatomic) _Bool isClassCUnlocked;
- (void)unregisterForIDSKeyManagerUpdates;	// IMP=0x00000001000bbee8
- (void)registerForIDSKeyManagerUpdates:(CDUnknownBlockType)arg1;	// IMP=0x00000001000bbe00
- (id)initInternal;	// IMP=0x00000001000bbcac

@end
