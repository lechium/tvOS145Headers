/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemMenuUI.framework/TVSystemMenuUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemMenuUI/TVSystemMenuUI-Structs.h>
#import <TVSystemMenuUI/TVSMBaseView.h>

@class UIImage, NSString, TVSMProgressView, TVSMCAPackageView, UIColor, _TVSMHighContrastFocusView, _TVSMButtonContentView;

@interface _TVSMButtonView : TVSMBaseView {

	BOOL _toggledOn;
	UIImage* _image;
	NSString* _imageSymbolName;
	NSString* _titleText;
	NSString* _secondaryText;
	TVSMProgressView* _progressView;
	TVSMCAPackageView* _caPackageView;
	UIColor* _titleTintColor;
	UIColor* _subtitleTintColor;
	UIColor* _symbolTintColor;
	unsigned long long _lastControlState;
	_TVSMHighContrastFocusView* _highContrastFocusView;
	_TVSMButtonContentView* _focusedContentView;
	_TVSMButtonContentView* _unfocusedContentView;

}

@property (nonatomic,readonly) unsigned long long lastControlState;                             //@synthesize lastControlState=_lastControlState - In the implementation block
@property (nonatomic,readonly) _TVSMHighContrastFocusView * highContrastFocusView;              //@synthesize highContrastFocusView=_highContrastFocusView - In the implementation block
@property (nonatomic,readonly) _TVSMButtonContentView * focusedContentView;                     //@synthesize focusedContentView=_focusedContentView - In the implementation block
@property (nonatomic,readonly) _TVSMButtonContentView * unfocusedContentView;                   //@synthesize unfocusedContentView=_unfocusedContentView - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                   //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * imageSymbolName;                                          //@synthesize imageSymbolName=_imageSymbolName - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                                            //@synthesize secondaryText=_secondaryText - In the implementation block
@property (assign,nonatomic) BOOL toggledOn;                                                    //@synthesize toggledOn=_toggledOn - In the implementation block
@property (nonatomic,retain) TVSMProgressView * progressView;                                   //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) TVSMCAPackageView * caPackageView;                                 //@synthesize caPackageView=_caPackageView - In the implementation block
@property (nonatomic,copy) UIColor * titleTintColor;                                            //@synthesize titleTintColor=_titleTintColor - In the implementation block
@property (nonatomic,copy) UIColor * subtitleTintColor;                                         //@synthesize subtitleTintColor=_subtitleTintColor - In the implementation block
@property (nonatomic,copy) UIColor * symbolTintColor;                                           //@synthesize symbolTintColor=_symbolTintColor - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(TVSMProgressView *)progressView;
-(void)setProgressView:(TVSMProgressView *)arg1 ;
-(void)updateAppearanceForLockupViewState:(unsigned long long)arg1 ;
-(NSString *)imageSymbolName;
-(void)setImageSymbolName:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 buttonStyle:(long long)arg2 ;
-(BOOL)toggledOn;
-(void)setCaPackageView:(TVSMCAPackageView *)arg1 ;
-(void)applyCollectionViewLayoutAttributes:(id)arg1 ;
-(void)setTitleTintColor:(UIColor *)arg1 ;
-(void)setSubtitleTintColor:(UIColor *)arg1 ;
-(void)setSymbolTintColor:(UIColor *)arg1 ;
-(void)setToggledOn:(BOOL)arg1 ;
-(TVSMCAPackageView *)caPackageView;
-(UIColor *)titleTintColor;
-(UIColor *)subtitleTintColor;
-(UIColor *)symbolTintColor;
-(unsigned long long)lastControlState;
-(_TVSMHighContrastFocusView *)highContrastFocusView;
-(_TVSMButtonContentView *)focusedContentView;
-(_TVSMButtonContentView *)unfocusedContentView;
@end

