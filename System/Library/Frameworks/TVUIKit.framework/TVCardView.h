/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVUIKit/TVUIKit-Structs.h>
#import <TVUIKit/TVLockupView.h>

@class UIColor;

@interface TVCardView : TVLockupView {

	UIColor* _cardBackgroundColor;

}

@property (nonatomic,retain) UIColor * cardBackgroundColor;              //@synthesize cardBackgroundColor=_cardBackgroundColor - In the implementation block
+(Class)_concreteContentViewClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFocusSizeIncrease:(NSDirectionalEdgeInsets)arg1 ;
-(void)_updateAppearanceForFocusUpdateContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setCardBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)cardBackgroundColor;
@end

