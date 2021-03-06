//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVServices/TVSPeripheralManager.h>

#import "CBPairingAgentDelegate-Protocol.h"

@class NSString;

@interface TVPABluetoothRemotePairingManager : TVSPeripheralManager <CBPairingAgentDelegate>
{
}

+ (id)sharedInstance;	// IMP=0x0000000100007414
- (void)pairingAgent:(id)arg1 peerDidRequestPairing:(id)arg2 type:(long long)arg3 passkey:(id)arg4;	// IMP=0x0000000100007480

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

