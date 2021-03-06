//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSUUID;

@interface IDSUTunControlMessage_Hello : NSObject
{
    NSString *_controlChannelVersion;	// 8 = 0x8
    NSString *_productName;	// 16 = 0x10
    NSString *_productVersion;	// 24 = 0x18
    NSString *_productBuildVersion;	// 32 = 0x20
    NSString *_model;	// 40 = 0x28
    NSNumber *_pairingProtocolVersion;	// 48 = 0x30
    NSNumber *_minCompatibilityVersion;	// 56 = 0x38
    NSNumber *_maxCompatibilityVersion;	// 64 = 0x40
    NSNumber *_capabilityFlags;	// 72 = 0x48
    NSNumber *_serviceMinCompatibilityVersion;	// 80 = 0x50
    NSUUID *_instanceID;	// 88 = 0x58
    NSUUID *_deviceUniqueID;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001001585b0
@property(copy) NSUUID *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
@property(copy) NSUUID *instanceID; // @synthesize instanceID=_instanceID;
@property(copy) NSNumber *serviceMinCompatibilityVersion; // @synthesize serviceMinCompatibilityVersion=_serviceMinCompatibilityVersion;
@property(copy) NSNumber *capabilityFlags; // @synthesize capabilityFlags=_capabilityFlags;
@property(copy) NSNumber *maxCompatibilityVersion; // @synthesize maxCompatibilityVersion=_maxCompatibilityVersion;
@property(copy) NSNumber *minCompatibilityVersion; // @synthesize minCompatibilityVersion=_minCompatibilityVersion;
@property(copy) NSNumber *pairingProtocolVersion; // @synthesize pairingProtocolVersion=_pairingProtocolVersion;
@property(copy) NSString *model; // @synthesize model=_model;
@property(copy) NSString *productBuildVersion; // @synthesize productBuildVersion=_productBuildVersion;
@property(copy) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(copy) NSString *productName; // @synthesize productName=_productName;
@property(copy) NSString *controlChannelVersion; // @synthesize controlChannelVersion=_controlChannelVersion;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 loggingPrefixString:(id)arg3;	// IMP=0x0000000100155954
- (id)data;	// IMP=0x0000000100154e00
- (id)init;	// IMP=0x0000000100154d84
- (_Bool)_isTinkerFlagSet;	// IMP=0x0000000100154d0c
- (_Bool)_isSupportIPsecLinkFlagSet;	// IMP=0x0000000100154c94
- (id)description;	// IMP=0x0000000100154aa4

@end

