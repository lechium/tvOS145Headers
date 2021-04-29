/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VUIRentalExpirationLabelDelegate.h>

@class IKViewElement, VUIProductBannerLayout, _TVImageView, VUILabel, NSArray, VUIComingSoonBannerCardView, VUIFocusableTextView, VUIProductBannerCastInfoView, VUIMediaTagsView, UIView, UIFocusContainerGuide, NSString;

@interface VUIProductBannerView : UIView <VUIRentalExpirationLabelDelegate> {

	BOOL _isFocusable;
	BOOL _cardUIEnabled;
	IKViewElement* _viewElement;
	VUIProductBannerLayout* _layout;
	_TVImageView* _logoImageView;
	VUILabel* _logoTextView;
	VUILabel* _subTextView;
	VUILabel* _episodeInfoView;
	_TVImageView* _logoTextGradientView;
	_TVImageView* _coverArtImageView;
	_TVImageView* _decorationImageView;
	_TVImageView* _decorationImageGradientView;
	NSArray* _buttonViews;
	VUIComingSoonBannerCardView* _comingSoonView;
	VUIFocusableTextView* _descriptionTextView;
	VUIProductBannerCastInfoView* _castInfoView;
	VUIMediaTagsView* _tagsView;
	VUILabel* _disclaimerTextView;
	VUILabel* _promoTextView;
	VUILabel* _availabilityTextView;
	_TVImageView* _availabilityImageView;
	double _cardInsets;
	double _cardShowcaseFactor;
	UIView* _lastFocusedView;
	UIFocusContainerGuide* _containerGuide;

}

@property (assign,nonatomic) BOOL cardUIEnabled;                                        //@synthesize cardUIEnabled=_cardUIEnabled - In the implementation block
@property (nonatomic,retain) UIFocusContainerGuide * containerGuide;                    //@synthesize containerGuide=_containerGuide - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                               //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIProductBannerLayout * layout;                           //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) _TVImageView * logoImageView;                              //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,retain) VUILabel * logoTextView;                                   //@synthesize logoTextView=_logoTextView - In the implementation block
@property (nonatomic,retain) VUILabel * subTextView;                                    //@synthesize subTextView=_subTextView - In the implementation block
@property (nonatomic,retain) VUILabel * episodeInfoView;                                //@synthesize episodeInfoView=_episodeInfoView - In the implementation block
@property (nonatomic,retain) _TVImageView * logoTextGradientView;                       //@synthesize logoTextGradientView=_logoTextGradientView - In the implementation block
@property (nonatomic,retain) _TVImageView * coverArtImageView;                          //@synthesize coverArtImageView=_coverArtImageView - In the implementation block
@property (nonatomic,retain) _TVImageView * decorationImageView;                        //@synthesize decorationImageView=_decorationImageView - In the implementation block
@property (nonatomic,retain) _TVImageView * decorationImageGradientView;                //@synthesize decorationImageGradientView=_decorationImageGradientView - In the implementation block
@property (nonatomic,retain) NSArray * buttonViews;                                     //@synthesize buttonViews=_buttonViews - In the implementation block
@property (nonatomic,retain) VUIComingSoonBannerCardView * comingSoonView;              //@synthesize comingSoonView=_comingSoonView - In the implementation block
@property (nonatomic,retain) VUIFocusableTextView * descriptionTextView;                //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,retain) VUIProductBannerCastInfoView * castInfoView;               //@synthesize castInfoView=_castInfoView - In the implementation block
@property (nonatomic,retain) VUIMediaTagsView * tagsView;                               //@synthesize tagsView=_tagsView - In the implementation block
@property (nonatomic,retain) VUILabel * disclaimerTextView;                             //@synthesize disclaimerTextView=_disclaimerTextView - In the implementation block
@property (nonatomic,retain) VUILabel * promoTextView;                                  //@synthesize promoTextView=_promoTextView - In the implementation block
@property (nonatomic,retain) VUILabel * availabilityTextView;                           //@synthesize availabilityTextView=_availabilityTextView - In the implementation block
@property (nonatomic,retain) _TVImageView * availabilityImageView;                      //@synthesize availabilityImageView=_availabilityImageView - In the implementation block
@property (assign,nonatomic) BOOL isFocusable;                                          //@synthesize isFocusable=_isFocusable - In the implementation block
@property (assign,nonatomic) double cardInsets;                                         //@synthesize cardInsets=_cardInsets - In the implementation block
@property (assign,nonatomic) double cardShowcaseFactor;                                 //@synthesize cardShowcaseFactor=_cardShowcaseFactor - In the implementation block
@property (nonatomic,retain) UIView * lastFocusedView;                                  //@synthesize lastFocusedView=_lastFocusedView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VUIProductBannerLayout *)layout;
-(void)setLayout:(VUIProductBannerLayout *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(IKViewElement *)viewElement;
-(_TVImageView *)logoImageView;
-(void)setLogoImageView:(_TVImageView *)arg1 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUIFocusableTextView *)descriptionTextView;
-(void)setDescriptionTextView:(VUIFocusableTextView *)arg1 ;
-(UIView *)lastFocusedView;
-(void)setLastFocusedView:(UIView *)arg1 ;
-(UIFocusContainerGuide *)containerGuide;
-(void)setContainerGuide:(UIFocusContainerGuide *)arg1 ;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
-(VUIMediaTagsView *)tagsView;
-(void)setTagsView:(VUIMediaTagsView *)arg1 ;
-(void)setCardShowcaseFactor:(double)arg1 ;
-(void)setCardInsets:(double)arg1 ;
-(double)cardInsets;
-(BOOL)cardUIEnabled;
-(void)setCardUIEnabled:(BOOL)arg1 ;
-(NSArray *)buttonViews;
-(void)setButtonViews:(NSArray *)arg1 ;
-(_TVImageView *)decorationImageView;
-(_TVImageView *)coverArtImageView;
-(void)setIsFocusable:(BOOL)arg1 ;
-(VUIComingSoonBannerCardView *)comingSoonView;
-(void)setComingSoonView:(VUIComingSoonBannerCardView *)arg1 ;
-(void)setCoverArtImageView:(_TVImageView *)arg1 ;
-(void)setDecorationImageView:(_TVImageView *)arg1 ;
-(void)setDecorationImageGradientView:(_TVImageView *)arg1 ;
-(VUILabel *)availabilityTextView;
-(_TVImageView *)availabilityImageView;
-(void)setAvailabilityTextView:(VUILabel *)arg1 ;
-(void)setAvailabilityImageView:(_TVImageView *)arg1 ;
-(VUILabel *)disclaimerTextView;
-(void)setDisclaimerTextView:(VUILabel *)arg1 ;
-(VUILabel *)promoTextView;
-(void)setPromoTextView:(VUILabel *)arg1 ;
-(VUILabel *)logoTextView;
-(VUILabel *)subTextView;
-(VUILabel *)episodeInfoView;
-(void)setLogoTextView:(VUILabel *)arg1 ;
-(void)setSubTextView:(VUILabel *)arg1 ;
-(void)setEpisodeInfoView:(VUILabel *)arg1 ;
-(void)setLogoTextGradientView:(_TVImageView *)arg1 ;
-(VUIProductBannerCastInfoView *)castInfoView;
-(void)setCastInfoView:(VUIProductBannerCastInfoView *)arg1 ;
-(void)_tvOS_layoutSubviews;
-(_TVImageView *)logoTextGradientView;
-(_TVImageView *)decorationImageGradientView;
-(BOOL)isFocusable;
-(double)cardShowcaseFactor;
@end

