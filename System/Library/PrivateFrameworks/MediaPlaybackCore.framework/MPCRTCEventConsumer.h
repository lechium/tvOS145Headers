/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPCPlaybackEngineEventConsumer.h>

@protocol OS_dispatch_group, OS_dispatch_queue, MPCPlaybackEngineEventStreamSubscription;
@class RTCReporting, NSObject, NSString;

@interface MPCRTCEventConsumer : NSObject <MPCPlaybackEngineEventConsumer> {

	RTCReporting* _rtcSessionPlaybackSession;
	RTCReporting* _rtcSessionPlaybackItem;
	NSObject*<OS_dispatch_group> _rtcSessionGroup;
	NSObject*<OS_dispatch_queue> _rtcSessionQueue;
	id<MPCPlaybackEngineEventStreamSubscription> _subscription;

}

@property (nonatomic,readonly) id<MPCPlaybackEngineEventStreamSubscription> subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
+(id)dateFormatter;
-(id)init;
-(id<MPCPlaybackEngineEventStreamSubscription>)subscription;
-(void)subscribeToEventStream:(id)arg1 ;
-(void)unsubscribeFromEventStream:(id)arg1 ;
-(void)_sendReportForSessionSummary:(id)arg1 event:(id)arg2 ;
-(void)_sendReportForItemSummary:(id)arg1 event:(id)arg2 ;
-(void)_sendReportForQueueLoad:(id)arg1 event:(id)arg2 ;
-(void)_sendReportForPlaybackSessionStart:(id)arg1 event:(id)arg2 withType:(long long)arg3 ;
-(void)_sendReportForItemAssetLoad:(id)arg1 event:(id)arg2 ;
-(void)_generateSessionStartIfNeeded:(id)arg1 forItemEvent:(id)arg2 ;
-(id)_payloadForItemSummary:(id)arg1 fromItemEvent:(id)arg2 ;
-(id)_networkSignalPayload:(id)arg1 ;
-(void)_sendReportWithToken:(id)arg1 category:(long long)arg2 type:(long long)arg3 payload:(id)arg4 ;
-(id)_payloadForSessionSummary:(id)arg1 fromSessionEndEvent:(id)arg2 ;
-(void)_sendReportWithSession:(id)arg1 category:(long long)arg2 type:(long long)arg3 payload:(id)arg4 ;
-(long long)_sessionStartReportingType:(id)arg1 forItemEvent:(id)arg2 ;
-(id)_payloadForSessionStart:(id)arg1 fromEvent:(id)arg2 ;
-(void)_getReportingSessionWithToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_payloadForQueueLoad:(id)arg1 fromQueueLoadEndEvent:(id)arg2 ;
-(id)_payloadForItemAssetLoad:(id)arg1 fromItemEvent:(id)arg2 ;
-(id)_payloadForItemSummary:(id)arg1 fromEvent:(id)arg2 ;
-(id)_networkType:(id)arg1 fromEvent:(id)arg2 ;
-(id)_perceivedItemStartTime:(id)arg1 fromItemStartEvent:(id)arg2 ;
-(id)_rtcSessionInfoWithToken:(id)arg1 ;
-(id)_rtcUserInfo;
-(void)_logReportSendResult:(BOOL)arg1 category:(long long)arg2 payload:(id)arg3 error:(id)arg4 ;
@end

