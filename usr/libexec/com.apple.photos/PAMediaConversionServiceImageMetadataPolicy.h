//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

__attribute__((visibility("hidden")))
@interface PAMediaConversionServiceImageMetadataPolicy : NSObject <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100007e00
+ (id)standardPolicy;	// IMP=0x0000000100007cfc
- (id)processMetadata:(id)arg1;	// IMP=0x0000000100007cf4
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x0000000100007cec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100007ce8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100007ce4

@end

