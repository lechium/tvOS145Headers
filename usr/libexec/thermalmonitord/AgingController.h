//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;
@protocol OS_dispatch_queue;

@interface AgingController : NSObject
{
    int _mitigationStateToken;	// 8 = 0x8
    int _mitigationsDisabledToken;	// 12 = 0xc
    unsigned int _ppmService;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_connQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 40 = 0x28
    int _UPOAgingMitigationsThreshold;	// 48 = 0x30
    unsigned long long _mitigationState;	// 56 = 0x38
    NSUserDefaults *_defaults;	// 64 = 0x40
}

+ (id)allocDefaults;	// IMP=0x00000001000117a8
+ (id)log;	// IMP=0x000000010001173c
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(nonatomic) unsigned long long mitigationState; // @synthesize mitigationState=_mitigationState;
@property(nonatomic) int UPOAgingMitigationsThreshold; // @synthesize UPOAgingMitigationsThreshold=_UPOAgingMitigationsThreshold;
- (id)currentBootSessionUUID;	// IMP=0x0000000100012e90
- (void)xpcNotifyForMitigationsUI;	// IMP=0x0000000100012bc0
- (void)notifyPPMOfMitigationState:(unsigned long long)arg1;	// IMP=0x00000001000129e8
- (void)updateMitigationStateAndNotify:(unsigned long long)arg1;	// IMP=0x00000001000127b8
- (_Bool)shouldEnableAgeAwarenessForTableDrivenControllers;	// IMP=0x0000000100012794
- (void)takeActionOnUPO:(int)arg1 forWRa:(int)arg2;	// IMP=0x0000000100012524
- (void)dealloc;	// IMP=0x0000000100012430
- (id)initWithParams:(id)arg1 currentWRa:(int)arg2 currentUPOCount:(int)arg3;	// IMP=0x0000000100011a44
- (void)migrateDefaultsPlist;	// IMP=0x00000001000118ac

@end
