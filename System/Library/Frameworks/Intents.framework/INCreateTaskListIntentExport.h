/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INSpeakableString, NSArray;


@protocol INCreateTaskListIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * title; 
@property (nonatomic,copy) NSArray * taskTitles; 
@property (nonatomic,copy) INSpeakableString * groupName; 
@required
-(id)init;
-(INSpeakableString *)title;
-(void)setTitle:(id)arg1;
-(INSpeakableString *)groupName;
-(void)setGroupName:(id)arg1;
-(NSArray *)taskTitles;
-(void)setTaskTitles:(id)arg1;

@end

