/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol INResumeTimerIntentHandling <NSObject>
@optional
-(void)confirmResumeTimer:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveTargetTimerForResumeTimer:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveResumeMultipleForResumeTimer:(id)arg1 withCompletion:(/*^block*/id)arg2;

@required
-(void)handleResumeTimer:(id)arg1 completion:(/*^block*/id)arg2;

@end
