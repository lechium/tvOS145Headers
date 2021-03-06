//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSceneManagerObserver-Protocol.h"

@class NSMutableDictionary, NSString;

@interface PBAuxiliarySceneManager : NSObject <FBSceneManagerObserver>
{
    NSMutableDictionary *_presenters;	// 8 = 0x8
    NSMutableDictionary *_trackedSceneIdentifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100104adc
@property(retain, nonatomic) NSMutableDictionary *trackedSceneIdentifiers; // @synthesize trackedSceneIdentifiers=_trackedSceneIdentifiers;
@property(retain, nonatomic) NSMutableDictionary *presenters; // @synthesize presenters=_presenters;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;	// IMP=0x00000001001048a0
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;	// IMP=0x00000001001045b4
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;	// IMP=0x00000001001042a4
- (void)destroyScenesWithPersistentIdentifiers:(id)arg1 forProcess:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001035b0
- (_Bool)createdSceneForProcess:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100102134
- (void)registerPresenter:(id)arg1 forActivityType:(id)arg2;	// IMP=0x00000001001020a4
- (void)dealloc;	// IMP=0x0000000100102024
- (id)init;	// IMP=0x0000000100101f04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

