/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, HKUnit;


@protocol INQueryHealthSampleIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long objectType; 
@property (nonatomic,copy) NSArray * recordDates; 
@property (nonatomic,copy) HKUnit * unit; 
@property (assign,nonatomic) long long questionType; 
@property (nonatomic,copy) NSArray * thresholdValues; 
@property (assign,nonatomic) long long expectedResultType; 
@required
-(id)init;
-(HKUnit *)unit;
-(long long)expectedResultType;
-(void)setExpectedResultType:(long long)arg1;
-(long long)objectType;
-(void)setObjectType:(long long)arg1;
-(long long)questionType;
-(void)setQuestionType:(long long)arg1;
-(NSArray *)recordDates;
-(void)setRecordDates:(id)arg1;
-(NSArray *)thresholdValues;
-(void)setThresholdValues:(id)arg1;
-(void)setUnit:(id)arg1;

@end
