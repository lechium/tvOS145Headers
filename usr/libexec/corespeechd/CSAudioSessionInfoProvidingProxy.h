//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSAudioSessionInfoProvidingDelegate-Protocol.h"
#import "CSXPCConnectionDelegate-Protocol.h"

@class CSXPCConnection, NSString;
@protocol CSAudioSessionInfoProviding;

@interface CSAudioSessionInfoProvidingProxy : NSObject <CSXPCConnectionDelegate, CSAudioSessionInfoProvidingDelegate>
{
    id <CSAudioSessionInfoProviding> _audioSessionInfoProvider;	// 8 = 0x8
    CSXPCConnection *_xpcConnection;	// 16 = 0x10
    unsigned long long _streamClientType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000638b0
@property(nonatomic) unsigned long long streamClientType; // @synthesize streamClientType=_streamClientType;
@property(nonatomic) __weak CSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak id <CSAudioSessionInfoProviding> audioSessionInfoProvider; // @synthesize audioSessionInfoProvider=_audioSessionInfoProvider;
- (void)_sendDelegateMessageToClient:(id)arg1;	// IMP=0x0000000100063754
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;	// IMP=0x0000000100063660
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;	// IMP=0x000000010006356c
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;	// IMP=0x0000000100063478
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;	// IMP=0x0000000100063384
- (void)_handleSessionIDRequestMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0000000100063168
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0000000100063090
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x000000010006301c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

