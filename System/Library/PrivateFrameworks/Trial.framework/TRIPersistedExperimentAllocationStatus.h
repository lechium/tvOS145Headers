/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TRIPBMessage.h>

@class TRIPersistedAllocationCommon, NSString, NSMutableArray;

@interface TRIPersistedExperimentAllocationStatus : TRIPBMessage

@property (nonatomic,retain) TRIPersistedAllocationCommon * common; 
@property (assign,nonatomic) BOOL hasCommon; 
@property (nonatomic,copy) NSString * experimentId; 
@property (assign,nonatomic) BOOL hasExperimentId; 
@property (assign,nonatomic) int deploymentId; 
@property (assign,nonatomic) BOOL hasDeploymentId; 
@property (nonatomic,copy) NSString * treatmentId; 
@property (assign,nonatomic) BOOL hasTreatmentId; 
@property (nonatomic,retain) NSMutableArray * namespaceArray; 
@property (nonatomic,readonly) unsigned long long namespaceArray_Count; 
+(id)descriptor;
@end

