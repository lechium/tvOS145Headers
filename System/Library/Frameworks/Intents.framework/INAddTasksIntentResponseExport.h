/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INTaskList, NSArray;


@protocol INAddTasksIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INTaskList * modifiedTaskList; 
@property (nonatomic,copy) NSArray * addedTasks; 
@property (assign,nonatomic) unsigned long long warnings; 
@required
-(long long)code;
-(INTaskList *)modifiedTaskList;
-(void)setModifiedTaskList:(id)arg1;
-(NSArray *)addedTasks;
-(void)setAddedTasks:(id)arg1;
-(unsigned long long)warnings;
-(void)setWarnings:(unsigned long long)arg1;

@end

