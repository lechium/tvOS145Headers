/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@class VCDispatchTimer, NSString;

@interface VCObject : NSObject {

	id _reportingAgent;
	VCDispatchTimer* _timeoutTimer;
	NSString* _logPrefix;
	opaque_pthread_mutex_t _mutex;

}

@property (nonatomic,retain) NSString * logPrefix;                              //@synthesize logPrefix=_logPrefix - In the implementation block
@property (assign,nonatomic) opaqueRTCReportingRef reportingAgent; 
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(NSString *)logPrefix;
-(opaqueRTCReportingRef)reportingAgent;
-(void)setReportingAgent:(opaqueRTCReportingRef)arg1 ;
-(void)startDeallocTimer;
-(void)setLogPrefix:(NSString *)arg1 ;
-(void)startTimeoutTimer;
-(void)stopTimeoutTimer;
-(void)startDeallocTimerWithTimeout:(unsigned)arg1 ;
-(void)stopTerminationTimer;
-(void)startTerminationTimer:(unsigned)arg1 ;
@end

