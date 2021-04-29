//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _DASPredictionManager : NSObject
{
}

+ (id)getValuesForPrediction:(id)arg1 tillEndDate:(id)arg2 withIntervals:(double)arg3;	// IMP=0x00000001000332b4
+ (_Bool)predictionNeedsUpdating:(id)arg1 atDate:(id)arg2 lastUpdatedAt:(id)arg3;	// IMP=0x00000001000331d4
+ (id)predictionForKey:(id)arg1;	// IMP=0x0000000100033130
+ (id)lowLikelihoodPeriodEndForPredictionWithKey:(id)arg1;	// IMP=0x000000010003300c
+ (id)lowLikelihoodPeriodStartForPredictionWithKey:(id)arg1;	// IMP=0x0000000100032ee8
+ (id)cacheDetailsForPredictionWithKey:(id)arg1;	// IMP=0x00000001000329f8
+ (void)setPrediction:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100032908
+ (id)currentPredictions;	// IMP=0x000000010003289c
+ (void)initialize;	// IMP=0x00000001000327f4
+ (void)asyncDo:(CDUnknownBlockType)arg1;	// IMP=0x0000000100032694
+ (id)predictionGenerationQueue;	// IMP=0x00000001000325fc
+ (id)sharedPredictor;	// IMP=0x00000001000324f4
+ (id)sharedKnowledgeStore;	// IMP=0x0000000100032478

@end

