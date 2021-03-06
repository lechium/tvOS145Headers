/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor;

@interface _UIScrollViewScrollIndicator : UIView {

	BOOL _expandedForDirectManipulation;
	unsigned long long _type;
	long long _style;
	UIView* _roundedFillView;
	UIColor* _foregroundColor;

}

@property (nonatomic,retain) UIView * roundedFillView;                        //@synthesize roundedFillView=_roundedFillView - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                       //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (assign,nonatomic) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long style;                                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL expandedForDirectManipulation;              //@synthesize expandedForDirectManipulation=_expandedForDirectManipulation - In the implementation block
+(double)_expandedIndicatorDimension;
+(double)indicatorDimension;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(UIColor *)foregroundColor;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_colorForStyle:(long long)arg1 ;
-(void)setRoundedFillView:(UIView *)arg1 ;
-(UIView *)roundedFillView;
-(void)_layoutFillViewAnimated:(BOOL)arg1 ;
-(BOOL)expandedForDirectManipulation;
-(CGRect)_offsetFillViewRectForExpandedState:(CGRect)arg1 ;
-(void)setExpandedForDirectManipulation:(BOOL)arg1 ;
@end

