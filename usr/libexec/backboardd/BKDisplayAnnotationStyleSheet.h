//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKDisplayAnnotationStyle-Protocol.h"

@class NSString;
@protocol BKDisplayAnnotationStyle;

@interface BKDisplayAnnotationStyleSheet : NSObject <BKDisplayAnnotationStyle>
{
    id <BKDisplayAnnotationStyle> _baseStyle;	// 8 = 0x8
    id <BKDisplayAnnotationStyle> _styleModifier;	// 16 = 0x10
    id <BKDisplayAnnotationStyle> _subnodeStyleModifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000169cc
@property(retain, nonatomic) id <BKDisplayAnnotationStyle> subnodeStyleModifier; // @synthesize subnodeStyleModifier=_subnodeStyleModifier;
@property(retain, nonatomic) id <BKDisplayAnnotationStyle> styleModifier; // @synthesize styleModifier=_styleModifier;
@property(retain, nonatomic) id <BKDisplayAnnotationStyle> baseStyle; // @synthesize baseStyle=_baseStyle;
- (id)newLayerForContent:(id)arg1 scale:(double)arg2;	// IMP=0x00000001000167e4
- (void)sizeLayer:(id)arg1 toFitAtScale:(double)arg2;	// IMP=0x0000000100016720
- (void)applyToLayer:(id)arg1 forContent:(id)arg2;	// IMP=0x0000000100016694

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

