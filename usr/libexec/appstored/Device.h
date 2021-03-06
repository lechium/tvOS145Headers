//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "Device-Protocol.h"

@class NSArray, NSString;

@interface Device : NSObject <Device>
{
    _Bool _HRNMode;	// 8 = 0x8
    NSString *_iOSSupportVersion;	// 16 = 0x10
    NSArray *_productVariants;	// 24 = 0x18
    NSString *_productVersion;	// 32 = 0x20
}

+ (_Bool)isHRNMode;	// IMP=0x000000010023ca14
+ (id)activationRecord;	// IMP=0x000000010023c964
+ (id)currentDevice;	// IMP=0x000000010023c820
- (void).cxx_destruct;	// IMP=0x000000010023ccc4
@property(readonly) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(readonly) NSArray *productVariants; // @synthesize productVariants=_productVariants;
@property(readonly) NSString *iOSSupportVersion; // @synthesize iOSSupportVersion=_iOSSupportVersion;
- (id)copyThinningHeaders;	// IMP=0x000000010023cba8
@property(readonly, getter=isHRNMode) _Bool HRNMode;
@property(readonly) NSString *deviceName;
@property(readonly) NSString *deviceGUID;
@property(readonly, getter=isAppleSiliconMac) _Bool appleSiliconMac;
- (id)_initWithCurrentDevice;	// IMP=0x000000010023c898

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

