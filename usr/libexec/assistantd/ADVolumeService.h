//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADAVSystemControllerLifecycleObserver-Protocol.h"
#import "AFInvalidating-Protocol.h"

@class AFClientConfiguration, AFInstanceContext, CSSpeechController, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ADVolumeService : NSObject <ADAVSystemControllerLifecycleObserver, AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
    CSSpeechController *_speechController;	// 24 = 0x18
    AFClientConfiguration *_clientConfiguration;	// 32 = 0x20
    _Bool _isSmartSiriVolumeAvailable;	// 40 = 0x28
    NSMutableDictionary *_volumesByCategory;	// 48 = 0x30
    float _smartSiriVolume;	// 56 = 0x38
    _Bool _needsUpdateSiriVolume;	// 60 = 0x3c
    unsigned long long _lastSiriVolumeUpdateTimestamp;	// 64 = 0x40
    NSMutableSet *_pendingBlocks;	// 72 = 0x48
    float _deviceSetupFlowSiriVolume;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001002af128
- (void)_updateSiriVolume:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002ae660
- (void)_updateSiriVolumeIfNeeded;	// IMP=0x00000001002ae588
- (void)_setNeedsUpdateSiriVolume;	// IMP=0x00000001002ae464
- (void)_fetchSmartSiriVolume;	// IMP=0x00000001002ae384
- (void)_handleSystemVolumeChangeForCategory:(id)arg1 volume:(float)arg2 audioCategory:(id)arg3 reason:(id)arg4;	// IMP=0x00000001002ae124
- (void)systemVolumeChanged:(id)arg1;	// IMP=0x00000001002adb40
- (_Bool)_updateSystemVolumeForCategory:(id)arg1 audioRoute:(id)arg2 usingSystemController:(id)arg3 volume:(float)arg4 operationType:(long long)arg5;	// IMP=0x00000001002ad548
- (_Bool)_fetchSystemVolumeForCategory:(id)arg1 audioRoute:(id)arg2 usingSystemController:(id)arg3 volume:(float *)arg4;	// IMP=0x00000001002ad000
- (void)_fetchSystemVolumesUsingSystemController:(id)arg1;	// IMP=0x00000001002acde8
- (void)_fetchSystemVolumes;	// IMP=0x00000001002acbec
- (void)_stopObservingSystemVolumes;	// IMP=0x00000001002acb8c
- (void)_startObservingSystemVolumes;	// IMP=0x00000001002acb18
- (void)_stopObservingSystemControllerLifecycle;	// IMP=0x00000001002acac8
- (void)_startObservingSystemControllerLifecycle;	// IMP=0x00000001002aca6c
- (void)adAVSystemControllerDidChange:(id)arg1;	// IMP=0x00000001002ac9a4
- (void)invalidate;	// IMP=0x00000001002ac8d8
- (void)setSiriOutputVolume:(float)arg1 forAudioRoute:(id)arg2 operationType:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001002ac348
- (void)getSiriOutputVolumeForAudioRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002abe5c
- (void)setClientConfiguration:(id)arg1;	// IMP=0x00000001002abcf8
- (void)waitUntilSiriOutputVolumeUpdatesAfterTimestamp:(unsigned long long)arg1 withTimeout:(double)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000001002aba28
- (void)updateSiriOutputVolume:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002ab928
- (void)fetchSmartSiriVolume;	// IMP=0x00000001002ab7f4
- (id)initWithQueue:(id)arg1 instanceContext:(id)arg2 speechController:(id)arg3;	// IMP=0x00000001002ab530

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

