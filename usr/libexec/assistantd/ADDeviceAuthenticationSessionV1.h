//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADDeviceAuthenticationSession-Protocol.h"

@class NSString;

@interface ADDeviceAuthenticationSessionV1 : NSObject <ADDeviceAuthenticationSession>
{
    struct FPSAPContextOpaque_ *_fairplayContext;	// 8 = 0x8
    struct FairPlayHWInfo_ _hardwareInfo;	// 16 = 0x10
    unsigned long long _sessionState;	// 40 = 0x28
}

@property(readonly, nonatomic) unsigned long long sessionState; // @synthesize sessionState=_sessionState;
- (id)signData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000488a8
- (id)_exchangeData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000486bc
- (_Bool)completeWithHandshakeResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000485c4
- (id)handshakeRequestWithCertificateData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000484d4
@property(readonly, nonatomic) unsigned long long strategyVersion;
- (void)dealloc;	// IMP=0x0000000100048480
- (void)invalidate;	// IMP=0x00000001000483c4
- (id)init;	// IMP=0x00000001000482e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

