/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileTimer/MTTimerIntentHandler.h>
#import <libobjc.A.dylib/INDeleteTimerIntentHandling.h>

@class NSString;

@interface MTDeleteTimerIntentHandler : MTTimerIntentHandler <INDeleteTimerIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleDeleteTimer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmDeleteTimer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveTargetTimerForDeleteTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveDeleteMultipleForDeleteTimer:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_timerFromIntentTargetTimer:(id)arg1 defaultState:(long long)arg2 ;
-(id)_responseToDeleteTimerIntent:(id)arg1 withDeletedTimers:(id)arg2 error:(id)arg3 dryRun:(BOOL)arg4 ;
-(void)_deleteTimer:(id)arg1 multiple:(BOOL)arg2 dryRun:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
@end

