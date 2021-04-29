//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DAStrongDeviceIdentity : NSObject
{
    struct __SecKey *_deviceIdentityKey;	// 8 = 0x8
}

@property(nonatomic) struct __SecKey *deviceIdentityKey; // @synthesize deviceIdentityKey=_deviceIdentityKey;
- (id)requestAttestationBlobWithOptions:(id)arg1 error:(id)arg2;	// IMP=0x00000001000098f8
- (id)signDigest:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000096f0
- (id)SHA256ForFileHandle:(id)arg1;	// IMP=0x000000010000942c
- (id)SHA256ForData:(id)arg1;	// IMP=0x0000000100009350
- (id)signFile:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000090a4
- (id)signPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100008ee0
- (void)generateAuthInfoWithNonce:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008d14
- (void)dealloc;	// IMP=0x0000000100008cc8
- (void)purgeSecurityKey;	// IMP=0x0000000100008c6c

@end
