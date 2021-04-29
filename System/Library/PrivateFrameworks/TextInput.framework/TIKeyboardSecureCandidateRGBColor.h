/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TIKeyboardSecureCandidateRGBColor : NSObject <NSCopying, NSSecureCoding> {

	double _colorR;
	double _colorG;
	double _colorB;
	double _colorA;

}

@property (assign,nonatomic) double colorR;              //@synthesize colorR=_colorR - In the implementation block
@property (assign,nonatomic) double colorG;              //@synthesize colorG=_colorG - In the implementation block
@property (assign,nonatomic) double colorB;              //@synthesize colorB=_colorB - In the implementation block
@property (assign,nonatomic) double colorA;              //@synthesize colorA=_colorA - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)blackColor;
+(id)whiteColor;
+(id)lightGrayColor;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4 ;
-(double)colorR;
-(void)setColorR:(double)arg1 ;
-(double)colorG;
-(void)setColorG:(double)arg1 ;
-(double)colorB;
-(void)setColorB:(double)arg1 ;
-(double)colorA;
-(void)setColorA:(double)arg1 ;
@end

