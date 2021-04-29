/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIKBRenderEffect.h>

@class NSString, UIKBGradient;

@interface UIKBShadowEffect : NSObject <UIKBRenderEffect> {

	NSString* _colorName;
	double _weight;
	CGSize _offset;
	UIEdgeInsets _insets;
	UIEdgeInsets _concaveInsets;

}

@property (assign,nonatomic) CGSize offset;                           //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                     //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets concaveInsets;              //@synthesize concaveInsets=_concaveInsets - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL renderUnder; 
@property (nonatomic,readonly) SEL renderSelector; 
@property (assign,nonatomic) double weight;                           //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) BOOL usesRGBColors; 
@property (nonatomic,readonly) UIKBGradient * gradient; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)effectWithColor:(id)arg1 offset:(CGSize)arg2 insets:(UIEdgeInsets)arg3 weight:(double)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(BOOL)isValid;
-(double)weight;
-(void)setWeight:(double)arg1 ;
-(CGSize)offset;
-(void)setOffset:(CGSize)arg1 ;
-(CGColorRef)CGColor;
-(UIKBGradient *)gradient;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)insets;
-(BOOL)renderUnder;
-(SEL)renderSelector;
-(BOOL)usesRGBColors;
-(id)initWithColor:(id)arg1 offset:(CGSize)arg2 insets:(UIEdgeInsets)arg3 weight:(double)arg4 ;
-(UIEdgeInsets)concaveInsets;
-(void)setConcaveInsets:(UIEdgeInsets)arg1 ;
@end
