//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSUUID;

@interface W5WiFiPerfLoggingRequest : NSObject <NSCopying>
{
    NSUUID *_uuid;	// 8 = 0x8
    NSDictionary *_configuration;	// 16 = 0x10
    CDUnknownBlockType _reply;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType reply; // @synthesize reply=_reply;
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100009558
- (unsigned long long)hash;	// IMP=0x0000000100009548
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000094e0
- (_Bool)isEqualToWiFiPerfLoggingRequest:(id)arg1;	// IMP=0x00000001000094a4
- (id)description;	// IMP=0x0000000100009410
- (void)dealloc;	// IMP=0x00000001000093b8

@end

