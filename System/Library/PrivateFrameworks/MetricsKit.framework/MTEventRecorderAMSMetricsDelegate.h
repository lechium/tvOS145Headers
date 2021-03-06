/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTEventRecorderDelegate.h>

@protocol AMSBagProtocol, OS_os_transaction;
@class NSString, AMSPromise, NSMutableDictionary, NSObject;

@interface MTEventRecorderAMSMetricsDelegate : NSObject <MTEventRecorderDelegate> {

	BOOL _monitorsLifecycleEvents;
	BOOL _transactionEnabled;
	BOOL _flushTimerEnabled;
	BOOL _personalizedWithItunesAccount;
	NSString* _containerId;
	long long _flushMode;
	double _flushTimeInterval;
	long long _maximumBatchSize;
	id<AMSBagProtocol> _amsBag;
	AMSPromise* _metricsBagPromise;
	NSMutableDictionary* _amsMetricsByTopic;
	NSMutableDictionary* _periodicQueuesByTopic;
	long long _numberOfPendingEvents;
	NSObject*<OS_os_transaction> _transaction;

}

@property (nonatomic,retain) NSString * containerId;                                           //@synthesize containerId=_containerId - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> amsBag;                                        //@synthesize amsBag=_amsBag - In the implementation block
@property (nonatomic,retain) AMSPromise * metricsBagPromise;                                   //@synthesize metricsBagPromise=_metricsBagPromise - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * amsMetricsByTopic;                          //@synthesize amsMetricsByTopic=_amsMetricsByTopic - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * periodicQueuesByTopic;                      //@synthesize periodicQueuesByTopic=_periodicQueuesByTopic - In the implementation block
@property (assign,nonatomic) long long numberOfPendingEvents;                                  //@synthesize numberOfPendingEvents=_numberOfPendingEvents - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;                         //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) BOOL monitorsLifecycleEvents;                                     //@synthesize monitorsLifecycleEvents=_monitorsLifecycleEvents - In the implementation block
@property (assign,getter=isTransactionEnabled,nonatomic) BOOL transactionEnabled;              //@synthesize transactionEnabled=_transactionEnabled - In the implementation block
@property (assign,nonatomic) long long flushMode;                                              //@synthesize flushMode=_flushMode - In the implementation block
@property (assign,nonatomic) double flushTimeInterval;                                         //@synthesize flushTimeInterval=_flushTimeInterval - In the implementation block
@property (assign,getter=isFlushTimerEnabled,nonatomic) BOOL flushTimerEnabled;                //@synthesize flushTimerEnabled=_flushTimerEnabled - In the implementation block
@property (assign,nonatomic) long long maximumBatchSize;                                       //@synthesize maximumBatchSize=_maximumBatchSize - In the implementation block
@property (assign,nonatomic) BOOL personalizedWithItunesAccount;                               //@synthesize personalizedWithItunesAccount=_personalizedWithItunesAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)amsMetricsObjectCache;
-(NSObject*<OS_os_transaction>)transaction;
-(void)_beginTransaction;
-(NSString *)containerId;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(long long)maximumBatchSize;
-(void)setMaximumBatchSize:(long long)arg1 ;
-(void)setFlushTimerEnabled:(BOOL)arg1 ;
-(BOOL)isFlushTimerEnabled;
-(void)_endTransaction;
-(id)flushUnreportedEvents;
-(void)setContainerId:(NSString *)arg1 ;
-(BOOL)monitorsLifecycleEvents;
-(void)setMonitorsLifecycleEvents:(BOOL)arg1 ;
-(id)initWithContainerId:(id)arg1 amsBag:(id)arg2 ;
-(id)sendMethod;
-(void)setFlushTimeInterval:(double)arg1 ;
-(NSMutableDictionary *)amsMetricsByTopic;
-(id)amsContainerIdForTopic:(id)arg1 ;
-(id<AMSBagProtocol>)amsBag;
-(NSMutableDictionary *)periodicQueuesByTopic;
-(void)setPeriodicQueuesByTopic:(NSMutableDictionary *)arg1 ;
-(void)_flushEvents:(id)arg1 topic:(id)arg2 ;
-(id)_recordEvent:(id)arg1 toTopic:(id)arg2 ;
-(BOOL)personalizedWithItunesAccount;
-(id)lookupItunesAccount:(id)arg1 ;
-(id)activeItunesAccount;
-(id)amsMetricsForTopic:(id)arg1 ;
-(long long)numberOfPendingEvents;
-(void)setNumberOfPendingEvents:(long long)arg1 ;
-(id)periodicQueueForTopic:(id)arg1 ;
-(id)_sortedEventsFromBatch:(id)arg1 ;
-(id)recordEvent:(id)arg1 toTopic:(id)arg2 ;
-(id)initWithContainerId:(id)arg1 profileName:(id)arg2 profileVersion:(id)arg3 ;
-(void)setTransactionEnabled:(BOOL)arg1 ;
-(void)setFlushMode:(long long)arg1 ;
-(BOOL)isTransactionEnabled;
-(long long)flushMode;
-(double)flushTimeInterval;
-(void)setPersonalizedWithItunesAccount:(BOOL)arg1 ;
-(void)setAmsBag:(id<AMSBagProtocol>)arg1 ;
-(AMSPromise *)metricsBagPromise;
-(void)setMetricsBagPromise:(AMSPromise *)arg1 ;
-(void)setAmsMetricsByTopic:(NSMutableDictionary *)arg1 ;
@end

