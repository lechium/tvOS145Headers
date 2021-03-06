/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
@class PETAggregateState, NSObject, RBSTarget, RBSAssertion, NSString, PETConfig, NSMutableDictionary;

@interface PETEventTracker2 : NSObject {

	PETAggregateState* _aggregateState;
	NSObject*<OS_dispatch_queue> _loggingQueue;
	int _loggingQueueSize;
	opaque_pthread_mutex_t _loggingQueueLock;
	BOOL _inited;
	RBSTarget* _rbsTarget;
	RBSAssertion* _rbsAssertion;
	BOOL _rbsShouldInvalidate;
	opaque_pthread_mutex_t _rbsAssertionLock;
	BOOL _isDaemon;
	BOOL _isAsyncEnabled;
	NSString* _rootDir;
	NSString* _logStoresDir;
	PETConfig* _config;
	NSMutableDictionary* _storeCache;

}

@property (assign) BOOL isAsyncEnabled;                                         //@synthesize isAsyncEnabled=_isAsyncEnabled - In the implementation block
@property (retain) NSString * rootDir;                                          //@synthesize rootDir=_rootDir - In the implementation block
@property (retain) NSString * logStoresDir;                                     //@synthesize logStoresDir=_logStoresDir - In the implementation block
@property (retain) PETConfig * config;                                          //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) PETAggregateState * aggregateState;              //@synthesize aggregateState=_aggregateState - In the implementation block
@property (retain) NSMutableDictionary * storeCache;                            //@synthesize storeCache=_storeCache - In the implementation block
+(id)sharedInstance;
+(double)roundToSigFigs:(double)arg1 sigFigs:(unsigned long long)arg2 ;
+(unsigned)typeIdForMessageName:(id)arg1 ;
+(id)defaultRootDir;
+(id)formattedTextForAggregatedMessage:(id)arg1 ;
+(id)formattedTextForUnaggregatedMessage:(id)arg1 messageGroup:(id)arg2 config:(id)arg3 ;
-(void)_init;
-(PETConfig *)config;
-(void)setConfig:(PETConfig *)arg1 ;
-(void)logMessage:(id)arg1 ;
-(id)initWithAsyncEnabled:(BOOL)arg1 ;
-(id)initForTestingWithRootDir:(id)arg1 ;
-(id)initWithRootDir:(id)arg1 config:(id)arg2 ;
-(void)_initWithRootDir:(id)arg1 config:(id)arg2 ;
-(void)_dispatchAsyncForLogging:(/*^block*/id)arg1 txnName:(const char*)arg2 ;
-(void)_runBlockWithRBSAssertion:(/*^block*/id)arg1 ;
-(void)trackScalarForMessage:(id)arg1 ;
-(void)trackScalarForMessage:(id)arg1 count:(int)arg2 ;
-(void)trackScalarForMessage:(id)arg1 updateCount:(int)arg2 ;
-(void)trackDistributionForMessage:(id)arg1 value:(double)arg2 ;
-(void)logMessage:(id)arg1 subGroup:(id)arg2 ;
-(id)_writeMessage:(id)arg1 ;
-(void)_trackScalarForMessage:(id)arg1 count:(int)arg2 overwrite:(BOOL)arg3 ;
-(void)_trackDistributionForMessage:(id)arg1 value:(double)arg2 ;
-(id)_getLogStore:(id)arg1 ;
-(void)_logMessage:(id)arg1 subGroup:(id)arg2 ;
-(void)enumerateMessageGroups:(/*^block*/id)arg1 ;
-(void)enumerateMessagesWithBlock:(/*^block*/id)arg1 clearStore:(BOOL)arg2 ;
-(void)enumerateMessagesWithBlock:(/*^block*/id)arg1 messageGroup:(id)arg2 clearStore:(BOOL)arg3 ;
-(double)_roundToSigFigs:(double)arg1 forRawMessage:(id)arg2 ;
-(void)enumerateAggregatedMessagesWithBlock:(/*^block*/id)arg1 clearStore:(BOOL)arg2 ;
-(void)clearLogStores;
-(BOOL)isAsyncEnabled;
-(void)setIsAsyncEnabled:(BOOL)arg1 ;
-(NSString *)rootDir;
-(void)setRootDir:(NSString *)arg1 ;
-(NSString *)logStoresDir;
-(void)setLogStoresDir:(NSString *)arg1 ;
-(PETAggregateState *)aggregateState;
-(NSMutableDictionary *)storeCache;
-(void)setStoreCache:(NSMutableDictionary *)arg1 ;
@end

