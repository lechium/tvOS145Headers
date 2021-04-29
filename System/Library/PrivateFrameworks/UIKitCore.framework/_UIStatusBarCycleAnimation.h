/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <UIKitCore/_UIStatusBarPersistentAnimation.h>

@class NSArray, NSMutableArray, _UIStatusBarCycleLayerAnimation, NSString;

@interface _UIStatusBarCycleAnimation : NSObject <CAAnimationDelegate, _UIStatusBarPersistentAnimation> {

	BOOL _stopsAfterReversing;
	BOOL _visible;
	NSArray* _layerAnimations;
	long long _state;
	NSArray* _stoppingLayerAnimations;
	NSMutableArray* _completionHandlers;

}

@property (assign,nonatomic) BOOL visible;                                                        //@synthesize visible=_visible - In the implementation block
@property (nonatomic,readonly) _UIStatusBarCycleLayerAnimation * mainLayerAnimation; 
@property (nonatomic,retain) NSMutableArray * completionHandlers;                                 //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,readonly) NSArray * layerAnimations;                                         //@synthesize layerAnimations=_layerAnimations - In the implementation block
@property (nonatomic,readonly) long long state;                                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL stopsAfterReversing;                                            //@synthesize stopsAfterReversing=_stopsAfterReversing - In the implementation block
@property (nonatomic,retain) NSArray * stoppingLayerAnimations;                                   //@synthesize stoppingLayerAnimations=_stoppingLayerAnimations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(long long)state;
-(void)start;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)stopWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableArray *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(void)_startAnimations;
-(void)_stopAnimations;
-(void)resumePersistentAnimation;
-(void)pausePersistentAnimation;
-(id)initWithLayerAnimations:(id)arg1 ;
-(void)setStopsAfterReversing:(BOOL)arg1 ;
-(void)setStoppingLayerAnimations:(NSArray *)arg1 ;
-(BOOL)stopsAfterReversing;
-(void)_stopStoppingAnimations;
-(_UIStatusBarCycleLayerAnimation *)mainLayerAnimation;
-(void)_sendCompletionsWithFinished:(BOOL)arg1 ;
-(NSArray *)layerAnimations;
-(NSArray *)stoppingLayerAnimations;
@end

