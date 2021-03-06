//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPassUpgradeControllerBase.h>

#import "PDNFSecureXPCSecureElementEventObserver-Protocol.h"

@class NSString;

@interface PDPassUpgradeController : PKPassUpgradeControllerBase <PDNFSecureXPCSecureElementEventObserver>
{
}

- (void)secureElementDidRunScriptsFromTSM;	// IMP=0x0000000100128d80
- (void)requestPassUpgrade:(id)arg1 pass:(id)arg2 diagnosticReason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001287c8
- (void)dealloc;	// IMP=0x0000000100128784
- (id)initWithWebService:(id)arg1 cardFileManager:(id)arg2;	// IMP=0x000000010012853c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

