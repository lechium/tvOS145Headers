//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKDisplayAnnotationRenderer.h"

@class CALayer, NSArray, NSMutableDictionary;

@interface BKDisplayAnnotationContainedSubnodeRenderer : BKDisplayAnnotationRenderer
{
    CALayer *_backgroundLayer;	// 8 = 0x8
    NSMutableDictionary *_sectionTitleAnnotations;	// 16 = 0x10
    NSArray *_subannotations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100043508
@property(retain, nonatomic) NSArray *subannotations; // @synthesize subannotations=_subannotations;
@property(retain, nonatomic) NSMutableDictionary *sectionTitleAnnotations; // @synthesize sectionTitleAnnotations=_sectionTitleAnnotations;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
- (void)layoutAnnotationStack:(id)arg1;	// IMP=0x00000001000429d0
- (struct CGSize)_getFrames:(struct CGRect *)arg1 ofAnnotations:(id)arg2 fixSuperlayer:(id)arg3 scale:(double)arg4;	// IMP=0x000000010004273c
- (void)regenerateLayerTree;	// IMP=0x000000010004260c
- (void)styleSheetDidChange;	// IMP=0x00000001000423b4
- (_Bool)shouldRenderWithSupernode;	// IMP=0x00000001000423ac

@end
