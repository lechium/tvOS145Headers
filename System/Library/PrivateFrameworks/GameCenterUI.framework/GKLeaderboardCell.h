/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, GKLeaderboardSet, GKLeaderboard, UIImageView, UILabel, UIView, NSLayoutConstraint, _UIFloatingContentView, UIColor, UIVisualEffectView, NSArray;

@interface GKLeaderboardCell : UICollectionViewCell {

	NSString* _bundleIdentifier;
	NSString* _imageName;
	GKLeaderboardSet* _leaderboardSet;
	GKLeaderboard* _leaderboard;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _countLabel;
	UIView* _overlayView;
	NSLayoutConstraint* _iconContainerHeight;
	NSLayoutConstraint* _minimumIconHeight;
	UIImageView* _fallbackIconView;
	UIView* _containerView;
	NSLayoutConstraint* _stackViewToCountLabelConstraint;
	double _stackViewToCountConstant;
	_UIFloatingContentView* _floatingView;
	UIColor* _titleLabelColor;
	UIVisualEffectView* _effectView;
	NSArray* _customBackgroundBlur;
	NSString* _dataToken;

}

@property (nonatomic,retain) UIImageView * iconView;                                            //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * countLabel;                                              //@synthesize countLabel=_countLabel - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                              //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * iconContainerHeight;                          //@synthesize iconContainerHeight=_iconContainerHeight - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * minimumIconHeight;                            //@synthesize minimumIconHeight=_minimumIconHeight - In the implementation block
@property (nonatomic,retain) UIImageView * fallbackIconView;                                    //@synthesize fallbackIconView=_fallbackIconView - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                            //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewToCountLabelConstraint;              //@synthesize stackViewToCountLabelConstraint=_stackViewToCountLabelConstraint - In the implementation block
@property (assign,nonatomic) double stackViewToCountConstant;                                   //@synthesize stackViewToCountConstant=_stackViewToCountConstant - In the implementation block
@property (nonatomic,retain) _UIFloatingContentView * floatingView;                             //@synthesize floatingView=_floatingView - In the implementation block
@property (nonatomic,retain) UIColor * titleLabelColor;                                         //@synthesize titleLabelColor=_titleLabelColor - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * effectView;                                   //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) NSArray * customBackgroundBlur;                                    //@synthesize customBackgroundBlur=_customBackgroundBlur - In the implementation block
@property (nonatomic,retain) NSString * dataToken;                                              //@synthesize dataToken=_dataToken - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                       //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * imageName;                                              //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) GKLeaderboardSet * leaderboardSet;                                 //@synthesize leaderboardSet=_leaderboardSet - In the implementation block
@property (nonatomic,retain) GKLeaderboard * leaderboard;                                       //@synthesize leaderboard=_leaderboard - In the implementation block
@property (nonatomic,readonly) UIView * popoverSourceView; 
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)updateLayout;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIView *)containerView;
-(UIVisualEffectView *)effectView;
-(void)awakeFromNib;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(_UIFloatingContentView *)floatingView;
-(void)setFloatingView:(_UIFloatingContentView *)arg1 ;
-(void)setIconView:(UIImageView *)arg1 ;
-(UIImageView *)iconView;
-(void)updateImage;
-(UIView *)popoverSourceView;
-(UILabel *)countLabel;
-(void)setContainerView:(UIView *)arg1 ;
-(GKLeaderboard *)leaderboard;
-(void)setLeaderboard:(GKLeaderboard *)arg1 ;
-(void)setLeaderboardSet:(GKLeaderboardSet *)arg1 ;
-(GKLeaderboardSet *)leaderboardSet;
-(void)setStackViewToCountConstant:(double)arg1 ;
-(void)setTitleLabelColor:(UIColor *)arg1 ;
-(void)updateRank;
-(void)updateOverlay;
-(double)stackViewToCountConstant;
-(NSLayoutConstraint *)stackViewToCountLabelConstraint;
-(UIColor *)titleLabelColor;
-(void)setCountLabel:(UILabel *)arg1 ;
-(void)setStackViewToCountLabelConstraint:(NSLayoutConstraint *)arg1 ;
-(void)configureFloatingContentView;
-(void)addVisualEffect;
-(void)setupFallbackIcon;
-(void)setCustomBackgroundBlur:(NSArray *)arg1 ;
-(UIImageView *)fallbackIconView;
-(void)updateSummary;
-(NSLayoutConstraint *)iconContainerHeight;
-(void)setDataToken:(NSString *)arg1 ;
-(NSString *)dataToken;
-(NSArray *)customBackgroundBlur;
-(void)setIconContainerHeight:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)minimumIconHeight;
-(void)setMinimumIconHeight:(NSLayoutConstraint *)arg1 ;
-(void)setFallbackIconView:(UIImageView *)arg1 ;
@end

