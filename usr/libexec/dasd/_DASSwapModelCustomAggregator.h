//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_DASSwapModelAbstractAggregator.h"

@protocol _DASSwapModeling;

@interface _DASSwapModelCustomAggregator : _DASSwapModelAbstractAggregator
{
    id <_DASSwapModeling> _applicationUsageModeling;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100040334
@property(retain) id <_DASSwapModeling> applicationUsageModeling; // @synthesize applicationUsageModeling=_applicationUsageModeling;
- (double)scoreForApplication:(id)arg1 atDate:(id)arg2;	// IMP=0x000000010004006c
- (id)scoresForAllApplicationsAtDate:(id)arg1;	// IMP=0x000000010003f854
- (id)initWithAlgorithms:(id)arg1;	// IMP=0x000000010003f6e4

@end

