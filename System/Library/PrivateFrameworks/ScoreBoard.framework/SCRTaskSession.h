/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SCRStateTransitionable.h>
#import <libobjc.A.dylib/SCRSchedulable.h>

@class SCRSchedulingConfiguration, NSError, SCRTask, SCRStateMachine, SCRApprovalCoordinator, NSString;

@interface SCRTaskSession : NSObject <SCRStateTransitionable, SCRSchedulable> {

	id _context;
	NSError* _error;
	SCRTask* _task;
	SCRStateMachine* _stateMachine;
	SCRApprovalCoordinator* _approvalCoordinator;

}

@property (nonatomic,readonly) SCRTask * task;                                               //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) SCRStateMachine * stateMachine;                               //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) SCRApprovalCoordinator * approvalCoordinator;                 //@synthesize approvalCoordinator=_approvalCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) SCRSchedulingConfiguration * schedulingConfiguration; 
+(id)descriptionForState:(unsigned long long)arg1 ;
+(id)validStateTransitions;
-(void)_start;
-(void)_complete;
-(SCRTask *)task;
-(void)perform;
-(SCRStateMachine *)stateMachine;
-(void)_performTask;
-(SCRSchedulingConfiguration *)schedulingConfiguration;
-(SCRApprovalCoordinator *)approvalCoordinator;
-(void)_requestApproval;
-(void)_setupSharedContext;
-(void)_completeTask;
-(void)_teardownSharedContext;
-(void)handleStateTransition:(id)arg1 ;
-(id)initWithTask:(id)arg1 approvalCoordinator:(id)arg2 ;
@end

