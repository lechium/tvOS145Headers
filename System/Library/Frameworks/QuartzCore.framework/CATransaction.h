/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CATransaction : NSObject
+(void)lock;
+(void)unlock;
+(void)synchronize;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(id)valueForKey:(id)arg1 ;
+(/*^block*/id)completionBlock;
+(void)activate;
+(void)begin;
+(void)commit;
+(void)activateBackground:(BOOL)arg1 ;
+(unsigned)currentState;
+(void)flush;
+(double)beginTime;
+(void)setBeginTime:(double)arg1 ;
+(BOOL)lowLatency;
+(void)setInputTime:(double)arg1 ;
+(void)setLowLatency:(BOOL)arg1 ;
+(double)inputTime;
+(id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2 ;
+(double)animationDuration;
+(void)setAnimationDuration:(double)arg1 ;
+(id)animationTimingFunction;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(BOOL)disableActions;
+(void)setDisableActions:(BOOL)arg1 ;
+(void)setBoolValue:(BOOL)arg1 forKey:(unsigned)arg2 ;
+(id)committingContexts;
+(void)setCommittingContexts:(id)arg1 ;
+(BOOL)addCommitHandler:(/*^block*/id)arg1 forPhase:(int)arg2 ;
+(void)pushAnimator:(/*^block*/id)arg1 ;
+(void)popAnimator;
+(/*^block*/id)animator;
+(void)setCommitHandler:(/*^block*/id)arg1 ;
+(int)currentPhase;
+(void)setPresentationHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
+(BOOL)animatesFromModelValues;
+(void)setAnimatesFromModelValues:(BOOL)arg1 ;
+(BOOL)disableSignPosts;
+(void)setDisableSignPosts:(BOOL)arg1 ;
+(double)commitTime;
+(void)setCommitTime:(double)arg1 ;
+(double)earliestAutomaticCommitTime;
+(void)setEarliestAutomaticCommitTime:(double)arg1 ;
+(BOOL)disableRunLoopObserverCommits;
+(void)setDisableRunLoopObserverCommits:(BOOL)arg1 ;
+(BOOL)frameStallSkipRequest;
+(void)setFrameStallSkipRequest:(BOOL)arg1 ;
+(unsigned)startFrameWithReason:(int)arg1 beginTime:(double)arg2 commitDeadline:(double)arg3 ;
+(void)finishFrameWithToken:(unsigned)arg1 ;
+(void)setFrameInputTime:(double)arg1 withToken:(unsigned)arg2 ;
+(unsigned)generateSeed;
+(void)assertInactive;
+(unsigned)registerBoolKey;
+(BOOL)boolValueForKey:(unsigned)arg1 ;
@end

