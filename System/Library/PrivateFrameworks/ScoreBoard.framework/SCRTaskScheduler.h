/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SCRTaskSchedulerDelegate;
#import <ScoreBoard/ScoreBoard-Structs.h>
@class SCRActivityScheduler, NSMutableDictionary;

@interface SCRTaskScheduler : NSObject {

	os_unfair_lock_s _lock;
	SCRActivityScheduler* _activityScheduler;
	NSMutableDictionary* _activityForTask;
	id<SCRTaskSchedulerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCRTaskSchedulerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SCRTaskSchedulerDelegate>)delegate;
-(void)setDelegate:(id<SCRTaskSchedulerDelegate>)arg1 ;
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(id)initWithTargetQueue:(id)arg1 ;
-(void)_performTaskWithIdentifier:(id)arg1 ;
-(void)completeTaskWithIdentifier:(id)arg1 ;
-(void)scheduleTaskWithIdentifier:(id)arg1 withConfiguration:(id)arg2 ;
@end
