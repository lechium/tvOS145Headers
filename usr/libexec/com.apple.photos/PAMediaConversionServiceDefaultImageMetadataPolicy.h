//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PAMediaConversionServiceImageMetadataPolicy.h"

__attribute__((visibility("hidden")))
@interface PAMediaConversionServiceDefaultImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
{
    float _lossyCompressionQuality;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000847c
+ (id)policyWithLossyCompressionQuality:(float)arg1;	// IMP=0x000000010000844c
+ (id)standardPolicy;	// IMP=0x0000000100008348
@property float lossyCompressionQuality; // @synthesize lossyCompressionQuality=_lossyCompressionQuality;
- (id)processMetadata:(id)arg1;	// IMP=0x0000000100007fa4
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x0000000100007f9c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100007f3c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100007eb0
- (id)initWithLossyCompressionQuality:(float)arg1;	// IMP=0x0000000100007e48
- (id)init;	// IMP=0x0000000100007e34

@end
