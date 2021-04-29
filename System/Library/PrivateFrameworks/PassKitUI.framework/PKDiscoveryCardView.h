/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKDiscoveryCardViewDelegate;
@class PKDiscoveryCard, PKDiscoveryMedia, UIImageView, UILabel, PKDiscoveryCallToActionFooterView, UITapGestureRecognizer, PKContinuousButton, PKDiscoveryArticleLayout;

@interface PKDiscoveryCardView : UIView {

	PKDiscoveryCard* _card;
	PKDiscoveryMedia* _media;
	UIImageView* _backgroundImageView;
	UILabel* _headingLabel;
	UILabel* _titleLabel;
	UIImageView* _shadowView;
	UIImageView* _maskImageView;
	PKDiscoveryCallToActionFooterView* _ctaFooterView;
	UITapGestureRecognizer* _tapRecognizer;
	PKContinuousButton* _dismissButton;
	BOOL _removing;
	BOOL _hasSafeAreaInsetOverride;
	PKDiscoveryArticleLayout* _articleLayout;
	long long _priority;
	id<PKDiscoveryCardViewDelegate> _delegate;
	long long _displayType;
	/*^block*/id _callToActionTappedOverride;
	/*^block*/id _dismissAction;
	UIEdgeInsets _safeAreaOverrideInsets;

}

@property (nonatomic,retain) PKDiscoveryArticleLayout * articleLayout;                     //@synthesize articleLayout=_articleLayout - In the implementation block
@property (nonatomic,readonly) long long priority;                                         //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic,__weak) id<PKDiscoveryCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long displayType;                                        //@synthesize displayType=_displayType - In the implementation block
@property (assign,getter=isRemoving,nonatomic) BOOL removing;                              //@synthesize removing=_removing - In the implementation block
@property (assign,nonatomic) BOOL hasSafeAreaInsetOverride;                                //@synthesize hasSafeAreaInsetOverride=_hasSafeAreaInsetOverride - In the implementation block
@property (assign,nonatomic) UIEdgeInsets safeAreaOverrideInsets;                          //@synthesize safeAreaOverrideInsets=_safeAreaOverrideInsets - In the implementation block
@property (nonatomic,copy) id callToActionTappedOverride;                                  //@synthesize callToActionTappedOverride=_callToActionTappedOverride - In the implementation block
@property (nonatomic,copy) id dismissAction;                                               //@synthesize dismissAction=_dismissAction - In the implementation block
+(double)cornerRadius;
+(CGSize)compressedSize;
+(double)compressedWidth;
+(double)expandedHeight;
+(double)expandedWidth;
+(double)compressedHeight;
+(CGSize)expandedSize;
-(id<PKDiscoveryCardViewDelegate>)delegate;
-(void)setDelegate:(id<PKDiscoveryCardViewDelegate>)arg1 ;
-(long long)priority;
-(long long)displayType;
-(void)setRemoving:(BOOL)arg1 ;
-(void)setDisplayType:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)tapGestureRecognized:(id)arg1 ;
-(id)dismissAction;
-(void)setDismissAction:(id)arg1 ;
-(id)_titleLabelTextColor;
-(UIEdgeInsets)_currentContentInsets;
-(void)_loadImageData;
-(void)setCallToActionTappedOverride:(id)arg1 ;
-(void)setSafeAreaOverrideInsets:(UIEdgeInsets)arg1 ;
-(void)setHasSafeAreaInsetOverride:(BOOL)arg1 ;
-(PKDiscoveryArticleLayout *)articleLayout;
-(id)initWithArticleLayout:(id)arg1 displayType:(long long)arg2 dismissImage:(id)arg3 ;
-(BOOL)hasSafeAreaInsetOverride;
-(UIEdgeInsets)safeAreaOverrideInsets;
-(void)setArticleLayout:(PKDiscoveryArticleLayout *)arg1 ;
-(id)callToActionTappedOverride;
-(BOOL)isRemoving;
-(id)initWithArticleLayout:(id)arg1 displayType:(long long)arg2 dismissImage:(id)arg3 callToActionTappedOverride:(/*^block*/id)arg4 ;
-(id)_headingLabelFont;
-(id)_headingLabelTextColor;
-(id)_dismissButtonTintColor;
-(void)_dismissButtonPressed:(id)arg1 ;
-(void)_updateForDisplayType;
-(double)_yOffsetToHeadingLabel;
@end

