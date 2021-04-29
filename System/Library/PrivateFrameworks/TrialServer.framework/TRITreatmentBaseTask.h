/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TRIExperimentBaseTask.h>

@protocol TRITaskAttributing;
@class NSString;

@interface TRITreatmentBaseTask : TRIExperimentBaseTask {

	NSString* _treatmentId;
	id<TRITaskAttributing> _taskAttributing;

}

@property (nonatomic,readonly) NSString * treatmentId;                              //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) id<TRITaskAttributing> taskAttributing;              //@synthesize taskAttributing=_taskAttributing - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)metrics;
-(id)dimensions;
-(NSString *)treatmentId;
-(id<TRITaskAttributing>)taskAttributing;
-(id)initWithExperiment:(id)arg1 treatmentId:(id)arg2 taskAttributing:(id)arg3 ;
@end
