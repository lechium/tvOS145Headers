//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCAudioXPCServerProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface ACCAudioServerRemote : NSObject <ACCAudioXPCServerProtocol>
{
    NSXPCConnection *_XPCConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100038b6c
@property(readonly, nonatomic) NSXPCConnection *XPCConnection; // @synthesize XPCConnection=_XPCConnection;
- (void)allowBackgroundAudioForClient:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003896c
- (void)deviceAudioStatesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100038830
- (void)supportedDigitalAudioSampleRatesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000386f4
- (void)supportedDigitalAudioSampleRate:(unsigned int)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000385b4
- (void)setDigitalAudioSampleRate:(unsigned int)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100038474
- (void)initConnectionToServer:(CDUnknownBlockType)arg1;	// IMP=0x000000010003821c
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0000000100038190

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
