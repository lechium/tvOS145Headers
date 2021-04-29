/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface _TVSUITextAlertHeaderView : UICollectionViewCell {

	UILabel* _titleLabel;
	NSLayoutConstraint* _titleLabelLeadingConstraint;
	NSString* _title;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)_textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabelLeadingConstant:(double)arg1 ;
@end
