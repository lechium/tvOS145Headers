/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HeadBoardUI/HeadBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIView, HBUITopShelfParadeActionsView, UIImageView, _HBUITopShelfTextContentRatingWrapperView, HBUITopShelfParadeButton;

@interface HBUITopShelfParadeItemDetailsView : UIView {

	UILabel* _summaryLabel;
	UILabel* _namedAttributesLabel;
	UILabel* _genreLabel;
	UILabel* _yearLabel;
	UILabel* _durationLabel;
	UILabel* _gameControllerLabel;
	UILabel* _rottenTomatoesRatingLabel;
	UILabel* _commonSenseRatingLabel;
	UIView* _videoResolutionHDBadgeView;
	UIView* _videoResolution4KBadgeView;
	UIView* _videoColorSpaceHDRBadgeView;
	UIView* _videoColorSpaceDolbyVisionBadgeView;
	UIView* _audioDolbyAtmosBadgeView;
	UIView* _audioTranscriptionClosedCaptioningBadgeView;
	UIView* _audioTranscriptionSDHBadgeView;
	UIView* _audioDescriptionBadgeView;
	UILabel* _termsAndConditionsLabel;
	HBUITopShelfParadeActionsView* _actionsView;
	UIImageView* _contentRatingBadgeImageView;
	_HBUITopShelfTextContentRatingWrapperView* _contentRatingTextWrapperView;

}

@property (nonatomic,readonly) HBUITopShelfParadeActionsView * actionsView;                                           //@synthesize actionsView=_actionsView - In the implementation block
@property (nonatomic,readonly) UIImageView * contentRatingBadgeImageView;                                             //@synthesize contentRatingBadgeImageView=_contentRatingBadgeImageView - In the implementation block
@property (nonatomic,readonly) _HBUITopShelfTextContentRatingWrapperView * contentRatingTextWrapperView;              //@synthesize contentRatingTextWrapperView=_contentRatingTextWrapperView - In the implementation block
@property (nonatomic,readonly) HBUITopShelfParadeButton * primaryActionButton; 
@property (nonatomic,readonly) HBUITopShelfParadeButton * secondaryActionButton; 
@property (nonatomic,readonly) UILabel * summaryLabel;                                                                //@synthesize summaryLabel=_summaryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * namedAttributesLabel;                                                        //@synthesize namedAttributesLabel=_namedAttributesLabel - In the implementation block
@property (nonatomic,readonly) UILabel * genreLabel;                                                                  //@synthesize genreLabel=_genreLabel - In the implementation block
@property (nonatomic,readonly) UILabel * yearLabel;                                                                   //@synthesize yearLabel=_yearLabel - In the implementation block
@property (nonatomic,readonly) UILabel * durationLabel;                                                               //@synthesize durationLabel=_durationLabel - In the implementation block
@property (nonatomic,readonly) UILabel * gameControllerLabel;                                                         //@synthesize gameControllerLabel=_gameControllerLabel - In the implementation block
@property (nonatomic,readonly) UILabel * rottenTomatoesRatingLabel;                                                   //@synthesize rottenTomatoesRatingLabel=_rottenTomatoesRatingLabel - In the implementation block
@property (nonatomic,readonly) UILabel * commonSenseRatingLabel;                                                      //@synthesize commonSenseRatingLabel=_commonSenseRatingLabel - In the implementation block
@property (nonatomic,readonly) UIView * videoResolutionHDBadgeView;                                                   //@synthesize videoResolutionHDBadgeView=_videoResolutionHDBadgeView - In the implementation block
@property (nonatomic,readonly) UIView * videoResolution4KBadgeView;                                                   //@synthesize videoResolution4KBadgeView=_videoResolution4KBadgeView - In the implementation block
@property (nonatomic,readonly) UIView * videoColorSpaceHDRBadgeView;                                                  //@synthesize videoColorSpaceHDRBadgeView=_videoColorSpaceHDRBadgeView - In the implementation block
@property (nonatomic,readonly) UIView * videoColorSpaceDolbyVisionBadgeView;                                          //@synthesize videoColorSpaceDolbyVisionBadgeView=_videoColorSpaceDolbyVisionBadgeView - In the implementation block
@property (nonatomic,readonly) UIView * audioDolbyAtmosBadgeView;                                                     //@synthesize audioDolbyAtmosBadgeView=_audioDolbyAtmosBadgeView - In the implementation block
@property (nonatomic,readonly) UIView * audioTranscriptionClosedCaptioningBadgeView;                                  //@synthesize audioTranscriptionClosedCaptioningBadgeView=_audioTranscriptionClosedCaptioningBadgeView - In the implementation block
@property (nonatomic,readonly) UIView * audioTranscriptionSDHBadgeView;                                               //@synthesize audioTranscriptionSDHBadgeView=_audioTranscriptionSDHBadgeView - In the implementation block
@property (nonatomic,readonly) UIView * audioDescriptionBadgeView;                                                    //@synthesize audioDescriptionBadgeView=_audioDescriptionBadgeView - In the implementation block
@property (nonatomic,readonly) UILabel * termsAndConditionsLabel;                                                     //@synthesize termsAndConditionsLabel=_termsAndConditionsLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(HBUITopShelfParadeActionsView *)actionsView;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(UILabel *)summaryLabel;
-(HBUITopShelfParadeButton *)secondaryActionButton;
-(HBUITopShelfParadeButton *)primaryActionButton;
-(void)updateContentRating:(id)arg1 ;
-(UILabel *)namedAttributesLabel;
-(UILabel *)genreLabel;
-(UILabel *)yearLabel;
-(UILabel *)durationLabel;
-(UILabel *)gameControllerLabel;
-(UILabel *)rottenTomatoesRatingLabel;
-(UILabel *)commonSenseRatingLabel;
-(UIView *)videoResolutionHDBadgeView;
-(UIView *)videoResolution4KBadgeView;
-(UIView *)videoColorSpaceHDRBadgeView;
-(UIView *)videoColorSpaceDolbyVisionBadgeView;
-(UIView *)audioDolbyAtmosBadgeView;
-(UIView *)audioTranscriptionClosedCaptioningBadgeView;
-(UIView *)audioTranscriptionSDHBadgeView;
-(UIView *)audioDescriptionBadgeView;
-(UILabel *)termsAndConditionsLabel;
-(UIImageView *)contentRatingBadgeImageView;
-(_HBUITopShelfTextContentRatingWrapperView *)contentRatingTextWrapperView;
@end

