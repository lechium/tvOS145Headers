/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TRIBaseTask.h>
#import <libobjc.A.dylib/TRITask.h>

@class NSMutableSet, NSString, NSArray, NSDate;

@interface TRIPostUpgradeCleanupTask : TRIBaseTask <TRITask> {

	NSMutableSet* _invalidExperimentDeployments;

}

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
+(id)task;
+(id)parseFromData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)taskType;
-(id)serialize;
-(id)_asPersistedTask;
-(id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2 ;
-(BOOL)_validateRolloutDescriptorsWithNamespaceCompatibilityVersions:(id)arg1 usingPaths:(id)arg2 ;
-(BOOL)_validateExperimentDescriptorsWithNamespaceCompatibilityVersions:(id)arg1 database:(id)arg2 ;
-(BOOL)_validateDynamicNamespaceRolloutsWithDatabase:(id)arg1 usingPaths:(id)arg2 ;
-(id)_nextTasksForRunStatus:(int)arg1 ;
@end

