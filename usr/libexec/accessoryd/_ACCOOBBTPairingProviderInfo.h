//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCOOBBTPairingServerRemote, NSString, NSXPCConnection;
@protocol ACCOOBBTPairingXPCClientProtocol;

@interface _ACCOOBBTPairingProviderInfo : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <ACCOOBBTPairingXPCClientProtocol> _remoteObject;	// 16 = 0x10
    ACCOOBBTPairingServerRemote *_serverRemote;	// 24 = 0x18
    NSString *_providerUID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010006a374
@property(retain, nonatomic) NSString *providerUID; // @synthesize providerUID=_providerUID;
@property(retain, nonatomic) ACCOOBBTPairingServerRemote *serverRemote; // @synthesize serverRemote=_serverRemote;
@property(retain, nonatomic) id <ACCOOBBTPairingXPCClientProtocol> remoteObject; // @synthesize remoteObject=_remoteObject;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)description;	// IMP=0x000000010006a2dc
- (void)dealloc;	// IMP=0x000000010006a26c
- (id)init;	// IMP=0x000000010006a1f4

@end

