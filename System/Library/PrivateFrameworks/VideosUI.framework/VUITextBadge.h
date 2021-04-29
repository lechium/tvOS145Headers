/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, NSAttributedString, UIImage, UIColor;

@interface VUITextBadge : UIView {

	int _textBlendMode;
	NSString* _title;
	NSAttributedString* _attributedTitle;
	double _strokeSize;
	double _cornerRadius;
	UIImage* _backgroundImage;
	unsigned long long _badgeStyle;
	UIColor* _tintColor;
	double _fontSize;
	UIEdgeInsets _badgeInsets;

}

@property (nonatomic,retain) UIColor * tintColor;                             //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) double fontSize;                                 //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedTitle;              //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (assign,nonatomic) int textBlendMode;                               //@synthesize textBlendMode=_textBlendMode - In the implementation block
@property (assign,nonatomic) double strokeSize;                               //@synthesize strokeSize=_strokeSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets badgeInsets;                        //@synthesize badgeInsets=_badgeInsets - In the implementation block
@property (assign,nonatomic) double cornerRadius;                             //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                       //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) unsigned long long badgeStyle;                   //@synthesize badgeStyle=_badgeStyle - In the implementation block
+(id)attributedTextFromString:(id)arg1 fontColor:(id)arg2 fontSize:(double)arg3 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(CGSize)_textSize;
-(id)initWithTitle:(id)arg1 tintColor:(id)arg2 fontSize:(double)arg3 cornerRadius:(double)arg4 ;
-(void)setBadgeStyle:(unsigned long long)arg1 ;
-(double)strokeSize;
-(void)setStrokeSize:(double)arg1 ;
-(id)initWithAttributedString:(id)arg1 tintColor:(id)arg2 cornerRadius:(double)arg3 ;
-(int)textBlendMode;
-(void)setTextBlendMode:(int)arg1 ;
-(UIEdgeInsets)badgeInsets;
-(void)setBadgeInsets:(UIEdgeInsets)arg1 ;
-(unsigned long long)badgeStyle;
@end

