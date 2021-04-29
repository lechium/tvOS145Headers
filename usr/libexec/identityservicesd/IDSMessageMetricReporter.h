//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSMessageMetricReporter : NSObject
{
}

+ (_Bool)_shouldIgnoreAutoBugCaptureForLegacyFailure:(id)arg1;	// IMP=0x0000000100050adc
+ (_Bool)_shouldIgnoreAutoBugCaptureForECFailure:(id)arg1;	// IMP=0x0000000100050974
+ (void)noteKeyGenerationForMetric;	// IMP=0x00000001000508a4
+ (id)errorToReportForLegacyError:(id)arg1;	// IMP=0x00000001000504b4
+ (id)errorToReportForECError:(id)arg1;	// IMP=0x00000001000500c4
+ (void)reportMessageMetricWithMetadata:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 command:(id)arg4 decryptedEqual:(_Bool)arg5 triedLastResort:(_Bool)arg6 ECError:(id)arg7 legacyError:(id)arg8 fromDestination:(id)arg9;	// IMP=0x000000010004ed34
+ (void)reportEncryptionSideMetricWithEndpoint:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 ECError:(id)arg4 legacyError:(id)arg5;	// IMP=0x000000010004e854
+ (id)messageMetadataWithEndpoint:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 ECError:(id)arg4 legacyError:(id)arg5;	// IMP=0x000000010004e6b4
+ (id)_metadataWithEndpoint:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 ECError:(id)arg4 legacyError:(id)arg5;	// IMP=0x000000010004e29c

@end

