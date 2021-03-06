/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FBSSceneTransitionContext.h>

@class NSDictionary, UISClickAttribution;

@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext

@property (assign,setter=_setLifecycleActionType:,getter=_lifecycleActionType,nonatomic) unsigned long long lifecycleActionType; 
@property (nonatomic,retain) NSDictionary * payload; 
@property (assign,nonatomic) BOOL forTesting; 
@property (assign,nonatomic) BOOL safeMode; 
@property (assign,nonatomic) double userLaunchEventTime; 
@property (assign,nonatomic) double execTime; 
@property (assign,nonatomic) unsigned long long signpostID; 
@property (assign,nonatomic) BOOL shouldTakeKeyboardFocus; 
@property (assign,nonatomic) BOOL waitForBackgroundTaskCompletion; 
@property (nonatomic,retain) UISClickAttribution * clickAttribution; 
@property (assign,nonatomic) long long statusBarAnimation; 
@property (assign,nonatomic) BOOL disableTouchCancellationOnRotation; 
-(NSDictionary *)payload;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(unsigned long long)signpostID;
-(void)setSignpostID:(unsigned long long)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(BOOL)isUISubclass;
-(void)setWaitForBackgroundTaskCompletion:(BOOL)arg1 ;
-(double)execTime;
-(BOOL)waitForBackgroundTaskCompletion;
-(void)setExecTime:(double)arg1 ;
-(BOOL)forTesting;
-(UISClickAttribution *)clickAttribution;
-(void)setClickAttribution:(UISClickAttribution *)arg1 ;
-(void)setStatusBarAnimation:(long long)arg1 ;
-(void)setForTesting:(BOOL)arg1 ;
-(BOOL)safeMode;
-(void)setSafeMode:(BOOL)arg1 ;
-(double)userLaunchEventTime;
-(void)setUserLaunchEventTime:(double)arg1 ;
-(BOOL)shouldTakeKeyboardFocus;
-(void)setShouldTakeKeyboardFocus:(BOOL)arg1 ;
-(long long)statusBarAnimation;
-(BOOL)disableTouchCancellationOnRotation;
-(void)setDisableTouchCancellationOnRotation:(BOOL)arg1 ;
-(void)_setLifecycleActionType:(unsigned long long)arg1 ;
-(unsigned long long)_lifecycleActionType;
@end

