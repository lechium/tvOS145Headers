/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INAlarm, NSArray;


@protocol INUpdateAlarmIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INAlarm * updatedAlarm; 
@property (nonatomic,copy) NSArray * conflictAlarms; 
@required
-(long long)code;
-(NSArray *)conflictAlarms;
-(void)setConflictAlarms:(id)arg1;
-(INAlarm *)updatedAlarm;
-(void)setUpdatedAlarm:(id)arg1;

@end

