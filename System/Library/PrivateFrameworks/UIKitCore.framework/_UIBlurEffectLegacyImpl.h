/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIBlurEffectImpl.h>

@class UIColor, UIBlurEffect;

@interface _UIBlurEffectLegacyImpl : _UIBlurEffectImpl {

	long long _style;
	UIColor* _tintColor;
	BOOL _invertAutomaticStyle;
	UIBlurEffect* _effect;

}

@property (assign,nonatomic) UIBlurEffect * effect;              //@synthesize effect=_effect - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)style;
-(UIBlurEffect *)effect;
-(void)setEffect:(UIBlurEffect *)arg1 ;
-(id)tintColor;
-(id)initWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(BOOL)arg3 ;
-(BOOL)invertAutomaticStyle;
-(BOOL)canProvideVibrancyEffect;
-(void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3 ;
-(id)implementationForUserInterfaceStyle:(long long)arg1 ;
-(void)appendDescriptionTo:(id)arg1 ;
@end
