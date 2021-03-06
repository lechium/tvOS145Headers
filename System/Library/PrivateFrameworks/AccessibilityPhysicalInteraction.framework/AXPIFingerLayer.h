/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@protocol AXPIFingerAppearanceDelegate;
@interface AXPIFingerLayer : CAShapeLayer {

	BOOL _isSelected;
	BOOL _pressed;
	unsigned long long _shape;
	id<AXPIFingerAppearanceDelegate> _appearanceDelegate;
	CGRect _outerFrame;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;                                         //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                                           //@synthesize pressed=_pressed - In the implementation block
@property (assign,nonatomic) unsigned long long shape;                                                //@synthesize shape=_shape - In the implementation block
@property (assign,nonatomic,__weak) id<AXPIFingerAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
@property (nonatomic,readonly) CGRect outerFrame;                                                     //@synthesize outerFrame=_outerFrame - In the implementation block
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(unsigned long long)shape;
-(void)setShape:(unsigned long long)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)isPressed;
-(id<AXPIFingerAppearanceDelegate>)appearanceDelegate;
-(void)setAppearanceDelegate:(id<AXPIFingerAppearanceDelegate>)arg1 ;
-(id)initWithAppearanceDelegate:(id)arg1 ;
-(CGRect)outerFrame;
@end

