/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIFocusSoundPlayer;
@interface _UIFocusSoundGenerator : NSObject {

	id<_UIFocusSoundPlayer> _focusSoundPlayer;

}

@property (nonatomic,readonly) id<_UIFocusSoundPlayer> focusSoundPlayer;              //@synthesize focusSoundPlayer=_focusSoundPlayer - In the implementation block
+(void)registerURL:(id)arg1 forIdentifier:(id)arg2 ;
+(id)defaultGenerator;
+(void)_uiktest_unregisterURLForIdentifier:(id)arg1 ;
-(void)playSoundForFocusUpdateInContext:(id)arg1 ;
-(id)initWithFocusSoundPlayer:(id)arg1 ;
-(id<_UIFocusSoundPlayer>)focusSoundPlayer;
@end

