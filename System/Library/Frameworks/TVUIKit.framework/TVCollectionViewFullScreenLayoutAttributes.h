/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@interface TVCollectionViewFullScreenLayoutAttributes : UICollectionViewLayoutAttributes {

	double _cornerRadius;
	double _normalizedPosition;
	double _maskAmount;
	double _parallaxOffset;
	UIEdgeInsets _contentBleed;

}

@property (assign,nonatomic) double cornerRadius;                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentBleed;              //@synthesize contentBleed=_contentBleed - In the implementation block
@property (assign,nonatomic) double normalizedPosition;              //@synthesize normalizedPosition=_normalizedPosition - In the implementation block
@property (assign,nonatomic) double maskAmount;                      //@synthesize maskAmount=_maskAmount - In the implementation block
@property (assign,nonatomic) double parallaxOffset;                  //@synthesize parallaxOffset=_parallaxOffset - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(double)maskAmount;
-(double)normalizedPosition;
-(void)setMaskAmount:(double)arg1 ;
-(UIEdgeInsets)contentBleed;
-(void)setContentBleed:(UIEdgeInsets)arg1 ;
-(double)parallaxOffset;
-(void)setParallaxOffset:(double)arg1 ;
-(void)setNormalizedPosition:(double)arg1 ;
@end

