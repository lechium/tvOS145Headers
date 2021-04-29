/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString, UIColor;

@interface PKPassPaymentSummaryHeaderView : UIView {

	UILabel* _titleLabel;
	UILabel* _secondaryTitleLabel;

}

@property (nonatomic,retain) NSString * primaryTitle; 
@property (nonatomic,retain) NSString * secondaryTitle; 
@property (nonatomic,retain) UIColor * color; 
+(double)preferredHeight;
+(id)_titleFont;
+(CGSize)_sizeForLabelWithText:(id)arg1 font:(id)arg2 maximumNumberOfLines:(long long)arg3 width:(double)arg4 ;
-(id)init;
-(void)dealloc;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)secondaryTitle;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setPrimaryTitle:(NSString *)arg1 ;
-(NSString *)primaryTitle;
@end
