//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface WiFiCloudAssetsClient : NSObject
{
    _Bool _isWiFiHealthMonitorDisabled;	// 8 = 0x8
    struct __WiFiManager *_wifiManager;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100005ac0
- (void).cxx_destruct;	// IMP=0x0000000100005f6c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) struct __WiFiManager *wifiManager; // @synthesize wifiManager=_wifiManager;
@property _Bool isWiFiHealthMonitorDisabled; // @synthesize isWiFiHealthMonitorDisabled=_isWiFiHealthMonitorDisabled;
- (void)initializeWithManager:(struct __WiFiManager *)arg1 queue:(id)arg2;	// IMP=0x0000000100005ed0
- (void)runAssetQuery;	// IMP=0x0000000100005b64

@end

