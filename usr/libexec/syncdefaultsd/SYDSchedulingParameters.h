//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SYDSchedulingParameters : NSObject
{
    NSDictionary *_persistentState;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100056754
@property(retain, nonatomic) NSDictionary *persistentState; // @synthesize persistentState=_persistentState;
- (id)limitsDescription;	// IMP=0x0000000100056170
- (_Bool)updateWithNewPersistentState:(id)arg1;	// IMP=0x00000001000560fc
@property(readonly, nonatomic) unsigned long long maxAppsPerSync;
@property(readonly, nonatomic) double configurationTTL;
@property(readonly, nonatomic) double apnsTokenTTL;
@property(readonly, nonatomic) double syncLimitInterval;
@property(readonly, nonatomic) unsigned long long syncLimitCount;
@property(readonly, nonatomic) double appBlackListedRetryInterval;
@property(readonly, nonatomic) double appNotWhiteListedRetryInterval;
@property(readonly, nonatomic) double http5xxErrorRetryInterval;
@property(readonly, nonatomic) double http4xxErrorRetryInterval;
@property(readonly, nonatomic) double appMiscErrorRetryInterval;
@property(readonly, nonatomic) _Bool disableThrottlingForKeychainWithChanges;
@property(readonly, nonatomic) _Bool disableThrottlingForSyncWithTracking;
@property(readonly, nonatomic) double devAppSyncLimitInterval;
@property(readonly, nonatomic) unsigned long long devAppSyncLimitCount;
@property(readonly, nonatomic) double appSyncLimitInterval;
@property(readonly, nonatomic) unsigned long long appSyncLimitCount;
@property(readonly, nonatomic) double appHardSyncInterval;
@property(readonly, nonatomic) double appSoftSyncInterval;
@property(readonly, nonatomic) double appAutostopInterval;
@property(readonly, nonatomic) double soonInterval;
- (id)initWithPersistentState:(id)arg1;	// IMP=0x00000001000554d8

@end

