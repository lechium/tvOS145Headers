/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RPClientProtocol <NSObject>
@required
-(oneway void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2;
-(oneway void)recordingTimerDidUpdate:(id)arg1;
-(oneway void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2;
-(oneway void)captureHandlerWithAudioSample:(id)arg1 bufferType:(long long)arg2;
-(oneway void)recordingLockInterrupted:(id)arg1;
-(oneway void)recordingDidPause;
-(oneway void)shouldResumeSessionType:(id)arg1;
-(oneway void)updateScreenRecordingStateWithCurrentState:(id)arg1;
-(oneway void)updateBroadcastURL:(id)arg1;
-(oneway void)updateBroadcastServiceInfo:(id)arg1;

@end

