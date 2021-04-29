/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableArray, NSMapTable, NSArray;

@interface GKRuleSystem : NSObject {

	NSMutableDictionary* _state;
	NSMutableArray* _rules;
	NSMutableArray* _agenda;
	NSMutableArray* _toBeExecuted;
	NSMutableArray* _executed;
	NSMapTable* _gradeByFact;

}

@property (nonatomic,retain,readonly) NSMutableDictionary * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain,readonly) NSArray * rules; 
@property (nonatomic,retain,readonly) NSArray * agenda; 
@property (nonatomic,retain,readonly) NSArray * executed; 
@property (nonatomic,retain,readonly) NSArray * facts; 
-(id)init;
-(NSMutableDictionary *)state;
-(void)reset;
-(NSArray *)rules;
-(void)evaluate;
-(void)addRule:(id)arg1 ;
-(void)_addRuleToAgenda:(id)arg1 ;
-(void)assertFact:(id)arg1 grade:(float)arg2 ;
-(void)retractFact:(id)arg1 grade:(float)arg2 ;
-(NSArray *)agenda;
-(NSArray *)executed;
-(void)addRulesFromArray:(id)arg1 ;
-(void)removeAllRules;
-(NSArray *)facts;
-(float)gradeForFact:(id)arg1 ;
-(float)minimumGradeForFacts:(id)arg1 ;
-(float)maximumGradeForFacts:(id)arg1 ;
-(void)assertFact:(id)arg1 ;
-(void)retractFact:(id)arg1 ;
@end

