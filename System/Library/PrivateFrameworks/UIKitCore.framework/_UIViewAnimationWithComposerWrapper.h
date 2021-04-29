/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIIntervalAnimating, UIViewAnimationComposing;
@interface _UIViewAnimationWithComposerWrapper : NSObject {

	id<UIIntervalAnimating> _animation;
	id<UIViewAnimationComposing> _composer;

}

@property (nonatomic,retain) id<UIIntervalAnimating> animation;                  //@synthesize animation=_animation - In the implementation block
@property (nonatomic,retain) id<UIViewAnimationComposing> composer;              //@synthesize composer=_composer - In the implementation block
+(id)instanceWithAnimation:(id)arg1 composer:(id)arg2 ;
-(id<UIIntervalAnimating>)animation;
-(void)setAnimation:(id<UIIntervalAnimating>)arg1 ;
-(void)setComposer:(id<UIViewAnimationComposing>)arg1 ;
-(id<UIViewAnimationComposing>)composer;
@end
