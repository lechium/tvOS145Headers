/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVCAudioStreamDelegate <NSObject>
@optional
-(void)streamDidInterruptionBegin:(id)arg1;
-(void)streamDidInterruptionEnd:(id)arg1;
-(void)streamDidServerDie:(id)arg1;
-(void)streamDidStop:(id)arg1;
-(void)stream:(id)arg1 didPause:(BOOL)arg2 error:(id)arg3;
-(void)stream:(id)arg1 didResume:(BOOL)arg2 error:(id)arg3;
-(void)stream:(id)arg1 didStartSynchronizer:(BOOL)arg2 error:(id)arg3;
-(void)streamDidRTPTimeOut:(id)arg1;
-(void)streamDidRTCPTimeOut:(id)arg1;
-(void)stream:(id)arg1 didReceiveDTMFEventWithDigit:(char)arg2;
-(void)stream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
-(void)stream:(id)arg1 updateInputFrequencyLevel:(id)arg2;
-(void)stream:(id)arg1 updateOutputFrequencyLevel:(id)arg2;

@required
-(void)stream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;

@end
