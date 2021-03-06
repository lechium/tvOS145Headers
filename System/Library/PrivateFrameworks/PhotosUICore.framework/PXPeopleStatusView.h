/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton, UIStackView, NSArray, NSLayoutConstraint, UIActivityIndicatorView;

@interface PXPeopleStatusView : UIView {

	UILabel* _titleLabel;
	UILabel* _countLabel;
	UILabel* _descriptionLabel;
	UIButton* _continueButton;
	unsigned long long _viewState;
	UIStackView* _stackView;
	NSArray* _constraints;
	NSLayoutConstraint* _stackViewY;
	NSLayoutConstraint* _continueButtonBottom;
	UIActivityIndicatorView* _activityIndicator;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) UIStackView * stackView;                                  //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                    //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewY;                          //@synthesize stackViewY=_stackViewY - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * continueButtonBottom;                //@synthesize continueButtonBottom=_continueButtonBottom - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * countLabel;                                   //@synthesize countLabel=_countLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;                             //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIButton * continueButton;                                //@synthesize continueButton=_continueButton - In the implementation block
@property (assign,nonatomic) unsigned long long viewState;                             //@synthesize viewState=_viewState - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                               //@synthesize contentInsets=_contentInsets - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)constraints;
-(void)commonInit;
-(UIEdgeInsets)contentInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)viewState;
-(void)setViewState:(unsigned long long)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)_createViews;
-(UILabel *)descriptionLabel;
-(id)_goButtonBackgroundImageWithColor:(id)arg1 ;
-(UILabel *)countLabel;
-(UIButton *)continueButton;
-(void)setContinueButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)stackViewY;
-(void)setStackViewY:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)continueButtonBottom;
-(void)setContinueButtonBottom:(NSLayoutConstraint *)arg1 ;
@end

