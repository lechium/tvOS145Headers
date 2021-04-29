//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UARPServiceUpdaterMatchedIOKitRule : NSObject <NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    unsigned long long _registryEntryID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100007f88
@property(readonly) unsigned long long registryEntryID; // @synthesize registryEntryID=_registryEntryID;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x00000001000081d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100008154
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000080e0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100008044
- (void)dealloc;	// IMP=0x0000000100007ffc
- (id)initWithIdentifier:(id)arg1 registryEntryID:(unsigned long long)arg2;	// IMP=0x0000000100007f90

@end
