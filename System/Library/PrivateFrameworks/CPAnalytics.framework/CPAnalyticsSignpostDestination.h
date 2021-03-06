/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CPAnalytics/CPAnalyticsDestination.h>

@class CPAnalytics, NSMutableIndexSet, NSString;

@interface CPAnalyticsSignpostDestination : NSObject <CPAnalyticsDestination> {

	CPAnalytics* _cpAnalyticsInstance;
	NSMutableIndexSet* _startedSignpostIDs;

}

@property (assign,nonatomic,__weak) CPAnalytics * cpAnalyticsInstance;              //@synthesize cpAnalyticsInstance=_cpAnalyticsInstance - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * startedSignpostIDs;              //@synthesize startedSignpostIDs=_startedSignpostIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)processEvent:(id)arg1 ;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(void)_trackSignpostsStartForEvent:(id)arg1 ;
-(void)_checkSignpostsEndForEvent:(id)arg1 ;
-(void)_sendCPAnalyticsEvent:(id)arg1 withPayload:(id)arg2 withDuration:(double)arg3 ;
-(CPAnalytics *)cpAnalyticsInstance;
-(void)setCpAnalyticsInstance:(CPAnalytics *)arg1 ;
-(NSMutableIndexSet *)startedSignpostIDs;
@end

