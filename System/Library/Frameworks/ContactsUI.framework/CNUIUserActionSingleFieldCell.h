/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSLayoutConstraint;

@interface CNUIUserActionSingleFieldCell : UITableViewCell {

	UILabel* _titleLabel;
	NSLayoutConstraint* _titleLabelTopConstraint;
	NSLayoutConstraint* _titleLabelBottomConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * titleLabelTopConstraint;                 //@synthesize titleLabelTopConstraint=_titleLabelTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelBottomConstraint;              //@synthesize titleLabelBottomConstraint=_titleLabelBottomConstraint - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)updateFonts;
-(void)viewWillMoveToSuperview:(id)arg1 ;
-(NSLayoutConstraint *)titleLabelTopConstraint;
-(NSLayoutConstraint *)titleLabelBottomConstraint;
-(void)setTitleLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLabelBottomConstraint:(NSLayoutConstraint *)arg1 ;
@end

