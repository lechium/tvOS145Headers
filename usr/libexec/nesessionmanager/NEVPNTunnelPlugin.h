//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NEPlugin.h"

#import "NEVPNPluginManager-Protocol.h"

@interface NEVPNTunnelPlugin : NEPlugin <NEVPNPluginManager>
{
    long long _pluginStatus;	// 64 = 0x40
}

@property(readonly) long long pluginStatus; // @synthesize pluginStatus=_pluginStatus;
- (id)managerInterface;	// IMP=0x0000000100015f98
- (id)remotePluginInterface;	// IMP=0x0000000100015f7c
- (void)setTunnelNetworkSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100015d1c
- (void)setStatus:(long long)arg1 error:(id)arg2;	// IMP=0x0000000100015bd4
- (void)handleIPCDetached;	// IMP=0x0000000100015b0c
- (void)createVirtualInterfaceOfType:(long long)arg1 maxPendingPackets:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001599c
- (void)setAppUUIDMap:(id)arg1;	// IMP=0x0000000100015880
- (void)attachIPC;	// IMP=0x0000000100015550
- (void)disconnectWithReason:(int)arg1;	// IMP=0x0000000100015508
- (void)startTunnelWithParameters:(id)arg1;	// IMP=0x000000010001548c
- (void)handlePluginFailedWithError:(id)arg1;	// IMP=0x000000010001540c
- (id)initWithAgent:(id)arg1 delegateQueue:(id)arg2 andDelegate:(id)arg3;	// IMP=0x00000001000153c8

@end

