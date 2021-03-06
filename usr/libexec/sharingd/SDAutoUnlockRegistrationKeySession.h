//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDAutoUnlockRegistrationSession.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockRegistrationKeySession : SDAutoUnlockRegistrationSession
{
    _Bool _locallyGenerated;	// 8 = 0x8
    NSData *_requestData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010011711c
@property(nonatomic, getter=isLocallyGenerated) _Bool locallyGenerated; // @synthesize locallyGenerated=_locallyGenerated;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
- (void)transport:(id)arg1 didReceiveMessageACKForIdentifier:(id)arg2;	// IMP=0x00000001001170d4
- (void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x0000000100116f7c
- (void)handleStepData:(id)arg1;	// IMP=0x0000000100116c4c
- (void)sendStepData:(id)arg1 type:(unsigned short)arg2 errorCode:(long long)arg3;	// IMP=0x00000001001169b0
- (void)onQueue_start;	// IMP=0x000000010011661c
- (void)start;	// IMP=0x0000000100116590

@end

