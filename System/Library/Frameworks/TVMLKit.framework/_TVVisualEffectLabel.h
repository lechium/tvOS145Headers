/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, _TVLabel;

@interface _TVVisualEffectLabel : UIView {

	UIVisualEffectView* _visualEffectView;
	_TVLabel* _label;

}

@property (nonatomic,readonly) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) _TVLabel * label;                                     //@synthesize label=_label - In the implementation block
-(_TVLabel *)label;
-(void)setLabel:(_TVLabel *)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithEffect:(id)arg1 ;
-(void)setMarqueeRunning:(BOOL)arg1 ;
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)transferLayoutStylesFromElement:(id)arg1 ;
-(UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1 ;
@end

