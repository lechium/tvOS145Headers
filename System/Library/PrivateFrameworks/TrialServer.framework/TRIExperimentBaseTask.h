/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TRIBaseTask.h>
#import <libobjc.A.dylib/TRIMetricsProviding.h>

@class _PASLock, TRIExperimentDeployment;

@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding> {

	_PASLock* _lock;
	TRIExperimentDeployment* _experiment;

}

@property (nonatomic,readonly) TRIExperimentDeployment * experiment;              //@synthesize experiment=_experiment - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)tags;
-(id)metrics;
-(id)dimensions;
-(TRIExperimentDeployment *)experiment;
-(void)addMetric:(id)arg1 ;
-(id)nextTasksForRunStatus:(int)arg1 ;
-(void)logAsRollout:(BOOL)arg1 ;
-(id)initWithExperiment:(id)arg1 ;
-(int)projectIdForExperimentWithPaths:(id)arg1 ;
-(id)containerForFirstNamespaceInExperimentWithContext:(id)arg1 ;
-(void)addDimension:(id)arg1 ;
@end

