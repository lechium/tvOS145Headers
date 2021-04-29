/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class VUILabel, VUITextBadgeView, VUIProgressView, UIView, CALayer, NSArray, VUIOverlayLayout, IKViewElement;

@interface VUIOverlayView : UIView {

	BOOL _hasPageControlDisplayedOnTop;
	VUILabel* _titleLabel;
	VUITextBadgeView* _textBadge;
	VUIProgressView* _progressView;
	UIView* _gradientView;
	CALayer* _gradientLayer;
	NSArray* _badgeViewWrappers;
	VUIOverlayLayout* _overlayLayout;
	IKViewElement* _viewElement;
	IKViewElement* _titleElement;
	IKViewElement* _textBadgeElement;

}

@property (nonatomic,retain) IKViewElement * viewElement;                    //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * titleElement;                   //@synthesize titleElement=_titleElement - In the implementation block
@property (nonatomic,retain) IKViewElement * textBadgeElement;               //@synthesize textBadgeElement=_textBadgeElement - In the implementation block
@property (assign,nonatomic) BOOL hasPageControlDisplayedOnTop;              //@synthesize hasPageControlDisplayedOnTop=_hasPageControlDisplayedOnTop - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUITextBadgeView * textBadge;                   //@synthesize textBadge=_textBadge - In the implementation block
@property (nonatomic,retain) VUIProgressView * progressView;                 //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIView * gradientView;                          //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) CALayer * gradientLayer;                        //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,copy) NSArray * badgeViewWrappers;                      //@synthesize badgeViewWrappers=_badgeViewWrappers - In the implementation block
@property (nonatomic,retain) VUIOverlayLayout * overlayLayout;               //@synthesize overlayLayout=_overlayLayout - In the implementation block
+(BOOL)_hasPageControlDisplayedOnTopOfOverlayElement:(id)arg1 ;
+(id)overlayViewFromElement:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3 ;
+(id)overlayViewFromMediaItem:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3 ;
-(void)reset;
-(void)layoutSubviews;
-(VUILabel *)titleLabel;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(CALayer *)gradientLayer;
-(void)setGradientLayer:(CALayer *)arg1 ;
-(IKViewElement *)viewElement;
-(VUIProgressView *)progressView;
-(UIView *)gradientView;
-(void)setGradientView:(UIView *)arg1 ;
-(void)setProgressView:(VUIProgressView *)arg1 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setOverlayLayout:(VUIOverlayLayout *)arg1 ;
-(VUITextBadgeView *)textBadge;
-(VUIOverlayLayout *)overlayLayout;
-(void)setTextBadge:(VUITextBadgeView *)arg1 ;
-(void)setHasPageControlDisplayedOnTop:(BOOL)arg1 ;
-(NSArray *)badgeViewWrappers;
-(void)setTitleElement:(IKViewElement *)arg1 ;
-(void)setTextBadgeElement:(IKViewElement *)arg1 ;
-(void)setBadgeViewWrappers:(NSArray *)arg1 ;
-(IKViewElement *)titleElement;
-(IKViewElement *)textBadgeElement;
-(BOOL)hasPageControlDisplayedOnTop;
@end

