/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class UILabel, UIImageView, UIImage;

@interface PKPaymentSetupTableViewCell : PKTableViewCell {

	UILabel* _betaLabel;
	UIImageView* _cardImageView;
	UIImageView* _iconImageView;
	long long _thumbnailType;
	BOOL _showBetaBadge;
	UIImage* _thumbnail;

}

@property (nonatomic,readonly) UIImage * thumbnail;              //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) BOOL showBetaBadge;                 //@synthesize showBetaBadge=_showBetaBadge - In the implementation block
+(CGSize)defaultImageViewSize;
-(void)prepareForReuse;
-(UIImage *)thumbnail;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setThumbnail:(id)arg1 type:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setShowBetaBadge:(BOOL)arg1 ;
-(BOOL)showBetaBadge;
@end

