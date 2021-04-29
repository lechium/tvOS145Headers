//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UARPAssetManager;
@protocol OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface UARPMobileAssetManager : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    UARPAssetManager *_assetManager;	// 16 = 0x10
    _Bool _uarpDownloadOnCellularAllowed;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 40 = 0x28
}

@property(readonly) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property _Bool uarpDownloadOnCellularAllowed; // @synthesize uarpDownloadOnCellularAllowed=_uarpDownloadOnCellularAllowed;
- (long long)downloadFirmwareForAccessory:(id)arg1;	// IMP=0x000000010002be3c
- (long long)performRemoteUpdateCheckForAccessory:(id)arg1;	// IMP=0x000000010002be30
- (_Bool)isRoamingEnabled;	// IMP=0x000000010002be24
- (void)dealloc;	// IMP=0x000000010002bdd4
- (id)initWithManager:(id)arg1 queue:(id)arg2;	// IMP=0x000000010002bd4c
- (id)getAssetVersionForMAAsset:(id)arg1;	// IMP=0x0000000100032fac
- (void)handleMobileAssetDownloadCompletion:(long long)arg1 forAccessory:(id)arg2;	// IMP=0x0000000100032b90
- (long long)downloadRemoteFirmwareForAccessory:(id)arg1;	// IMP=0x0000000100032994
- (id)assetWithMaxVersion:(id)arg1;	// IMP=0x00000001000327f8
- (id)filterNewAssetsForAccessory:(id)arg1;	// IMP=0x0000000100032520
- (void)handleMobileAssetQueryCompletion:(long long)arg1 forAccessory:(id)arg2;	// IMP=0x0000000100032044
- (long long)performRemoteQueryForAccessory:(id)arg1;	// IMP=0x0000000100031a24
- (_Bool)performIsRoamingEnabledCheck;	// IMP=0x00000001000318f0

@end
