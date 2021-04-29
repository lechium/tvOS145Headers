//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSAlarmMonitorDelegate-Protocol.h"
#import "CSTimerMonitorDelegate-Protocol.h"
#import "CSVoiceTriggerDelegate-Protocol.h"
#import "CSVolumeMonitorDelegate-Protocol.h"

@class NSString;
@protocol CSConnectionServiceDelegate, CSSmartSiriVolumeProcessor, OS_dispatch_queue;

@interface CSSmartSiriVolumeManager : NSObject <CSVoiceTriggerDelegate, CSAlarmMonitorDelegate, CSTimerMonitorDelegate, CSVolumeMonitorDelegate>
{
    id <CSConnectionServiceDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <CSSmartSiriVolumeProcessor> _smartSiriVolume;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000001000a41b8
- (void).cxx_destruct;	// IMP=0x00000001000a4c38
@property(retain, nonatomic) id <CSSmartSiriVolumeProcessor> smartSiriVolume; // @synthesize smartSiriVolume=_smartSiriVolume;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSConnectionServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;	// IMP=0x00000001000a4b0c
- (void)CSVolumeMonitor:(id)arg1 didReceiveAlarmVolumeChanged:(float)arg2;	// IMP=0x00000001000a49a8
- (void)CSVolumeMonitor:(id)arg1 didReceiveMusicVolumeChanged:(float)arg2;	// IMP=0x00000001000a4844
- (void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(long long)arg2;	// IMP=0x00000001000a46ec
- (void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(long long)arg2;	// IMP=0x00000001000a4594
- (id)getVolumeForTTSType:(unsigned long long)arg1 withOverrideMediaVolume:(id)arg2 WithRequestTime:(unsigned long long)arg3;	// IMP=0x00000001000a4584
- (void)setAsset:(id)arg1;	// IMP=0x00000001000a4574
- (void)startSmartSiriVolume;	// IMP=0x00000001000a4564
- (id)initWithSamplingRate:(float)arg1 withAsset:(id)arg2;	// IMP=0x00000001000a42ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

