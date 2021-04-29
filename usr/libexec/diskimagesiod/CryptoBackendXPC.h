//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BackendXPC.h"

@interface CryptoBackendXPC : BackendXPC
{
    BackendXPC *_baseBackendXPC;	// 32 = 0x20
    shared_ptr_da0c4976 _cryptoFormat;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010002686c
- (id).cxx_construct;	// IMP=0x000000010002731c
- (void).cxx_destruct;	// IMP=0x00000001000272e0
@property(nonatomic) shared_ptr_da0c4976 cryptoFormat; // @synthesize cryptoFormat=_cryptoFormat;
@property(retain, nonatomic) BackendXPC *baseBackendXPC; // @synthesize baseBackendXPC=_baseBackendXPC;
- (_Bool)checkIfEncryptedWithErrno:(int *)arg1;	// IMP=0x00000001000270ec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100026f88
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100026b6c
- (id)initWithKeys:(struct keys *)arg1 baseBackendXPC:(id)arg2;	// IMP=0x0000000100026a00
- (void)createBackendWithKeys:(struct keys *)arg1;	// IMP=0x0000000100026874

@end
