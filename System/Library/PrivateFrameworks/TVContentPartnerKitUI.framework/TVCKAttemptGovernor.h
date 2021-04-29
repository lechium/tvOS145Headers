/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVCKAttemptGovernorDelegate;
@class NSTimer;

@interface TVCKAttemptGovernor : NSObject {

	id<TVCKAttemptGovernorDelegate> _delegate;
	unsigned long long _attemptCount;
	NSTimer* _retryTimer;

}

@property (assign,nonatomic) unsigned long long attemptCount;                              //@synthesize attemptCount=_attemptCount - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * retryTimer;                                  //@synthesize retryTimer=_retryTimer - In the implementation block
@property (assign,nonatomic,__weak) id<TVCKAttemptGovernorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<TVCKAttemptGovernorDelegate>)delegate;
-(void)setDelegate:(id<TVCKAttemptGovernorDelegate>)arg1 ;
-(unsigned long long)attemptCount;
-(void)setAttemptCount:(unsigned long long)arg1 ;
-(double)_maxDelay;
-(NSTimer *)retryTimer;
-(void)setRetryTimer:(NSTimer *)arg1 ;
-(void)attemptFailed;
-(void)attemptSucceeded;
-(void)_beginAttempt;
-(unsigned long long)_maxConsecutiveAttempts;
-(unsigned long long)_numberOfFailuresNeededToReachMaxDelay;
-(double)_minDelayForFailure:(unsigned long long)arg1 ;
-(double)_maxDelayForFailure:(unsigned long long)arg1 ;
-(void)_retryTimerFired:(id)arg1 ;
-(unsigned long long)_incrementedAttemptCount;
-(BOOL)_shouldAttemptAfterFailure:(unsigned long long)arg1 ;
-(double)_delayForFailure:(unsigned long long)arg1 ;
-(double)_toleranceForDelay:(double)arg1 ;
-(void)_startTimerWithDelay:(double)arg1 tolerance:(double)arg2 ;
@end

