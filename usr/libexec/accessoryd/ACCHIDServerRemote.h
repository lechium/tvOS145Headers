//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccessoryHIDXPCServerProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface ACCHIDServerRemote : NSObject <AccessoryHIDXPCServerProtocol>
{
    NSXPCConnection *_XPCConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010012c3b0
@property(readonly, nonatomic) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
- (void)componentUpdate:(id)arg1 componentID:(id)arg2 enabled:(_Bool)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x000000010012c348
- (void)getReport:(id)arg1 componentID:(id)arg2 reportType:(id)arg3 reportID:(id)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x000000010012c2d8
- (void)outReport:(id)arg1 componentID:(id)arg2 report:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x000000010012c278
- (void)initConnection:(CDUnknownBlockType)arg1;	// IMP=0x000000010012c020
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x000000010012bf94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

