//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;
@protocol ADDeviceAuthenticationSession, OS_dispatch_queue;

@interface ADAuthenticator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSData *_requestData;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    unsigned long long _authStrategyVersion;	// 32 = 0x20
    id <ADDeviceAuthenticationSession> _deviceAuthSession;	// 40 = 0x28
    unsigned long long _deviceAuthSessionState;	// 48 = 0x30
}

+ (_Bool)authenticationAvailable;	// IMP=0x00000001001c289c
- (void).cxx_destruct;	// IMP=0x00000001001c3170
@property(retain, nonatomic, setter=_setRequestData:) NSData *_requestData; // @synthesize _requestData;
- (id)_createDeviceAuthenticationSessionForVersion:(unsigned long long)arg1;	// IMP=0x00000001001c311c
- (void)reset;	// IMP=0x00000001001c3050
- (double)sessionInfoDuration;	// IMP=0x00000001001c3048
- (id)signedDataForData:(id)arg1;	// IMP=0x00000001001c2ec4
- (void)setSessionInfo:(id)arg1 duration:(double)arg2;	// IMP=0x00000001001c2d38
- (id)requestData;	// IMP=0x00000001001c2d2c
- (void)prepareWithCertificateData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001c2a7c
- (unsigned long long)authenticationStrategyVersion;	// IMP=0x00000001001c2a74
- (int)state;	// IMP=0x00000001001c29f8
- (id)deviceAuthSession;	// IMP=0x00000001001c2954
- (id)initWithTargetQueue:(id)arg1 authenticationStrategyVersion:(id)arg2;	// IMP=0x00000001001c28a4

@end
