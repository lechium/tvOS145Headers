/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SymptomEvaluator/SymptomExpertSystemState.h>

@class NSDictionary;

@interface SymptomExpertSystemDiagnosingState : SymptomExpertSystemState {

	NSDictionary* _triggeringSymptom;

}

@property (nonatomic,retain) NSDictionary * triggeringSymptom;              //@synthesize triggeringSymptom=_triggeringSymptom - In the implementation block
+(id)createStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryPreds:(id)arg3 ;
-(void)createAndPostAWDMetric;
-(NSDictionary *)triggeringSymptom;
-(void)setTriggeringSymptom:(NSDictionary *)arg1 ;
@end

