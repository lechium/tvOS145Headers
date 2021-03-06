/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantUI/AssistantUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SiriUIBackgroundBlurView, SiriUIVisualEffectView, UIImageView;

@interface AFUISiriEyesFreeView : UIView {

	SiriUIBackgroundBlurView* _backdropView;
	SiriUIVisualEffectView* _eyesFreeEffectView;
	UIImageView* _eyesFreeLogoView;
	long long _eyesFreeMode;

}

@property (nonatomic,readonly) long long eyesFreeMode;              //@synthesize eyesFreeMode=_eyesFreeMode - In the implementation block
-(id)backdropView;
-(id)initWithFrame:(CGRect)arg1 eyesFreeMode:(long long)arg2 ;
-(void)_configureEyesFreePresentation:(long long)arg1 ;
-(long long)eyesFreeMode;
@end

