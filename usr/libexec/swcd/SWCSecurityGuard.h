//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SWCSecurityGuard : NSObject
{
}

+ (id)new;	// IMP=0x00000001000204cc
+ (id)sharedSecurityGuard;	// IMP=0x0000000100020454
- (_Bool)verifyTrust:(struct __SecTrust *)arg1 allowInstalledRootCertificates:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000001000208cc
- (_Bool)verifyTrust:(struct __SecTrust *)arg1 error:(id *)arg2;	// IMP=0x00000001000208b8
- (id)JSONObjectWithSignedJSONData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100020508
- (id)init;	// IMP=0x00000001000204d8
- (_Bool)_verifyExtendedValidationOfTrust:(struct __SecTrust *)arg1 error:(id *)arg2;	// IMP=0x0000000100021704
- (id)_errorForUntrustedRootCertificateOfTrust:(struct __SecTrust *)arg1;	// IMP=0x0000000100021488
- (optional_252cd4e3)_evaluateTrust:(struct __SecTrust *)arg1 allowingKeychains:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000001000210a4
- (optional_252cd4e3)_evaluateTrust:(struct __SecTrust *)arg1 error:(id *)arg2;	// IMP=0x0000000100020ba4
- (id)_init;	// IMP=0x0000000100020b70

@end

