/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSettingKit/TVSettingKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel;

@interface TSKBadgeView : UIView {

	long long _badgeNumber;
	NSString* _badgeString;
	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;                     //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) long long badgeNumber;               //@synthesize badgeNumber=_badgeNumber - In the implementation block
@property (nonatomic,retain) NSString * badgeString;              //@synthesize badgeString=_badgeString - In the implementation block
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)badgeNumber;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(NSString *)badgeString;
-(void)setBadgeString:(NSString *)arg1 ;
-(void)setBadgeNumber:(long long)arg1 ;
@end

