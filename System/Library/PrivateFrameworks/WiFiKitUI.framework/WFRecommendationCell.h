/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UILabel;

@interface WFRecommendationCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (assign,nonatomic,__weak) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end

