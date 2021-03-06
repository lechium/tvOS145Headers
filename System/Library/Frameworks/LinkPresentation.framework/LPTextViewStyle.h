/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, UIFont, NSString, LPPointUnit, LPGlyphStyle, LPPadding;

@interface LPTextViewStyle : NSObject <NSCopying> {

	BOOL _shouldScaleMaximumLinesWithDynamicType;
	unsigned _maximumLines;
	UIColor* _color;
	UIFont* _font;
	NSString* _compositingFilter;
	long long _textAlignment;
	LPPointUnit* _firstLineLeading;
	LPPointUnit* _lastLineDescent;
	LPGlyphStyle* _leadingGlyph;
	LPPadding* _padding;
	LPPointUnit* _paragraphSpacing;

}

@property (nonatomic,retain) UIColor * color;                                          //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIFont * font;                                            //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) NSString * compositingFilter;                             //@synthesize compositingFilter=_compositingFilter - In the implementation block
@property (assign,nonatomic) unsigned maximumLines;                                    //@synthesize maximumLines=_maximumLines - In the implementation block
@property (assign,nonatomic) long long textAlignment;                                  //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,retain) LPPointUnit * firstLineLeading;                           //@synthesize firstLineLeading=_firstLineLeading - In the implementation block
@property (nonatomic,retain) LPPointUnit * lastLineDescent;                            //@synthesize lastLineDescent=_lastLineDescent - In the implementation block
@property (nonatomic,retain) LPGlyphStyle * leadingGlyph;                              //@synthesize leadingGlyph=_leadingGlyph - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * padding;                             //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) LPPointUnit * paragraphSpacing;                           //@synthesize paragraphSpacing=_paragraphSpacing - In the implementation block
@property (assign,nonatomic) BOOL shouldScaleMaximumLinesWithDynamicType;              //@synthesize shouldScaleMaximumLinesWithDynamicType=_shouldScaleMaximumLinesWithDynamicType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(LPPointUnit *)paragraphSpacing;
-(void)setParagraphSpacing:(LPPointUnit *)arg1 ;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)compositingFilter;
-(void)setCompositingFilter:(NSString *)arg1 ;
-(LPPadding *)padding;
-(id)initWithPlatform:(long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)textAlignment;
-(LPPointUnit *)firstLineLeading;
-(LPPointUnit *)lastLineDescent;
-(id)adjustedForString:(id)arg1 ;
-(LPGlyphStyle *)leadingGlyph;
-(unsigned)maximumLines;
-(void)setMaximumLines:(unsigned)arg1 ;
-(void)setFirstLineLeading:(LPPointUnit *)arg1 ;
-(void)setLastLineDescent:(LPPointUnit *)arg1 ;
-(void)setLeadingGlyph:(LPGlyphStyle *)arg1 ;
-(BOOL)shouldScaleMaximumLinesWithDynamicType;
-(void)setShouldScaleMaximumLinesWithDynamicType:(BOOL)arg1 ;
@end

