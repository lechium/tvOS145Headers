//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKDisplayAnnotation, CALayer;

@interface BKDisplayAnnotationRenderer : NSObject
{
    _Bool _shouldReapplyStyles;	// 8 = 0x8
    BKDisplayAnnotation *_annotation;	// 16 = 0x10
    CALayer *_layer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010002e390
@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(nonatomic) __weak BKDisplayAnnotation *annotation; // @synthesize annotation=_annotation;
- (void)regenerateLayerTree;	// IMP=0x000000010002e190
- (void)sizeLayerToFitAtScale:(double)arg1;	// IMP=0x000000010002e0fc
- (void)styleSheetDidChange;	// IMP=0x000000010002de44
- (void)didRemoveSubannotations;	// IMP=0x000000010002de38
- (void)didRemoveAnnotation;	// IMP=0x000000010002ddf8
- (void)locationDidChange;	// IMP=0x000000010002daf8
- (void)didAddAnnotation;	// IMP=0x000000010002daec
@property(readonly, nonatomic) _Bool shouldRenderWithSupernode;

@end

