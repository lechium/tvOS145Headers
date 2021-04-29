//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCOOBBTPairingXPCServerProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface ACCOOBBTPairingServerRemote : NSObject <ACCOOBBTPairingXPCServerProtocol>
{
    NSXPCConnection *_XPCConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000593b8
@property(readonly, nonatomic) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
- (void)requestLegacyConnectionIDForAccessoryUID:(id)arg1;	// IMP=0x00000001000593a8
- (void)linkKeyInfo:(id)arg1 oobBtPairingUID:(id)arg2 linkKey:(id)arg3 deviceMacAddr:(id)arg4;	// IMP=0x0000000100059154
- (void)stopOOBBTPairing:(id)arg1;	// IMP=0x0000000100058fe0
- (void)startOOBBTPairing:(id)arg1;	// IMP=0x0000000100058e6c
- (void)notifyOfProvider:(id)arg1;	// IMP=0x0000000100058d48
- (void)initConnection:(CDUnknownBlockType)arg1;	// IMP=0x0000000100058abc
- (void)dealloc;	// IMP=0x0000000100058a70
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00000001000588fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
