//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

#import "FBSceneManagerObserver-Protocol.h"
#import "FBSceneObserver-Protocol.h"

@class BSWatchdog, FBScene, NSString;

@interface PBWaitForDefaultKioskSceneTransaction : BSTransaction <FBSceneObserver, FBSceneManagerObserver>
{
    NSString *_targetSceneIdentifier;	// 8 = 0x8
    BSWatchdog *_watchdog;	// 16 = 0x10
    FBScene *_defaultKioskScene;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100087aec
@property(retain, nonatomic) FBScene *defaultKioskScene; // @synthesize defaultKioskScene=_defaultKioskScene;
@property(readonly, nonatomic) BSWatchdog *watchdog; // @synthesize watchdog=_watchdog;
@property(retain, nonatomic) NSString *targetSceneIdentifier; // @synthesize targetSceneIdentifier=_targetSceneIdentifier;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;	// IMP=0x0000000100087974
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;	// IMP=0x00000001000878a8
- (void)sceneContentStateDidChange:(id)arg1;	// IMP=0x0000000100087838
- (void)_didComplete;	// IMP=0x00000001000877d4
- (void)_begin;	// IMP=0x0000000100087580
- (_Bool)_canBeInterrupted;	// IMP=0x0000000100087564
@property(readonly, nonatomic) FBScene *readyDefaultKioskScene;
- (void)dealloc;	// IMP=0x0000000100087358
- (id)init;	// IMP=0x0000000100087160

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

