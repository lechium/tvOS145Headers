/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSArray;

@interface HMUserActionPrediction : NSObject <HMFLogging, HMFObject, NSSecureCoding> {

	NSUUID* _predictionTargetUUID;
	NSUUID* _targetServiceUUID;
	unsigned long long _predictionType;
	double _predictionScore;
	NSUUID* _targetGroupUUID;
	unsigned long long _targetGroupType;

}

@property (copy,readonly) NSUUID * targetGroupUUID;                               //@synthesize targetGroupUUID=_targetGroupUUID - In the implementation block
@property (readonly) unsigned long long targetGroupType;                          //@synthesize targetGroupType=_targetGroupType - In the implementation block
@property (copy,readonly) NSUUID * predictionTargetUUID;                          //@synthesize predictionTargetUUID=_predictionTargetUUID - In the implementation block
@property (copy,readonly) NSUUID * targetServiceUUID;                             //@synthesize targetServiceUUID=_targetServiceUUID - In the implementation block
@property (readonly) unsigned long long predictionType;                           //@synthesize predictionType=_predictionType - In the implementation block
@property (readonly) double predictionScore;                                      //@synthesize predictionScore=_predictionScore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)logCategory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(BOOL)isEqualIgnoringScore:(id)arg1 ;
-(NSString *)privateDescription;
-(NSArray *)attributeDescriptions;
-(unsigned long long)predictionType;
-(NSUUID *)predictionTargetUUID;
-(double)predictionScore;
-(id)initWithPredictionTargetUUID:(id)arg1 predictionType:(unsigned long long)arg2 predictionScore:(double)arg3 ;
-(NSUUID *)targetServiceUUID;
-(id)initWithPredictionTargetUUID:(id)arg1 targetServiceUUID:(id)arg2 predictionType:(unsigned long long)arg3 predictionScore:(double)arg4 ;
-(id)initWithPredictionTargetUUID:(id)arg1 targetServiceUUID:(id)arg2 targetGroupUUID:(id)arg3 targetGroupType:(unsigned long long)arg4 predictionType:(unsigned long long)arg5 predictionScore:(double)arg6 ;
-(BOOL)isEqual:(id)arg1 ignoreScore:(BOOL)arg2 ignoreGroupProperties:(BOOL)arg3 ;
-(NSUUID *)targetGroupUUID;
-(unsigned long long)targetGroupType;
-(id)initWithPredictionTargetUUID:(id)arg1 targetServiceUUID:(id)arg2 targetServiceGroupUUID:(id)arg3 predictionType:(unsigned long long)arg4 predictionScore:(double)arg5 ;
-(id)copyRemovingGroup;
-(BOOL)isEqualIgnoringScoreAndGroupProperties:(id)arg1 ;
@end

