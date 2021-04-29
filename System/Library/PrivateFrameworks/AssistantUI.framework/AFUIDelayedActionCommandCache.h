/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface AFUIDelayedActionCommandCache : NSObject {

	NSMutableDictionary* _delayedActionTimersByIdentifier;
	NSMutableDictionary* _dismissalDelayedActionCommandsByIdentifier;

}
-(id)init;
-(void)dealloc;
-(id)_commandHandler;
-(void)invalidatePendingCommands;
-(void)_performDelayedActionCommandTimerAction:(id)arg1 ;
-(void)_invalidateDelayedActionTimer:(id)arg1 withKey:(id)arg2 ;
-(void)_performCommandsWithDelayedActionCommand:(id)arg1 ;
-(void)enqueueDelayedActionCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelDelayedActionWithDelayedActionCancelCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performDismissalCommands;
@end
