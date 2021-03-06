//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSDHubTrustEvaluate : NSObject
{
    NSString *_hubCertificateIdentifier;	// 8 = 0x8
}

+ (id)getTrustObject;	// IMP=0x0000000100009f60
- (void).cxx_destruct;	// IMP=0x000000010000b324
@property(retain) NSString *hubCertificateIdentifier; // @synthesize hubCertificateIdentifier=_hubCertificateIdentifier;
- (_Bool)isHubCertificatePinnedTo:(struct __SecCertificate *)arg1 applePKI:(_Bool)arg2;	// IMP=0x000000010000b284
- (_Bool)saveHubCertificateIdentifer:(struct __SecCertificate *)arg1 applePKI:(_Bool)arg2;	// IMP=0x000000010000b1d8
- (id)identifierFor:(struct __SecCertificate *)arg1 applePKI:(_Bool)arg2;	// IMP=0x000000010000ae90
- (id)hashForCertificate:(struct __SecCertificate *)arg1;	// IMP=0x000000010000ad48
- (_Bool)trustServer:(struct __SecTrust *)arg1 withRootCA:(struct __SecCertificate *)arg2 withHostName:(id)arg3;	// IMP=0x000000010000aa4c
- (_Bool)trustServerWithAxinoePKI:(struct __SecTrust *)arg1;	// IMP=0x000000010000a880
- (_Bool)trustServerWithApplePKI:(struct __SecTrust *)arg1;	// IMP=0x000000010000a5d0
- (_Bool)trustDAServer:(struct __SecTrust *)arg1;	// IMP=0x000000010000a2e8
- (_Bool)trustServer:(struct __SecTrust *)arg1 forRequestType:(_Bool)arg2 typeOfCommand:(unsigned long long)arg3;	// IMP=0x0000000100009f7c

@end

