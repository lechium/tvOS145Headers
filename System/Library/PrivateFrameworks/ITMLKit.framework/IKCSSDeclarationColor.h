/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKCSSDeclaration.h>

@class IKColor;

@interface IKCSSDeclarationColor : IKCSSDeclaration {

	long long _sourceType;
	IKColor* _color;

}

@property (assign) long long sourceType;                   //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,retain) IKColor * color;              //@synthesize color=_color - In the implementation block
+(id)_stringForColor:(id)arg1 sourceType:(long long)arg2 ;
-(id)description;
-(id)stringValue;
-(long long)sourceType;
-(IKColor *)color;
-(void)setColor:(IKColor *)arg1 ;
-(void)setSourceType:(long long)arg1 ;
-(id)initWithParseDeclaration:(id)arg1 info:(id)arg2 ;
-(id)_colorFromParseObject:(id)arg1 sourceType:(long long*)arg2 ;
-(id)_keywordKolorFromParseToken:(id)arg1 ;
-(id)_linearGradientKolorFromParseFunction:(id)arg1 ;
-(id)_kolorFromParseObject:(id)arg1 sourceType:(long long*)arg2 ;
@end

