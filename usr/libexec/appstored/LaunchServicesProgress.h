//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"
#import "LibraryProgress-Protocol.h"

@class NSString, ProgressCache;

@interface LaunchServicesProgress : NSObject <LSApplicationWorkspaceObserverProtocol, LibraryProgress>
{
    ProgressCache *_progressCache;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000735f0
- (void).cxx_destruct;	// IMP=0x0000000100074604
- (id)_updatePhaseForJobWithBundleID:(id)arg1 phase:(long long)arg2;	// IMP=0x0000000100074260
- (id)_predicateForBundleID:(id)arg1 toUpdateToPhase:(long long)arg2;	// IMP=0x00000001000740f8
- (_Bool)observeLaunchProhibitedApps;	// IMP=0x00000001000740f0
- (void)applicationInstallsDidChange:(id)arg1;	// IMP=0x0000000100073f24
- (void)resumeApp:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100073d10
- (void)pauseApp:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100073afc
- (void)cancelApp:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000738e8
- (void)cancelApp:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000737cc
- (id)_initWithProgressCache:(id)arg1;	// IMP=0x000000010007371c
- (void)dealloc;	// IMP=0x00000001000736a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
