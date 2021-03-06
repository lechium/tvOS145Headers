/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _UIConstraintBasedLayoutHostingView : UIView {

	UIView* _hostedView;
	BOOL _hasAddedConstraints;

}

@property (nonatomic,retain) UIView * hostedView;              //@synthesize hostedView=_hostedView - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)updateConstraints;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(BOOL)_layoutHeightDependsOnWidth;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
-(UIView *)hostedView;
-(void)setHostedView:(UIView *)arg1 ;
-(void)constraintsDidChangeInEngine:(id)arg1 ;
-(CGSize)_layoutSizeThatFits:(CGSize)arg1 fixedAxes:(unsigned long long)arg2 ;
-(void)_setFrameWithAlignmentRect:(CGRect)arg1 ;
-(void)_layoutMetricsInvalidatedForHostedView;
-(void)_scheduleUpdateConstraintsPassAsEngineHostNeedingLayout:(BOOL)arg1 ;
-(id)initWithHostedView:(id)arg1 ;
@end

