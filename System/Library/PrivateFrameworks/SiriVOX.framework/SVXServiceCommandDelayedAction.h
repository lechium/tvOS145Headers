/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SVXTaskTracking;
@class SAUIDelayedActionCommand;

@interface SVXServiceCommandDelayedAction : NSObject {

	SAUIDelayedActionCommand* _command;
	id<SVXTaskTracking> _taskTracker;

}

@property (nonatomic,copy,readonly) SAUIDelayedActionCommand * command;              //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) id<SVXTaskTracking> taskTracker;                      //@synthesize taskTracker=_taskTracker - In the implementation block
-(SAUIDelayedActionCommand *)command;
-(id)initWithCommand:(id)arg1 taskTracker:(id)arg2 ;
-(id<SVXTaskTracking>)taskTracker;
@end
