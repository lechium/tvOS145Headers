//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, RecommendationPreferences;

@interface RecommendationEngine : NSObject
{
    NSMutableDictionary *_dpsWDBudgetDict;	// 8 = 0x8
    RecommendationPreferences *_preferences;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010003afb8
@property(retain, nonatomic) RecommendationPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) NSMutableDictionary *dpsWDBudgetDict; // @synthesize dpsWDBudgetDict=_dpsWDBudgetDict;
- (void)recommendActionFromData:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003a628
- (void)addNumSuppressedCapture;	// IMP=0x000000010003a530
- (void)addNumRecommendedCapture;	// IMP=0x000000010003a438
- (void)addNumSuppressedWD;	// IMP=0x000000010003a340
- (void)addNumRecommendedWD;	// IMP=0x000000010003a248
- (void)isDatapathStudyShowingDPS:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003914c
- (float)medianCCA:(id)arg1;	// IMP=0x000000010003883c
- (_Bool)canCaptureforDPS;	// IMP=0x0000000100038654
- (_Bool)canWDforDPS;	// IMP=0x00000001000383b8
- (id)init;	// IMP=0x0000000100038234

@end

