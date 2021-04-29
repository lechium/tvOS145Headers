//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBSystemOverlayControllerDelegate-Protocol.h"
#import "PBSystemUIManaging-Protocol.h"

@class NSHashTable, NSMutableArray, NSMutableDictionary, NSString, PBSystemOverlayController;

@interface PBDialogManager : NSObject <PBSystemOverlayControllerDelegate, PBSystemUIManaging, PBInstanceDependable>
{
    struct os_unfair_lock_s _observersLock;	// 8 = 0x8
    PBSystemOverlayController *_overlayController;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    NSMutableDictionary *_identifiersToContexts;	// 32 = 0x20
    NSMutableArray *_hiddenDialogAssertions;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00000001000bcc68
+ (id)dependencyDescription;	// IMP=0x00000001000bcadc
- (void).cxx_destruct;	// IMP=0x00000001000bea30
@property(readonly, nonatomic) NSMutableArray *hiddenDialogAssertions; // @synthesize hiddenDialogAssertions=_hiddenDialogAssertions;
@property(readonly, nonatomic) NSMutableDictionary *identifiersToContexts; // @synthesize identifiersToContexts=_identifiersToContexts;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (void)_deregisterDialogHiddenAssertion:(id)arg1;	// IMP=0x00000001000be84c
- (void)_registerDialogHiddenAssertion:(id)arg1;	// IMP=0x00000001000be668
- (void)overlayController:(id)arg1 didCancelSession:(id)arg2 withContext:(id)arg3;	// IMP=0x00000001000be3c4
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x00000001000be2c0
- (void)overlayController:(id)arg1 willDismissSession:(id)arg2 withContext:(id)arg3;	// IMP=0x00000001000be038
- (void)overlayController:(id)arg1 didPresentSession:(id)arg2;	// IMP=0x00000001000bdfc4
- (void)overlayController:(id)arg1 willPresentSession:(id)arg2;	// IMP=0x00000001000bdd60
- (void)removeObserver:(id)arg1;	// IMP=0x00000001000bdce4
- (void)addObserver:(id)arg1;	// IMP=0x00000001000bdc68
- (_Bool)dismissActiveDialogAnimated:(_Bool)arg1;	// IMP=0x00000001000bdb28
- (_Bool)dismissActiveDialog;	// IMP=0x00000001000bdaec
- (void)dismissDialogWithContext:(id)arg1 options:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000bd8bc
- (void)dismissDialogWithContext:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000bd7fc
- (void)presentDialogWithContext:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000bd07c
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (id)init;	// IMP=0x00000001000bcd64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

