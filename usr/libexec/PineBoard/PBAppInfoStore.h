//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSApplicationPlaceholderObserver-Protocol.h"
#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"

@class FBSALOToken, FBSApplicationLibrary, NSDictionary, NSMapTable, NSString, PBAppInfoConfiguration;
@protocol OS_dispatch_queue, PBAppInfoStoreDynamicStateDataSource, PBAppInfoStorePolicyProviding;

@interface PBAppInfoStore : NSObject <FBSApplicationPlaceholderObserver, LSApplicationWorkspaceObserverProtocol>
{
    FBSApplicationLibrary *_appLibrary;	// 8 = 0x8
    id <PBAppInfoStorePolicyProviding> _policy;	// 16 = 0x10
    id <PBAppInfoStoreDynamicStateDataSource> _dynamicStateDataSource;	// 24 = 0x18
    FBSALOToken *_addApplicationObserverToken;	// 32 = 0x20
    FBSALOToken *_removeApplicationObserverToken;	// 40 = 0x28
    FBSALOToken *_replaceApplicationObserverToken;	// 48 = 0x30
    FBSALOToken *_demoteApplicationObserverToken;	// 56 = 0x38
    FBSALOToken *_addPlaceholderObserverToken;	// 64 = 0x40
    FBSALOToken *_cancelPlaceholderObserverToken;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_barrierQueue;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_workQueue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_observerQueue;	// 96 = 0x60
    NSMapTable *_tokensToObservers;	// 104 = 0x68
    NSDictionary *_queue_appInfos;	// 112 = 0x70
    NSDictionary *_queue_applicationInfos;	// 120 = 0x78
    NSDictionary *_queue_placeholders;	// 128 = 0x80
    PBAppInfoConfiguration *_queue_configuration;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000100029e88
@property(readonly, nonatomic) PBAppInfoConfiguration *queue_configuration; // @synthesize queue_configuration=_queue_configuration;
@property(readonly, nonatomic) NSDictionary *queue_placeholders; // @synthesize queue_placeholders=_queue_placeholders;
@property(readonly, nonatomic) NSDictionary *queue_applicationInfos; // @synthesize queue_applicationInfos=_queue_applicationInfos;
@property(readonly, nonatomic) NSDictionary *queue_appInfos; // @synthesize queue_appInfos=_queue_appInfos;
@property(readonly, nonatomic) NSMapTable *tokensToObservers; // @synthesize tokensToObservers=_tokensToObservers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *barrierQueue; // @synthesize barrierQueue=_barrierQueue;
@property(readonly, nonatomic) FBSALOToken *cancelPlaceholderObserverToken; // @synthesize cancelPlaceholderObserverToken=_cancelPlaceholderObserverToken;
@property(readonly, nonatomic) FBSALOToken *addPlaceholderObserverToken; // @synthesize addPlaceholderObserverToken=_addPlaceholderObserverToken;
@property(readonly, nonatomic) FBSALOToken *demoteApplicationObserverToken; // @synthesize demoteApplicationObserverToken=_demoteApplicationObserverToken;
@property(readonly, nonatomic) FBSALOToken *replaceApplicationObserverToken; // @synthesize replaceApplicationObserverToken=_replaceApplicationObserverToken;
@property(readonly, nonatomic) FBSALOToken *removeApplicationObserverToken; // @synthesize removeApplicationObserverToken=_removeApplicationObserverToken;
@property(readonly, nonatomic) FBSALOToken *addApplicationObserverToken; // @synthesize addApplicationObserverToken=_addApplicationObserverToken;
@property(readonly, nonatomic) id <PBAppInfoStoreDynamicStateDataSource> dynamicStateDataSource; // @synthesize dynamicStateDataSource=_dynamicStateDataSource;
@property(readonly, nonatomic) id <PBAppInfoStorePolicyProviding> policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) FBSApplicationLibrary *appLibrary; // @synthesize appLibrary=_appLibrary;
- (id)_appInfoWithUpdatedPolicy:(_Bool)arg1 updatedState:(_Bool)arg2 sourceAppInfo:(id)arg3 applicationInfo:(id)arg4;	// IMP=0x00000001000295e4
- (id)_appInfoWithUpdatedPolicy:(_Bool)arg1 updatedState:(_Bool)arg2 sourceAppInfo:(id)arg3 placeholder:(id)arg4;	// IMP=0x00000001000292d4
- (void)queue_processUpdates:(id)arg1;	// IMP=0x0000000100027530
- (void)_extraMultiUserApplicationsDidChange;	// IMP=0x0000000100027184
- (void)languageDidChange;	// IMP=0x0000000100026db4
- (void)applicationIconDidChange:(id)arg1;	// IMP=0x00000001000269f0
- (void)placeholderDidChangeSignificantly:(id)arg1;	// IMP=0x0000000100026860
- (void)placeholderProgressDidUpdate:(id)arg1;	// IMP=0x00000001000266d0
- (void)handleDynamicStateChanged:(id)arg1;	// IMP=0x0000000100026638
- (void)handlePolicyChanged:(id)arg1;	// IMP=0x00000001000265a0
- (id)appInfoControllerWithEnabledApps;	// IMP=0x0000000100026504
- (id)appInfoControllerWithEnabledAndVisibleApps;	// IMP=0x0000000100026468
- (id)appInfoControllerWithEnabledAndVisibleAppsAndPlaceholders;	// IMP=0x00000001000263cc
- (id)appInfoControllerWithEverything;	// IMP=0x0000000100026380
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100026290
- (void)_enqueueUpdate:(id)arg1;	// IMP=0x00000001000260d0
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100025fa8
- (id)addObserver:(id)arg1;	// IMP=0x0000000100025cf8
- (id)configuration;	// IMP=0x0000000100025ba4
- (id)appInfos;	// IMP=0x0000000100025954
- (void)dealloc;	// IMP=0x0000000100025624
- (id)initWithApplicationLibrary:(id)arg1 policy:(id)arg2 dynamicStateDataSource:(id)arg3;	// IMP=0x0000000100024348

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
