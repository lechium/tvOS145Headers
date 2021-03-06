/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICardKitProviderSupport.framework/SiriUICardKitProviderSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUICardKitProviderSupport/SiriUICardKitProviderSupport-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SCKPAudioMessageViewDelegate;
@class UIButton, UIImage, UIImageView;

@interface SCKPAudioMessageView : UIView {

	id<SCKPAudioMessageViewDelegate> _delegate;
	UIButton* _playButton;
	UIImage* _playImage;
	UIImage* _pauseImage;
	UIImageView* _waveformImageView;
	long long _playButtonState;

}

@property (assign,nonatomic) long long playButtonState;              //@synthesize playButtonState=_playButtonState - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_playButtonPressed:(id)arg1 ;
-(void)setPlayButtonState:(long long)arg1 ;
-(id)initWithAudioMessageURL:(id)arg1 delegate:(id)arg2 ;
-(long long)playButtonState;
@end

