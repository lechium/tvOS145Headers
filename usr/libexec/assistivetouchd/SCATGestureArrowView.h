//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@interface SCATGestureArrowView : UIControl
{
    struct CGPath *_arrowPath;	// 8 = 0x8
    struct CGPath *_arrowPathInBoundingBoxAtOrigin;	// 16 = 0x10
    _Bool _pressed;	// 24 = 0x18
    _Bool _shouldClearFingerCircle;	// 25 = 0x19
    double _tailAngle;	// 32 = 0x20
    double _curvature;	// 40 = 0x28
    double _distance;	// 48 = 0x30
    unsigned long long _style;	// 56 = 0x38
    struct CGPoint _tailPoint;	// 64 = 0x40
}

+ (void)getCurveArcCenter:(struct CGPoint *)arg1 startAngle:(double *)arg2 endAngle:(double *)arg3 updatedFingerAngle:(double *)arg4 updatedFingerCenter:(struct CGPoint *)arg5 withFingerAngle:(double)arg6 fingerCenter:(struct CGPoint)arg7 curveRadius:(double)arg8 distanceToMove:(double)arg9 onLeft:(_Bool)arg10;	// IMP=0x000000010006962c
@property(nonatomic) _Bool shouldClearFingerCircle; // @synthesize shouldClearFingerCircle=_shouldClearFingerCircle;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) double curvature; // @synthesize curvature=_curvature;
@property(nonatomic) double tailAngle; // @synthesize tailAngle=_tailAngle;
@property(nonatomic) struct CGPoint tailPoint; // @synthesize tailPoint=_tailPoint;
- (struct CGPath *)scatPath;	// IMP=0x000000010006ca0c
- (struct CGRect)scatFrame;	// IMP=0x000000010006c9cc
- (void)_drawLineOfCirclesInContext:(struct CGContext *)arg1;	// IMP=0x000000010006c6e4
- (id)_fingerCircleImage;	// IMP=0x000000010006c660
- (struct CGPath *)_newCurvedArrowPathWithIntervals:(unsigned long long)arg1;	// IMP=0x000000010006c324
- (struct CGPath *)_newStraightArrowPathWithIntervals:(unsigned long long)arg1;	// IMP=0x000000010006c03c
- (void)_addArrowHeadToPath:(struct CGPath *)arg1 baseLeftPoint:(struct CGPoint)arg2 baseRightPoint:(struct CGPoint)arg3 tipPoint:(struct CGPoint)arg4;	// IMP=0x000000010006beb4
- (struct CGPath *)_newDefaultArrowPath;	// IMP=0x000000010006be08
- (void)_fillArrowPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x000000010006bcc0
- (void)_drawFingerAtArrowHeadInContext:(struct CGContext *)arg1;	// IMP=0x000000010006b9ec
- (void)_drawGrayArrowInContext:(struct CGContext *)arg1;	// IMP=0x000000010006b18c
- (void)_addCircleWithRadius:(double)arg1 center:(struct CGPoint)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x000000010006b164
- (void)_addCircleWithRadius:(double)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x000000010006b108
- (void)_clearCircleWithRadius:(double)arg1 center:(struct CGPoint)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x000000010006b08c
- (void)_clearCircleWithRadius:(double)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x000000010006b030
- (struct CGPath *)_newGrayArrowOutlinePath;	// IMP=0x000000010006afe8
- (struct CGPath *)_newCurvedGrayArrowOutlinePath;	// IMP=0x000000010006ac38
- (struct CGPath *)_newStraightGrayArrowOutlinePath;	// IMP=0x000000010006a92c
- (void)_addGrayFingerIfNecessaryToPath:(struct CGPath *)arg1;	// IMP=0x000000010006a83c
- (void)_addGrayArrowHeadToPath:(struct CGPath *)arg1 tipAngle:(double)arg2 tipPoint:(struct CGPoint)arg3;	// IMP=0x000000010006a6a4
- (void)_addGrayArrowHeadLineToPath:(struct CGPath *)arg1 bottomPoint:(struct CGPoint)arg2 tipPoint:(struct CGPoint)arg3 sideAngle:(double)arg4 sideLength:(double)arg5 outlineThickness:(double)arg6 innerThickness:(double)arg7;	// IMP=0x000000010006a4a0
- (struct CGPath *)_arrowPath;	// IMP=0x000000010006a43c
- (struct CGPath *)_arrowPathInBoundingBoxAtOrigin;	// IMP=0x000000010006a3a0
- (void)_uncacheArrowPaths;	// IMP=0x000000010006a354
- (_Bool)_isGrayArrow;	// IMP=0x000000010006a2dc
- (void)_drawCurvedLineInIntervals:(unsigned long long)arg1 spacingBetweenIntervals:(double)arg2 drawingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010006a0ac
- (double)_distanceForPreview;	// IMP=0x0000000100069f78
- (double)_distanceForCurveWithRadius:(double)arg1 onLeft:(_Bool)arg2;	// IMP=0x0000000100069f2c
- (void)_getCurveRadius:(double *)arg1 onLeft:(_Bool *)arg2;	// IMP=0x0000000100069ec0
- (void)_drawStraightLineInIntervals:(unsigned long long)arg1 spacingBetweenIntervals:(double)arg2 drawingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100069d84
- (void)_propertyDidChange;	// IMP=0x0000000100069d0c
- (struct CGRect)_frameNeeded;	// IMP=0x0000000100069b84
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000100069a2c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000010006998c
@property(readonly, nonatomic) double actualDistanceForPreview;
- (void)setStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2;	// IMP=0x0000000100069810
- (void)dealloc;	// IMP=0x00000001000697a8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100069724

@end
