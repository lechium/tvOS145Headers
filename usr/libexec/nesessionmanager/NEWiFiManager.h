//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NEWiFiManager : NSObject
{
    long long _wowRefCount;	// 8 = 0x8
    struct __WiFiManagerClient *_wifiManagerClient;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010007e82c
@property(nonatomic) struct __WiFiManagerClient *wifiManagerClient; // @synthesize wifiManagerClient=_wifiManagerClient;
@property(nonatomic) long long wowRefCount; // @synthesize wowRefCount=_wowRefCount;
- (void)invalidate;	// IMP=0x000000010007ebb0
- (void)disableWoW;	// IMP=0x000000010007eacc
- (void)enableWoW;	// IMP=0x000000010007e8d4
- (id)init;	// IMP=0x000000010007e898

@end

