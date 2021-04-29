/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INAlarmSearch, INAlarm, INDateComponentsRange, INSpeakableString;


@protocol INUpdateAlarmIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INAlarmSearch * alarmSearch; 
@property (nonatomic,copy) INAlarm * alarm; 
@property (assign,nonatomic) long long operation; 
@property (nonatomic,copy) INDateComponentsRange * proposedTime; 
@property (nonatomic,copy) INSpeakableString * proposedLabel; 
@required
-(id)init;
-(long long)operation;
-(void)setOperation:(long long)arg1;
-(INAlarmSearch *)alarmSearch;
-(void)setAlarmSearch:(id)arg1;
-(INAlarm *)alarm;
-(void)setAlarm:(id)arg1;
-(INDateComponentsRange *)proposedTime;
-(void)setProposedTime:(id)arg1;
-(INSpeakableString *)proposedLabel;
-(void)setProposedLabel:(id)arg1;

@end

