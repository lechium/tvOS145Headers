/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface TVCKBackgroundShelfWrappingView : UIView {

	UIView* _shelfView;
	UIView* _backgroundView;
	UIView* _relatedView;
	double _height;

}

@property (nonatomic,retain) UIView * shelfView;                   //@synthesize shelfView=_shelfView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * relatedView;                 //@synthesize relatedView=_relatedView - In the implementation block
@property (assign,nonatomic) double height;                        //@synthesize height=_height - In the implementation block
-(double)height;
-(void)setHeight:(double)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)setShelfView:(UIView *)arg1 ;
-(UIView *)shelfView;
-(void)setRelatedView:(UIView *)arg1 ;
-(UIView *)relatedView;
-(void)setBackgroundView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_transitionFromView:(id)arg1 toView:(id)arg2 crossfade:(BOOL)arg3 ;
-(void)setRelatedView:(id)arg1 animated:(BOOL)arg2 ;
@end

