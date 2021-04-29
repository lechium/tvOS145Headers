/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CAAction.h>

@class CAAnimation, UIViewPropertyAnimator, UIView;

@interface _UIViewAdditiveAnimationAction : NSObject <CAAction> {

	CAAnimation* _pendingAnimation;
	UIViewPropertyAnimator* _animationObject;
	UIView* _view;

}

@property (nonatomic,retain,readonly) CAAnimation * pendingAnimation;                        //@synthesize pendingAnimation=_pendingAnimation - In the implementation block
@property (nonatomic,retain,readonly) UIViewPropertyAnimator * animationObject;              //@synthesize animationObject=_animationObject - In the implementation block
@property (nonatomic,retain,readonly) UIView * view;                                         //@synthesize view=_view - In the implementation block
-(void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3 ;
-(UIView *)view;
-(UIViewPropertyAnimator *)animationObject;
-(CAAnimation *)pendingAnimation;
-(id)initWithPendingAnimation:(id)arg1 withAnimationObject:(id)arg2 forView:(id)arg3 ;
@end

