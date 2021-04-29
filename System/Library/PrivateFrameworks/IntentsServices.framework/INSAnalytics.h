/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, INSAnalyticsDataSource;
@class NSObject, NSHashTable;

@interface INSAnalytics : NSObject {

	NSObject*<OS_dispatch_queue> _observerQueue;
	id<INSAnalyticsDataSource> _dataSource;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSHashTable * observers;                                   //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic,__weak) id<INSAnalyticsDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(id)sharedAnalytics;
-(id)_init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id<INSAnalyticsDataSource>)dataSource;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)setDataSource:(id<INSAnalyticsDataSource>)arg1 ;
-(void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(BOOL)arg3 ;
-(id)contextDictionaryForCommand:(id)arg1 ;
-(id)contextDictionaryForError:(id)arg1 ;
@end

