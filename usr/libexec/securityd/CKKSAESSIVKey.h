//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSBaseAESSIVKey.h"

__attribute__((visibility("hidden")))
@interface CKKSAESSIVKey : CKKSBaseAESSIVKey
{
}

+ (id)randomKey:(id *)arg1;	// IMP=0x000000010017e160
- (id)keyMaterial;	// IMP=0x000000010017e130
- (_Bool)doSIV:(const struct ccmode_siv *)arg1 nonce:(id)arg2 text:(id)arg3 buffer:(char *)arg4 bufferLength:(unsigned long long)arg5 authenticatedData:(id)arg6 error:(id *)arg7;	// IMP=0x000000010017daf0
- (id)decryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x000000010017d834
- (id)encryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x000000010017d5c0
- (id)unwrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000010017d3bc
- (id)wrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000010017d16c
- (id)initWithBase64:(id)arg1;	// IMP=0x000000010017d084
- (id)initWithBytes:(char *)arg1 len:(unsigned long long)arg2;	// IMP=0x000000010017cfc8
- (id)init;	// IMP=0x000000010017cf88

@end

