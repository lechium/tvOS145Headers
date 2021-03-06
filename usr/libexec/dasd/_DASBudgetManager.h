//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASBudgetManaging-Protocol.h"

@class NSDictionary, NSString, _DASSystemBudgetManager, _DASWidgetRefreshBudgetManager;
@protocol OS_dispatch_queue, OS_os_log;

@interface _DASBudgetManager : NSObject <_DASBudgetManaging>
{
    _DASSystemBudgetManager *_systemBudgetManager;	// 8 = 0x8
    _DASWidgetRefreshBudgetManager *_widgetRefreshBudgetManager;	// 16 = 0x10
    NSObject<OS_os_log> *_log;	// 24 = 0x18
    NSDictionary *_budgets;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000100034b30
- (void).cxx_destruct;	// IMP=0x00000001000351fc
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSDictionary *budgets; // @synthesize budgets=_budgets;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) _DASWidgetRefreshBudgetManager *widgetRefreshBudgetManager; // @synthesize widgetRefreshBudgetManager=_widgetRefreshBudgetManager;
@property(retain, nonatomic) _DASSystemBudgetManager *systemBudgetManager; // @synthesize systemBudgetManager=_systemBudgetManager;
- (void)reportUpdateForActivity:(id)arg1 withDataConsumed:(id)arg2;	// IMP=0x00000001000350f4
- (void)reportActivityNoLongerRunningWithParameters:(id)arg1;	// IMP=0x0000000100035078
- (void)reportActivityRunningWithParameters:(id)arg1;	// IMP=0x0000000100034ffc
- (void)reportActivityNoLongerRunning:(id)arg1;	// IMP=0x0000000100034f74
- (void)reportActivityRunning:(id)arg1;	// IMP=0x0000000100034eec
- (_Bool)isWidgetRefreshBudget:(id)arg1;	// IMP=0x0000000100034e9c
- (void)setCapacity:(double)arg1 forBudgetWithName:(id)arg2;	// IMP=0x0000000100034e18
- (void)setBalance:(double)arg1 forBudgetWithName:(id)arg2;	// IMP=0x0000000100034d94
- (void)reinstantiateConfiguredBudgets;	// IMP=0x0000000100034d28
- (double)remainingBalanceForBudgetWithName:(id)arg1;	// IMP=0x0000000100034ca0
- (id)allBudgets;	// IMP=0x0000000100034be0
- (id)budgetKeyPathForBudgetName:(id)arg1;	// IMP=0x0000000100034bd0
- (id)init;	// IMP=0x0000000100034abc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

