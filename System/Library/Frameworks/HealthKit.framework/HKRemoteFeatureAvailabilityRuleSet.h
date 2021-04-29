/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSSet;

@interface HKRemoteFeatureAvailabilityRuleSet : NSObject {

	NSMutableDictionary* _conditions;
	NSSet* _supportedConditions;

}

@property (nonatomic,retain) NSMutableDictionary * conditions;              //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,retain) NSSet * supportedConditions;                   //@synthesize supportedConditions=_supportedConditions - In the implementation block
-(NSMutableDictionary *)conditions;
-(void)setConditions:(NSMutableDictionary *)arg1 ;
-(id)initWithRawValue:(id)arg1 dataSource:(id)arg2 ;
-(id)evaluateAll;
-(void)_parseRulesFromRawValue:(id)arg1 dataSource:(id)arg2 ;
-(id)initWithRawValue:(id)arg1 dataSource:(id)arg2 supportedConditions:(id)arg3 ;
-(NSSet *)supportedConditions;
-(void)setSupportedConditions:(NSSet *)arg1 ;
@end

