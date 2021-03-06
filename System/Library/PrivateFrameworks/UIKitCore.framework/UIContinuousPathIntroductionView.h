/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBTutorialModalDisplay.h>

@class AVPlayerLooper, AVQueuePlayer, UIView, UILabel, UIButton, NSArray, AVPlayerLayer, NSLayoutConstraint;

@interface UIContinuousPathIntroductionView : UIKBTutorialModalDisplay {

	CGSize _videoSize;
	double _textMargin;
	double _paddingAdjust;
	AVPlayerLooper* _playerLooper;
	AVQueuePlayer* _player;
	UIView* _textVideoContainer;
	UILabel* _landscapeTextBody;
	UIView* _keyboardView;
	UIButton* _landscapeButton;
	NSArray* _portraitConstraints;
	NSArray* _landscapeConstraints;
	AVPlayerLayer* _videoLayer;
	NSLayoutConstraint* _videoWidth;
	NSLayoutConstraint* _videoHeight;

}

@property (nonatomic,retain) UIView * textVideoContainer;                   //@synthesize textVideoContainer=_textVideoContainer - In the implementation block
@property (nonatomic,retain) UILabel * landscapeTextBody;                   //@synthesize landscapeTextBody=_landscapeTextBody - In the implementation block
@property (nonatomic,retain) UIView * keyboardView;                         //@synthesize keyboardView=_keyboardView - In the implementation block
@property (nonatomic,retain) UIButton * landscapeButton;                    //@synthesize landscapeButton=_landscapeButton - In the implementation block
@property (nonatomic,retain) NSArray * portraitConstraints;                 //@synthesize portraitConstraints=_portraitConstraints - In the implementation block
@property (nonatomic,retain) NSArray * landscapeConstraints;                //@synthesize landscapeConstraints=_landscapeConstraints - In the implementation block
@property (nonatomic,retain) AVPlayerLayer * videoLayer;                    //@synthesize videoLayer=_videoLayer - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * videoWidth;               //@synthesize videoWidth=_videoWidth - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * videoHeight;              //@synthesize videoHeight=_videoHeight - In the implementation block
-(AVPlayerLayer *)videoLayer;
-(void)setVideoLayer:(AVPlayerLayer *)arg1 ;
-(NSLayoutConstraint *)videoWidth;
-(NSLayoutConstraint *)videoHeight;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSArray *)portraitConstraints;
-(NSArray *)landscapeConstraints;
-(void)setPortraitConstraints:(NSArray *)arg1 ;
-(void)setLandscapeConstraints:(NSArray *)arg1 ;
-(id)initWithKeyboardAppearance:(long long)arg1 ;
-(UILabel *)landscapeTextBody;
-(void)setupConstraintData;
-(UIView *)textVideoContainer;
-(UIView *)keyboardView;
-(void)setVideoWidth:(NSLayoutConstraint *)arg1 ;
-(void)setVideoHeight:(NSLayoutConstraint *)arg1 ;
-(void)updateVideoLayerWithNewVideo:(BOOL)arg1 ;
-(UIButton *)landscapeButton;
-(void)extraButtonTapAction;
-(id)_introductionMovieAssetURL;
-(id)mediaContents;
-(id)textTitleDescriptions;
-(id)textBodyDescriptions;
-(double)mediaLayoutWidthAdjustment;
-(long long)textBodyMaxLines;
-(void)setTextVideoContainer:(UIView *)arg1 ;
-(void)setLandscapeTextBody:(UILabel *)arg1 ;
-(void)setKeyboardView:(UIView *)arg1 ;
-(void)setLandscapeButton:(UIButton *)arg1 ;
@end

