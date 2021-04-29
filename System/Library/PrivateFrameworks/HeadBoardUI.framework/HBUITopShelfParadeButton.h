/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HeadBoardUI/HeadBoardUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/_UIFloatingContentViewDelegate.h>

@class UIImageView, UILabel, NSProgress, _UIFloatingContentView, UIVisualEffectView, UIStackView, HBUITopShelfParadeButtonProgressView, HBUITopShelfParadeButtonIndeterminateProgressView, NSString;

@interface HBUITopShelfParadeButton : UIControl <_UIFloatingContentViewDelegate> {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	NSProgress* _installApplicationProgress;
	_UIFloatingContentView* _floatingContentView;
	UIVisualEffectView* _backgroundVisualEffectView;
	UIStackView* _titleImageContentView;
	HBUITopShelfParadeButtonProgressView* _progressView;
	HBUITopShelfParadeButtonIndeterminateProgressView* _indeterminateProgressView;

}

@property (nonatomic,readonly) _UIFloatingContentView * floatingContentView;                                               //@synthesize floatingContentView=_floatingContentView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * backgroundVisualEffectView;                                            //@synthesize backgroundVisualEffectView=_backgroundVisualEffectView - In the implementation block
@property (nonatomic,readonly) UIStackView * titleImageContentView;                                                        //@synthesize titleImageContentView=_titleImageContentView - In the implementation block
@property (nonatomic,readonly) HBUITopShelfParadeButtonProgressView * progressView;                                        //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) HBUITopShelfParadeButtonIndeterminateProgressView * indeterminateProgressView;              //@synthesize indeterminateProgressView=_indeterminateProgressView - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                                                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSProgress * installApplicationProgress;                                                      //@synthesize installApplicationProgress=_installApplicationProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)_currentControlState;
-(BOOL)_canHandlePresses:(id)arg1 ;
-(HBUITopShelfParadeButtonProgressView *)progressView;
-(_UIFloatingContentView *)floatingContentView;
-(NSProgress *)installApplicationProgress;
-(void)setInstallApplicationProgress:(NSProgress *)arg1 ;
-(void)_updateViewColors;
-(void)_updateBackgroundMaterial;
-(UIVisualEffectView *)backgroundVisualEffectView;
-(UIStackView *)titleImageContentView;
-(HBUITopShelfParadeButtonIndeterminateProgressView *)indeterminateProgressView;
@end

