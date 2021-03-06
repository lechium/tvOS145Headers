//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASActivityPolicy-Protocol.h"

@class NSArray, NSString, _CDContextualKeyPath;

@interface _DASWatchBackgroundBudgetPolicy : NSObject <_DASActivityPolicy>
{
    NSString *_policyName;	// 8 = 0x8
    _CDContextualKeyPath *_snapshotBudgetKeyPath;	// 16 = 0x10
    _CDContextualKeyPath *_launchBudgetKeyPath;	// 24 = 0x18
    _CDContextualKeyPath *_sessionInProgressKeyPath;	// 32 = 0x20
    _CDContextualKeyPath *_ineligibleAppsKeyPath;	// 40 = 0x28
    NSArray *_triggers;	// 48 = 0x30
}

+ (id)policyInstance;	// IMP=0x000000010002e994
- (void).cxx_destruct;	// IMP=0x000000010002f208
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) _CDContextualKeyPath *ineligibleAppsKeyPath; // @synthesize ineligibleAppsKeyPath=_ineligibleAppsKeyPath;
@property(retain, nonatomic) _CDContextualKeyPath *sessionInProgressKeyPath; // @synthesize sessionInProgressKeyPath=_sessionInProgressKeyPath;
@property(retain, nonatomic) _CDContextualKeyPath *launchBudgetKeyPath; // @synthesize launchBudgetKeyPath=_launchBudgetKeyPath;
@property(retain, nonatomic) _CDContextualKeyPath *snapshotBudgetKeyPath; // @synthesize snapshotBudgetKeyPath=_snapshotBudgetKeyPath;
@property(retain, nonatomic) NSString *policyName; // @synthesize policyName=_policyName;
- (id)responseForActivity:(id)arg1 withState:(id)arg2;	// IMP=0x000000010002ed7c
- (_Bool)applicationForActivity:(id)arg1 isDisallowedWithContext:(id)arg2;	// IMP=0x000000010002ebf8
- (double)weightForActivity:(id)arg1;	// IMP=0x000000010002ebf0
- (_Bool)sessionInProgress:(id)arg1;	// IMP=0x000000010002eb98
- (_Bool)appliesToActivity:(id)arg1;	// IMP=0x000000010002eaf4
- (_Bool)shouldIgnoreTrigger:(id)arg1 withState:(id)arg2;	// IMP=0x000000010002ea34
- (id)init;	// IMP=0x000000010002e84c
- (id)initializeTriggers;	// IMP=0x000000010002e5a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

