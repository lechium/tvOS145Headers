/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UIFont;

@interface _MKCompassViewSizeParameter : NSObject {

	NSString* _imageNamePart;
	double _diameter;
	UIFont* _font;
	double _textOffsetFromCenter;

}

@property (nonatomic,copy) NSString * imageNamePart;                   //@synthesize imageNamePart=_imageNamePart - In the implementation block
@property (assign,nonatomic) double diameter;                          //@synthesize diameter=_diameter - In the implementation block
@property (nonatomic,retain) UIFont * font;                            //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double textOffsetFromCenter;              //@synthesize textOffsetFromCenter=_textOffsetFromCenter - In the implementation block
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(double)diameter;
-(void)setDiameter:(double)arg1 ;
-(double)textOffsetFromCenter;
-(void)setImageNamePart:(NSString *)arg1 ;
-(void)setTextOffsetFromCenter:(double)arg1 ;
-(NSString *)imageNamePart;
@end

