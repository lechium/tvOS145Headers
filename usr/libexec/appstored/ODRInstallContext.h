//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSUUID, ODRMutableApplication;

@interface ODRInstallContext : NSObject
{
    ODRMutableApplication *_application;	// 8 = 0x8
    _Bool _isBeta;	// 16 = 0x10
    _Bool _isDeviceBasedVPP;	// 17 = 0x11
    _Bool _isRestore;	// 18 = 0x12
    NSString *_bundleID;	// 24 = 0x18
    NSString *_bundleVersion;	// 32 = 0x20
    NSUUID *_coordinatorID;	// 40 = 0x28
    NSNumber *_externalVersionID;	// 48 = 0x30
    NSNumber *_itemID;	// 56 = 0x38
    NSString *_logKey;	// 64 = 0x40
    long long _reason;	// 72 = 0x48
    NSString *_shortVersion;	// 80 = 0x50
    NSString *_variantID;	// 88 = 0x58
}

+ (id)contextWithMetadata:(id)arg1;	// IMP=0x0000000100108e84
- (void).cxx_destruct;	// IMP=0x0000000100109380
@property(copy) NSString *variantID; // @synthesize variantID=_variantID;
@property(copy) NSString *shortVersion; // @synthesize shortVersion=_shortVersion;
@property long long reason; // @synthesize reason=_reason;
@property(readonly) NSString *logKey; // @synthesize logKey=_logKey;
@property(copy) NSNumber *itemID; // @synthesize itemID=_itemID;
@property _Bool isRestore; // @synthesize isRestore=_isRestore;
@property _Bool isDeviceBasedVPP; // @synthesize isDeviceBasedVPP=_isDeviceBasedVPP;
@property _Bool isBeta; // @synthesize isBeta=_isBeta;
@property(copy) NSNumber *externalVersionID; // @synthesize externalVersionID=_externalVersionID;
@property(copy) NSUUID *coordinatorID; // @synthesize coordinatorID=_coordinatorID;
@property(copy) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)_findReason;	// IMP=0x00000001001091d8
- (id)application;	// IMP=0x00000001001090a8
- (id)init;	// IMP=0x0000000100108e10

@end

