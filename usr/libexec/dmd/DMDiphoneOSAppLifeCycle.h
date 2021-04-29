//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDAppLifeCycle.h"

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"

@class NSProgress, NSString;

@interface DMDiphoneOSAppLifeCycle : DMDAppLifeCycle <LSApplicationWorkspaceObserverProtocol>
{
    NSProgress *_proxyProgress;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000207d4
@property(retain, nonatomic) NSProgress *proxyProgress; // @synthesize proxyProgress=_proxyProgress;
- (void)_findProxyInProxies:(id)arg1 andCallBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010002057c
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x00000001000204c0
- (void)applicationsDidFailToUninstall:(id)arg1;	// IMP=0x000000010002041c
- (void)applicationsWillUninstall:(id)arg1;	// IMP=0x000000010002036c
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0000000100020254
- (void)applicationsDidFailToInstall:(id)arg1;	// IMP=0x000000010002015c
- (void)applicationInstallsDidCancel:(id)arg1;	// IMP=0x00000001000200a0
- (void)applicationInstallsDidResume:(id)arg1;	// IMP=0x000000010001ffe4
- (void)applicationInstallsDidPause:(id)arg1;	// IMP=0x000000010001ff28
- (void)applicationInstallsDidChange:(id)arg1;	// IMP=0x000000010001fe6c
- (void)applicationInstallsDidStart:(id)arg1;	// IMP=0x000000010001fce0
- (void)applicationsWillInstall:(id)arg1;	// IMP=0x000000010001fc18
- (id)progress;	// IMP=0x000000010001fc0c
- (void)dealloc;	// IMP=0x000000010001fb94
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x000000010001f670

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
