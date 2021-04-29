/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SSCoalescingQueue, NSDictionary;

@interface SSMetricsTimingDefaults : NSObject {

	BOOL _runningTests;
	SSCoalescingQueue* _updateQueue;
	NSDictionary* _cachedValues;

}

@property (nonatomic,retain) SSCoalescingQueue * updateQueue;                      //@synthesize updateQueue=_updateQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedValues;                          //@synthesize cachedValues=_cachedValues - In the implementation block
@property (assign,getter=isRunningTests,nonatomic) BOOL runningTests;              //@synthesize runningTests=_runningTests - In the implementation block
@property (readonly) NSDictionary * values; 
@property (readonly) double sessionDurationLoadURL; 
@property (readonly) double samplingPercentageUsersLoadURL; 
@property (readonly) double samplingPercentageCachedResponsesLoadURL; 
@property (readonly) double sessionDurationPageRender; 
@property (readonly) double samplingPercentageUsersPageRender; 
+(id)sharedInstance;
+(id)sharedInstanceWithSessionDelegate:(id)arg1 ;
-(NSDictionary *)values;
-(void)update;
-(BOOL)isRunningTests;
-(id)initWithSessionDelegate:(id)arg1 ;
-(NSDictionary *)cachedValues;
-(void)setCachedValues:(NSDictionary *)arg1 ;
-(SSCoalescingQueue *)updateQueue;
-(double)sessionDurationLoadURL;
-(double)samplingPercentageUsersLoadURL;
-(double)samplingPercentageCachedResponsesLoadURL;
-(double)sessionDurationPageRender;
-(double)samplingPercentageUsersPageRender;
-(void)setUpdateQueue:(SSCoalescingQueue *)arg1 ;
-(void)setRunningTests:(BOOL)arg1 ;
@end

