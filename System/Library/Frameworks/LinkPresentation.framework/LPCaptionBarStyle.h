/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class LPImageViewStyle, LPCaptionBarAccessoryStyle, LPVerticalTextStackViewStyle, LPPointUnit, LPAudioPlayButtonStyle, LPPadding, LPButtonStyle, UIColor;

@interface LPCaptionBarStyle : NSObject {

	LPImageViewStyle* _leadingIcon;
	LPImageViewStyle* _trailingIcon;
	LPCaptionBarAccessoryStyle* _leadingAccessory;
	LPCaptionBarAccessoryStyle* _trailingAccessory;
	LPVerticalTextStackViewStyle* _textStack;
	LPPointUnit* _minimumWidth;
	LPImageViewStyle* _placeholderIcon;
	LPAudioPlayButtonStyle* _playButton;
	LPPadding* _playButtonPadding;
	LPButtonStyle* _button;
	UIColor* _backgroundColor;

}

@property (nonatomic,readonly) LPImageViewStyle * leadingIcon;                              //@synthesize leadingIcon=_leadingIcon - In the implementation block
@property (nonatomic,readonly) LPImageViewStyle * trailingIcon;                             //@synthesize trailingIcon=_trailingIcon - In the implementation block
@property (nonatomic,readonly) LPCaptionBarAccessoryStyle * leadingAccessory;               //@synthesize leadingAccessory=_leadingAccessory - In the implementation block
@property (nonatomic,readonly) LPCaptionBarAccessoryStyle * trailingAccessory;              //@synthesize trailingAccessory=_trailingAccessory - In the implementation block
@property (nonatomic,readonly) LPVerticalTextStackViewStyle * textStack;                    //@synthesize textStack=_textStack - In the implementation block
@property (nonatomic,retain) LPPointUnit * minimumWidth;                                    //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (nonatomic,readonly) LPImageViewStyle * placeholderIcon;                          //@synthesize placeholderIcon=_placeholderIcon - In the implementation block
@property (nonatomic,readonly) LPAudioPlayButtonStyle * playButton;                         //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * playButtonPadding;                        //@synthesize playButtonPadding=_playButtonPadding - In the implementation block
@property (nonatomic,retain) LPButtonStyle * button;                                        //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(LPButtonStyle *)button;
-(void)setButton:(LPButtonStyle *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(LPPointUnit *)minimumWidth;
-(void)setMinimumWidth:(LPPointUnit *)arg1 ;
-(LPAudioPlayButtonStyle *)playButton;
-(LPImageViewStyle *)leadingIcon;
-(LPImageViewStyle *)trailingIcon;
-(id)leftIcon;
-(id)rightIcon;
-(LPCaptionBarAccessoryStyle *)leadingAccessory;
-(LPCaptionBarAccessoryStyle *)trailingAccessory;
-(id)initWithPlatform:(long long)arg1 sizeClass:(unsigned long long)arg2 ;
-(id)leftAccessory;
-(id)rightAccessory;
-(LPVerticalTextStackViewStyle *)textStack;
-(LPImageViewStyle *)placeholderIcon;
-(LPPadding *)playButtonPadding;
@end

