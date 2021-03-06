//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WAMessageAWD;

@interface WiFiSoftErrorStatsRecord : NSObject
{
    unsigned char _inCarState;	// 8 = 0x8
    _Bool _externalPowerSupply;	// 9 = 0x9
    unsigned char _lowPowerMode;	// 10 = 0xa
    WAMessageAWD *_chipCounters;	// 16 = 0x10
    WAMessageAWD *_btCoexStats;	// 24 = 0x18
    WAMessageAWD *_frameCounters;	// 32 = 0x20
    long long _motionState;	// 40 = 0x28
    long long _rssi;	// 48 = 0x30
    long long _cca;	// 56 = 0x38
    long long _snr;	// 64 = 0x40
    long long _batteryLevelPercent;	// 72 = 0x48
    NSString *_applicationBundleId;	// 80 = 0x50
    double _statsRecordTime;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000001000091e0
@property double statsRecordTime; // @synthesize statsRecordTime=_statsRecordTime;
@property(nonatomic) NSString *applicationBundleId; // @synthesize applicationBundleId=_applicationBundleId;
@property(nonatomic) unsigned char lowPowerMode; // @synthesize lowPowerMode=_lowPowerMode;
@property(nonatomic) _Bool externalPowerSupply; // @synthesize externalPowerSupply=_externalPowerSupply;
@property(nonatomic) long long batteryLevelPercent; // @synthesize batteryLevelPercent=_batteryLevelPercent;
@property(nonatomic) long long snr; // @synthesize snr=_snr;
@property(nonatomic) long long cca; // @synthesize cca=_cca;
@property(nonatomic) long long rssi; // @synthesize rssi=_rssi;
@property(nonatomic) unsigned char inCarState; // @synthesize inCarState=_inCarState;
@property(nonatomic) long long motionState; // @synthesize motionState=_motionState;
@property(retain, nonatomic) WAMessageAWD *frameCounters; // @synthesize frameCounters=_frameCounters;
@property(retain, nonatomic) WAMessageAWD *btCoexStats; // @synthesize btCoexStats=_btCoexStats;
@property(retain, nonatomic) WAMessageAWD *chipCounters; // @synthesize chipCounters=_chipCounters;
- (void)grabStats:(int)arg1 deviceContext:(void *)arg2 wifiManagerCtxt:(void *)arg3 withContext:(id)arg4;	// IMP=0x0000000100008900

@end

