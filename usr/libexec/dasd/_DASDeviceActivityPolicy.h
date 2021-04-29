//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASActivityPolicyPredicting-Protocol.h"

@class NSArray, NSDate, NSString, _CDContextualKeyPath, _DKPredictionTimeline, _DKPredictor;

@interface _DASDeviceActivityPolicy : NSObject <_DASActivityPolicyPredicting>
{
    _Bool _considerAlwaysActive;	// 8 = 0x8
    NSString *_policyName;	// 16 = 0x10
    NSArray *_triggers;	// 24 = 0x18
    _DKPredictor *_predictor;	// 32 = 0x20
    _DKPredictionTimeline *_deviceActivityTimeline;	// 40 = 0x28
    NSDate *_lastPredictionTimelineUpdate;	// 48 = 0x30
    _CDContextualKeyPath *_inUseStatus;	// 56 = 0x38
}

+ (_Bool)isDeviceInUse:(id)arg1;	// IMP=0x0000000100023e40
+ (id)policyInstance;	// IMP=0x0000000100023864
+ (void)printLowLikelihoodRegions;	// IMP=0x0000000100023320
- (void).cxx_destruct;	// IMP=0x0000000100024488
@property(nonatomic) _Bool considerAlwaysActive; // @synthesize considerAlwaysActive=_considerAlwaysActive;
@property(retain, nonatomic) _CDContextualKeyPath *inUseStatus; // @synthesize inUseStatus=_inUseStatus;
@property(retain, nonatomic) NSDate *lastPredictionTimelineUpdate; // @synthesize lastPredictionTimelineUpdate=_lastPredictionTimelineUpdate;
@property(retain) _DKPredictionTimeline *deviceActivityTimeline; // @synthesize deviceActivityTimeline=_deviceActivityTimeline;
@property(retain, nonatomic) _DKPredictor *predictor; // @synthesize predictor=_predictor;
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(copy, nonatomic) NSString *policyName; // @synthesize policyName=_policyName;
- (double)predictedScoreForActivity:(id)arg1 atDate:(id)arg2;	// IMP=0x00000001000243f4
- (id)responseForActivity:(id)arg1 withState:(id)arg2;	// IMP=0x000000010002400c
- (_Bool)backgroundTaskAllowedWithType:(id)arg1 withRationale:(id)arg2 withState:(id)arg3;	// IMP=0x0000000100023eec
- (double)scoreForActivity:(id)arg1 atDate:(id)arg2;	// IMP=0x0000000100023ab8
- (double)weightForActivity:(id)arg1;	// IMP=0x0000000100023a48
- (_Bool)appliesToActivity:(id)arg1;	// IMP=0x00000001000239c0
- (_Bool)shouldIgnoreTrigger:(id)arg1 withState:(id)arg2;	// IMP=0x0000000100023900
- (_Bool)shouldLogScoreToPowerLog;	// IMP=0x000000010002385c
- (id)predictionForDeviceActivity;	// IMP=0x00000001000237f0
- (id)init;	// IMP=0x00000001000235fc
- (id)initializeTriggers;	// IMP=0x00000001000234cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

