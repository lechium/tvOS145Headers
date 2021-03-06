//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface VSAudioSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _audioSessionIsSetUp;	// 16 = 0x10
    CDStruct_a87a0d46 _desiredState;	// 24 = 0x18
    CDStruct_a87a0d46 _cachedState;	// 40 = 0x28
    _Bool _bluetoothAllowed;	// 56 = 0x38
    struct __CFBag *_activityBag;	// 64 = 0x40
    long long _serverGeneration;	// 72 = 0x48
}

+ (long long)_VSAudioCategoryForActivity:(long long)arg1;	// IMP=0x00000001000160dc
+ (id)sharedInstance;	// IMP=0x0000000100015ba0
- (void).cxx_destruct;	// IMP=0x0000000100016ae0
- (void)_safeSetBluetoothInputAllowed:(_Bool)arg1;	// IMP=0x0000000100016928
- (void)_safeSetActive:(_Bool)arg1 withActivity:(long long)arg2;	// IMP=0x0000000100016694
- (void)_safeSetCategoryForActivity:(long long)arg1;	// IMP=0x0000000100016628
- (long long)_safeServerGeneration;	// IMP=0x0000000100016524
- (void)_safeSetupAudioSession;	// IMP=0x00000001000164bc
- (long long)_nextActivityForActive:(_Bool)arg1 activity:(long long)arg2 serverActivity:(long long)arg3;	// IMP=0x0000000100016340
- (void)_setCategoryForActivity:(long long)arg1;	// IMP=0x00000001000160f0
- (void)_setupAudioSession;	// IMP=0x0000000100015fd8
- (void)_mediaServicesWereReset:(id)arg1;	// IMP=0x0000000100015f00
- (void)_audioSessionInterrupted:(id)arg1;	// IMP=0x0000000100015d88
- (void)dealloc;	// IMP=0x0000000100015d04
- (id)init;	// IMP=0x0000000100015c0c

@end

