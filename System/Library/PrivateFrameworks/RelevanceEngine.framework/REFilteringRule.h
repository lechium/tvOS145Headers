/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERule.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class REConditionEvaluator, RECondition;

@interface REFilteringRule : RERule <REAutomaticExportedInterface> {

	REConditionEvaluator* _conditionEvaluator;
	RECondition* _condition;
	unsigned long long _type;

}

@property (nonatomic,readonly) REConditionEvaluator * conditionEvaluator; 
@property (nonatomic,readonly) RECondition * condition;                                //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                //@synthesize type=_type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(id)initWithCondition:(id)arg1 ;
-(RECondition *)condition;
-(id)initWithCondition:(id)arg1 type:(unsigned long long)arg2 ;
-(REConditionEvaluator *)conditionEvaluator;
@end

