/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol CRKCardSectionView <NSObject>
@property (nonatomic,copy) NSString * cardSectionViewIdentifier; 
@property (assign,nonatomic,__weak) UIView*<CRKComposableView> composedSuperview; 
@required
+(CGSize*)sizeThatFitsCardSection:(id)arg1 boundingSize:(CGSize)arg2;
-(CGSize*)sizeThatFits:(CGSize)arg1;
-(void)removeFromComposedSuperview;
-(NSString *)cardSectionViewIdentifier;
-(void)setCardSectionViewIdentifier:(id)arg1;
-(UIView*<CRKComposableView>)composedSuperview;
-(void)setComposedSuperview:(id)arg1;

@end

