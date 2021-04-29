/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ANAnalyticsDailyDelegate.h>

@protocol ANAnalyticsSystemProtocol, ANAnalyticsAssistantProtocol, ANAnalyticsDailyProtocol;
@class NSString;

@interface ANAnalytics : NSObject <ANAnalyticsDailyDelegate> {

	id<ANAnalyticsSystemProtocol> _system;
	id<ANAnalyticsAssistantProtocol> _assistant;
	id<ANAnalyticsDailyProtocol> _dailyReporter;

}

@property (readonly) id<ANAnalyticsSystemProtocol> system;                    //@synthesize system=_system - In the implementation block
@property (readonly) id<ANAnalyticsAssistantProtocol> assistant;              //@synthesize assistant=_assistant - In the implementation block
@property (readonly) id<ANAnalyticsDailyProtocol> dailyReporter;              //@synthesize dailyReporter=_dailyReporter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
-(id<ANAnalyticsSystemProtocol>)system;
-(void)error:(long long)arg1 ;
-(id)initWithSystem:(id)arg1 assistant:(id)arg2 dailyReporter:(id)arg3 ;
-(id<ANAnalyticsAssistantProtocol>)assistant;
-(id<ANAnalyticsDailyProtocol>)dailyReporter;
-(void)dailyReport:(id)arg1 withPayload:(id)arg2 ;
-(void)announcementSent:(id)arg1 inHome:(id)arg2 withError:(long long)arg3 withTime:(double)arg4 sendType:(unsigned long long)arg5 ofGroupCount:(long long)arg6 ;
-(void)announcementReceived:(id)arg1 withTime:(double)arg2 receiveTimeType:(unsigned long long)arg3 ;
-(void)announcementPlayed:(id)arg1 withTime:(double)arg2 deadlineViolation:(double)arg3 playbackSource:(unsigned long long)arg4 ofGroupCount:(long long)arg5 ;
-(void)announcementFinishedPlaying:(id)arg1 withTime:(double)arg2 ofGroupCount:(long long)arg3 ;
-(void)announcementsExpired:(id)arg1 ofGroupCount:(long long)arg2 ;
-(void)announcementEntryAgeLimit:(id)arg1 timeExceeded:(double)arg2 ;
-(void)announcementsStorageAgeLimit:(id)arg1 ;
-(void)playbackAction:(unsigned long long)arg1 fromSource:(unsigned long long)arg2 ;
@end

