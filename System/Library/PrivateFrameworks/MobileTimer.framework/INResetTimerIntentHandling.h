/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol INResetTimerIntentHandling <NSObject>
@optional
-(void)confirmResetTimer:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveTargetTimerForResetTimer:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveResetMultipleForResetTimer:(id)arg1 withCompletion:(/*^block*/id)arg2;

@required
-(void)handleResetTimer:(id)arg1 completion:(/*^block*/id)arg2;

@end

