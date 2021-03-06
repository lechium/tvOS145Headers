/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSAttributedString, UIColor, NSNumber;

@interface LPCaptionPresentationProperties : NSObject {

	NSString* _text;
	NSAttributedString* _attributedText;
	UIColor* _color;
	double _textScale;
	NSNumber* _maximumNumberOfLines;

}

@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) UIColor * color;                                //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double textScale;                               //@synthesize textScale=_textScale - In the implementation block
@property (nonatomic,retain) NSNumber * maximumNumberOfLines;                //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
-(id)init;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(NSNumber *)maximumNumberOfLines;
-(void)setMaximumNumberOfLines:(NSNumber *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(double)textScale;
-(void)setTextScale:(double)arg1 ;
@end

