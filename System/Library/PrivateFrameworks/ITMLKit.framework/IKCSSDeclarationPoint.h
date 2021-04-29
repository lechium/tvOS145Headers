/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKCSSDeclaration.h>

@interface IKCSSDeclarationPoint : IKCSSDeclaration {

	double _value;
	unsigned long long _unit;

}

@property (assign,nonatomic) double value;                         //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) unsigned long long unit;              //@synthesize unit=_unit - In the implementation block
-(id)description;
-(id)stringValue;
-(double)value;
-(void)setValue:(double)arg1 ;
-(unsigned long long)unit;
-(id)number;
-(void)setUnit:(unsigned long long)arg1 ;
-(id)initWithParseDeclaration:(id)arg1 info:(id)arg2 ;
@end

