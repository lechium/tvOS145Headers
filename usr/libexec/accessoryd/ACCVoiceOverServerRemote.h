//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCVoiceOverXPCServerProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface ACCVoiceOverServerRemote : NSObject <ACCVoiceOverXPCServerProtocol>
{
    NSXPCConnection *_XPCConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100127210
@property(readonly, nonatomic) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
- (void)update:(id)arg1 cursorInfo:(id)arg2;	// IMP=0x0000000100126eec
- (void)update:(id)arg1 info:(id)arg2;	// IMP=0x0000000100126c9c
- (void)initConnection:(CDUnknownBlockType)arg1;	// IMP=0x0000000100126a10
- (void)dealloc;	// IMP=0x00000001001269c4
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0000000100126850

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

