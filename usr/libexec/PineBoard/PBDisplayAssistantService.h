//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBDialogManagerObserver-Protocol.h"
#import "PBInstanceDependable-Protocol.h"
#import "PBSDisplayStateObserver-Protocol.h"

@class NSString, PBDisplayManager, _PBPresentedAssistantContext;

@interface PBDisplayAssistantService : NSObject <PBDialogManagerObserver, PBSDisplayStateObserver, PBInstanceDependable>
{
    _Bool _isMonitoring;	// 8 = 0x8
    PBDisplayManager *_displayManager;	// 16 = 0x10
    _PBPresentedAssistantContext *_shownAssistantContext;	// 24 = 0x18
    NSString *_lastSeenDisplayID;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000100184824
+ (id)dependencyDescription;	// IMP=0x0000000100184664
- (void).cxx_destruct;	// IMP=0x000000010018665c
@property(copy, nonatomic) NSString *lastSeenDisplayID; // @synthesize lastSeenDisplayID=_lastSeenDisplayID;
@property(nonatomic) _Bool isMonitoring; // @synthesize isMonitoring=_isMonitoring;
@property(retain, nonatomic) _PBPresentedAssistantContext *shownAssistantContext; // @synthesize shownAssistantContext=_shownAssistantContext;
@property(retain, nonatomic) PBDisplayManager *displayManager; // @synthesize displayManager=_displayManager;
- (void)dialogManager:(id)arg1 willDismissDialogWithContext:(id)arg2 dismissalContext:(id)arg3;	// IMP=0x00000001001863e4
- (void)displayState:(id)arg1 didChangeWithConnection:(long long)arg2;	// IMP=0x0000000100186318
- (void)presentDisplayAssistantWithRequest:(id)arg1 dismissCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100185a8c
- (void)presentUpgradeAssistantIfNeeded;	// IMP=0x00000001001852f0
- (void)_cleanupForDismissalWithError:(id)arg1;	// IMP=0x0000000100184fe0
- (void)_dismissDisplayAssistantIfNeedWithError:(id)arg1;	// IMP=0x0000000100184d58
- (void)startDisplayAssistantMonitoring;	// IMP=0x0000000100184d10
- (double)_cableAlertInterval;	// IMP=0x0000000100184c3c
- (void)dealloc;	// IMP=0x0000000100184ba4
- (id)init;	// IMP=0x0000000100184920

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
