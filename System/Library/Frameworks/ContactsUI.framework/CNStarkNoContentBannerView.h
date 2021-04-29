/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface CNStarkNoContentBannerView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) UILabel * subtitleLabel;                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) NSString * titleString; 
@property (nonatomic,retain) NSString * subtitleString; 
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)subtitleString;
-(void)setSubtitleString:(NSString *)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

