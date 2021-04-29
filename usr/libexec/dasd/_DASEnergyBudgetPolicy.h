//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASActivityPolicy-Protocol.h"

@class NSArray, NSString;

@interface _DASEnergyBudgetPolicy : NSObject <_DASActivityPolicy>
{
    NSString *_policyName;	// 8 = 0x8
    NSArray *_triggers;	// 16 = 0x10
}

+ (_Bool)budgetIsPositive:(id)arg1;	// IMP=0x0000000100024818
+ (_Bool)isBudgetAvailable:(id)arg1;	// IMP=0x0000000100024758
+ (id)policyInstance;	// IMP=0x00000001000246ec
- (void).cxx_destruct;	// IMP=0x0000000100024d70
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) NSString *policyName; // @synthesize policyName=_policyName;
- (id)responseForActivity:(id)arg1 withState:(id)arg2;	// IMP=0x0000000100024ad8
- (_Bool)shouldIgnoreBudgetForActivity:(id)arg1 withState:(id)arg2;	// IMP=0x0000000100024a14
- (double)weightForActivity:(id)arg1;	// IMP=0x0000000100024a0c
- (_Bool)appliesToActivity:(id)arg1;	// IMP=0x00000001000249fc
- (_Bool)shouldIgnoreTrigger:(id)arg1 withState:(id)arg2;	// IMP=0x0000000100024968
- (void)updateSystemConstraintsWithContext:(id)arg1;	// IMP=0x00000001000248c8
- (_Bool)shouldLogScoreToPowerLog;	// IMP=0x00000001000246e4
- (id)init;	// IMP=0x0000000100024660
- (id)initializeTriggers;	// IMP=0x0000000100024508

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

