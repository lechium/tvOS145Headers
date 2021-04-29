//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSVoiceTriggerXPCConnectionDelegate, OS_dispatch_queue, OS_xpc_object;

@interface CSVoiceTriggerXPCConnection : NSObject
{
    id <CSVoiceTriggerXPCConnectionDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_xpc_object> *_connection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000c59ac
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSVoiceTriggerXPCConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleVoiceTriggerStatsFetchEvent:(id)arg1 client:(id)arg2;	// IMP=0x00000001000c5858
- (void)_handleServiceConnectionLostIfNeeded;	// IMP=0x00000001000c5854
- (void)_handleEnableVoiceTriggerWithSiriAssertionRequest:(id)arg1;	// IMP=0x00000001000c5778
- (void)_handleVoiceTriggeredSiriSessionCancelled;	// IMP=0x00000001000c56a0
- (void)_handleRaiseToSpeakBypassRequest:(id)arg1;	// IMP=0x00000001000c5610
- (void)_handlePhraseSpotterBypassRequest:(id)arg1;	// IMP=0x00000001000c54d8
- (void)_handleVoiceTriggerXPCServiceMessage:(id)arg1 client:(id)arg2;	// IMP=0x00000001000c5368
- (void)_sendReply:(id)arg1 client:(id)arg2 result:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000001000c5300
- (void)_handleClientError:(id)arg1 client:(id)arg2;	// IMP=0x00000001000c511c
- (void)_handleClientMessage:(id)arg1 client:(id)arg2;	// IMP=0x00000001000c5038
- (void)_handleClientEvent:(id)arg1;	// IMP=0x00000001000c4f4c
- (void)activateConnection;	// IMP=0x00000001000c4e38
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001000c4d68

@end

