//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface PurchaseIntent : NSObject
{
    NSString *_productIdentifier;	// 8 = 0x8
    NSString *_productName;	// 16 = 0x10
    NSString *_appBundleId;	// 24 = 0x18
    NSString *_appName;	// 32 = 0x20
    NSNumber *_timestamp;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010008ca18
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(retain, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (id)description;	// IMP=0x000000010008c968

@end

