//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACCFeatureServer.h"

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableArray, NSString, NSXPCConnection;
@protocol ACCAudioXPCClientProtocol;

@interface ACCAudioServer : ACCFeatureServer <NSXPCListenerDelegate>
{
    NSMutableArray *_clientConnections;	// 40 = 0x28
    NSXPCConnection *_activeConnection;	// 48 = 0x30
    id <ACCAudioXPCClientProtocol> _remoteObject;	// 56 = 0x38
}

+ (id)sharedServer;	// IMP=0x00000001000c6cf0
- (void).cxx_destruct;	// IMP=0x00000001000c6e04
@property(retain, nonatomic) id <ACCAudioXPCClientProtocol> remoteObject; // @synthesize remoteObject=_remoteObject;
@property(retain, nonatomic) NSXPCConnection *activeConnection; // @synthesize activeConnection=_activeConnection;
@property(retain, nonatomic) NSMutableArray *clientConnections; // @synthesize clientConnections=_clientConnections;
- (_Bool)shouldAcceptXPCConnection:(id)arg1;	// IMP=0x00000001000c6c44
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000c630c
- (id)initWithXPCServiceName:(id)arg1 andFeatureNotification:(const char *)arg2;	// IMP=0x00000001000c6278

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

