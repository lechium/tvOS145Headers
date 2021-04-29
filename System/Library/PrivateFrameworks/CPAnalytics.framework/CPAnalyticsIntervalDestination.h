/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CPAnalytics/CPAnalyticsDashboardDestination.h>

@class NSSet;

@interface CPAnalyticsIntervalDestination : CPAnalyticsDashboardDestination {

	NSSet* _trackedIntervalNames;
	NSSet* _ignoredIntervalNames;

}

@property (nonatomic,readonly) NSSet * trackedIntervalNames;              //@synthesize trackedIntervalNames=_trackedIntervalNames - In the implementation block
@property (nonatomic,readonly) NSSet * ignoredIntervalNames;              //@synthesize ignoredIntervalNames=_ignoredIntervalNames - In the implementation block
-(void)processEvent:(id)arg1 ;
-(void)updateWithConfig:(id)arg1 ;
-(id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2 ;
-(void)sendDashboardIntervalEventForEvent:(id)arg1 ;
-(id)_intervalNamesForKey:(id)arg1 inConfiguration:(id)arg2 ;
-(void)_handleEvent:(id)arg1 withUnknownIntervalName:(id)arg2 ;
-(NSSet *)trackedIntervalNames;
-(NSSet *)ignoredIntervalNames;
@end

