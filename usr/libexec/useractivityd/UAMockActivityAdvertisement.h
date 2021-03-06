//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSData, NSDictionary, SFPeerDevice;

@interface UAMockActivityAdvertisement : NSObject <NSSecureCoding>
{
    long long _advertisementVersion;	// 8 = 0x8
    NSData *_advertisementPayload;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    SFPeerDevice *_device;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100063c08
- (void).cxx_destruct;	// IMP=0x0000000100064030
@property(retain) SFPeerDevice *device; // @synthesize device=_device;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(copy) NSData *advertisementPayload; // @synthesize advertisementPayload=_advertisementPayload;
@property long long advertisementVersion; // @synthesize advertisementVersion=_advertisementVersion;
- (id)description;	// IMP=0x0000000100063e70
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100063d30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100063c10
- (id)init;	// IMP=0x0000000100063bd4

@end

