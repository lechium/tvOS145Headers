/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TRIBaseTask.h>
#import <libobjc.A.dylib/TRIRetryableTask.h>
#import <libobjc.A.dylib/TRIMetricsProviding.h>

@protocol TRITaskAttributing;
@class NSMutableArray, NSDate, NSSet, NSString, NSArray;

@interface TRIFetchMultipleExperimentNotificationsTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding> {

	NSMutableArray* _metrics;
	NSMutableArray* _nextTasks;
	NSDate* _startingFetchDateOverride;
	BOOL _rollbacksOnly;
	id<TRITaskAttributing> _taskAttributing;
	NSSet* _namespaceNames;
	int retryCount;

}

@property (assign,nonatomic) int retryCount; 
@property (nonatomic,readonly) int taskType; 
@property (nonatomic,readonly) NSString * taskName; 
@property (nonatomic,readonly) NSArray * tags; 
@property (nonatomic,copy) NSDate * startTime; 
@property (nonatomic,readonly) NSArray * dependencies; 
@property (assign,nonatomic,__weak) id<TRITaskQueueStateProviding> stateProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg1 ;
+(id)taskWithStartingFetchDateOverride:(id)arg1 namespaceNames:(id)arg2 taskAttributing:(id)arg3 rollbacksOnly:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)retryCount;
-(void)setRetryCount:(int)arg1 ;
-(NSArray *)tags;
-(unsigned long long)requiredCapabilities;
-(int)taskType;
-(id)metrics;
-(id)dimensions;
-(id)serialize;
-(NSString *)taskName;
-(id)_asPersistedTask;
-(id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2 ;
-(void)_addMetric:(id)arg1 ;
-(id)initWithStartingFetchDateOverride:(id)arg1 namespaceNames:(id)arg2 taskAttributing:(id)arg3 rollbacksOnly:(BOOL)arg4 ;
-(id)_nameForNotificationType:(int)arg1 ;
-(id)_getNextTaskForExperiment:(id)arg1 database:(id)arg2 taskQueue:(id)arg3 ;
-(void)_addNextTask:(id)arg1 ;
-(BOOL)_processExperiment:(id)arg1 experimentDatabase:(id)arg2 namespaceDatabase:(id)arg3 taskQueue:(id)arg4 paths:(id)arg5 ;
-(void)updateStatusForNamespacesWithContext:(id)arg1 ;
-(BOOL)_checkIfAnyTreatmentPresent:(id)arg1 usingContext:(id)arg2 ;
-(id)initWithStartingFetchDateOverride:(id)arg1 container:(int)arg2 team:(id)arg3 rollbacksOnly:(BOOL)arg4 withNamespaceNames:(id)arg5 ;
-(long long)nextTaskCount;
@end

