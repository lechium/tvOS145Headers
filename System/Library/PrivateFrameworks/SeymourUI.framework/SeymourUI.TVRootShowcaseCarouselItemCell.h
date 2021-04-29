/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourUI/SeymourUI-Structs.h>
#import <SeymourUI/SeymourUI.TVFocusableCollectionViewCell.h>

@class NSArray, UILabel;

@interface SeymourUI.TVRootShowcaseCarouselItemCell : SeymourUI.TVFocusableCollectionViewCell {

	 delegate;
	 onElementAppearance;
	 onElementDisappearance;
	 onVisibleBoundsChange;
	 onImpressionableBoundsChange;
	 layout;
	 carouselItemDelegate;
	 artworkView;
	 avPlayer;
	 avPlayerLayer;
	 blurView;
	 buttonStackView;
	 textStackView;
	 captionLabel;
	 titleLabel;
	 subtitleLabel;
	 focusContainerGuide;
	 buttonWidthConstraint;
	 startWorkoutActions;
	 buttons;

}

@property (readonly,nonatomic) CGSize intrinsicContentSize; 
@property (readonly,nonatomic) BOOL canBecomeFocused; 
@property (readonly,nonatomic) NSArray * preferredFocusEnvironments; 
@property (readonly,nonatomic) UILabel * accessibilityCaptionLabel; 
@property (readonly,nonatomic) UILabel * accessibilityTitleLabel; 
@property (readonly,nonatomic) UILabel * accessibilitySubtitleLabel; 
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(BOOL)canBecomeFocused;
-(NSArray *)preferredFocusEnvironments;
-(UILabel *)accessibilityTitleLabel;
-(UILabel *)accessibilitySubtitleLabel;
-(UILabel *)accessibilityCaptionLabel;
-(void)handleTappedStartWorkoutButton:(id)arg1 ;
-(void)restartVideo;
@end

