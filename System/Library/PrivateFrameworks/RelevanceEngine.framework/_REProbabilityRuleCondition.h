/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RECondition.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class NSString, REFeature;

@interface _REProbabilityRuleCondition : RECondition <REAutomaticExportedInterface> {

	float _threshold;
	NSString* _interaction;
	REFeature* _feature;
	long long _relation;

}

@property (nonatomic,readonly) NSString * interaction;              //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,readonly) REFeature * feature;                 //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) long long relation;                  //@synthesize relation=_relation - In the implementation block
@property (nonatomic,readonly) float threshold;                     //@synthesize threshold=_threshold - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(REFeature *)feature;
-(NSString *)interaction;
-(float)threshold;
-(long long)relation;
-(id)_dependentFeatures;
-(id)initWithProbability:(id)arg1 relation:(long long)arg2 feature:(id)arg3 threshold:(float)arg4 ;
-(BOOL)_needsProbability;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(id)_inflectionFeatureValuePairs;
@end

