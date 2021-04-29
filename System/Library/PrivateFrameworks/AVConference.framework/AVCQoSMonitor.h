/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, AVCQoSMonitorDelegate;
@class NSObject, AVConferenceXPCClient, NSMutableArray, NSMutableDictionary, NSArray;

@interface AVCQoSMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _stateQueue;
	id<AVCQoSMonitorDelegate> _delegate;
	AVConferenceXPCClient* _connection;
	NSMutableArray* _registeredStreamTokens;
	NSMutableDictionary* _reportingIntervals;

}

@property (assign,nonatomic,__weak) id<AVCQoSMonitorDelegate> delegate; 
@property (nonatomic,readonly) NSArray * streamTokens;                               //@synthesize registeredStreamTokens=_registeredStreamTokens - In the implementation block
-(void)dealloc;
-(id<AVCQoSMonitorDelegate>)delegate;
-(void)setDelegate:(id<AVCQoSMonitorDelegate>)arg1 ;
-(void)registerBlocksForNotifications;
-(void)deregisterBlocksForNotifications;
-(void)terminateConnection;
-(BOOL)generateInvalidStreamTokenWithError:(id*)arg1 ;
-(id)initWithStreamToken:(long long)arg1 queue:(id)arg2 error:(id*)arg3 ;
-(void)requestQoSReport;
-(id)registerStreamToken:(long long)arg1 ;
-(long long)reportingIntervalForStreamToken:(long long)arg1 ;
-(NSArray *)streamTokens;
@end

