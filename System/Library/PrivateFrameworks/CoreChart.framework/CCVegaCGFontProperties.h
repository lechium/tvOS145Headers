/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CCVegaCGFontProperties : NSObject {

	NSString* fontFamily;
	NSString* fontSize;
	NSString* fontVariant;
	NSString* fontWeight;
	NSString* fontStyle;
	NSString* lineHeight;

}

@property (nonatomic,retain) NSString * fontFamily; 
@property (nonatomic,retain) NSString * fontSize; 
@property (nonatomic,retain) NSString * fontStyle; 
@property (nonatomic,retain) NSString * fontWeight; 
@property (nonatomic,retain) NSString * fontVariant; 
@property (nonatomic,retain) NSString * lineHeight; 
-(NSString *)fontSize;
-(void)setFontSize:(NSString *)arg1 ;
-(NSString *)fontFamily;
-(void)setFontFamily:(NSString *)arg1 ;
-(NSString *)fontStyle;
-(void)setFontStyle:(NSString *)arg1 ;
-(NSString *)fontVariant;
-(void)setFontVariant:(NSString *)arg1 ;
-(NSString *)fontWeight;
-(void)setFontWeight:(NSString *)arg1 ;
-(NSString *)lineHeight;
-(void)setLineHeight:(NSString *)arg1 ;
-(id)initWithCSSFontString:(id)arg1 ;
@end

