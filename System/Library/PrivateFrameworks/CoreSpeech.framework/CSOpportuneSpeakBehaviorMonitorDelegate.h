/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSOpportuneSpeakBehaviorMonitorDelegate <NSObject>
@required
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 audioProviderUUID:(id)arg3 option:(id)arg4;
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 audioProviderUUID:(id)arg3 successfully:(BOOL)arg4 option:(id)arg5;
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
-(void)opportuneSpeakBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;

@end

