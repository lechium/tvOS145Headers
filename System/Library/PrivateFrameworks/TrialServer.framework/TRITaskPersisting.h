/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TRITaskPersisting
@required
-(id)tasks;
-(BOOL)enumerateTasksWithTagsIntersectingTagSet:(id)arg1 block:(/*^block*/id)arg2;
-(id)idForTask:(id)arg1;
-(id)addTask:(id)arg1 startTime:(id)arg2 tags:(id)arg3 dependencies:(id)arg4 error:(id*)arg5;
-(BOOL)removeTaskWithId:(id)arg1 cleanupBlock:(/*^block*/id)arg2;
-(BOOL)updateTaskWithTaskId:(id)arg1 startDate:(id)arg2 task:(id)arg3;
-(id)taskIdsWithTag:(id)arg1;
-(id)directDependenciesOfTaskWithId:(id)arg1;
-(id)tasksDependentOnTask:(id)arg1;

@end

