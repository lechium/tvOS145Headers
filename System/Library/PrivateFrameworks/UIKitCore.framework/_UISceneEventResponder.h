/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class _UISceneEventResponse;

@interface _UISceneEventResponder : NSObject {

	os_unfair_lock_s _sendLock;
	os_unfair_lock_s _dataLock;
	_UISceneEventResponse* _dataLock_first;
	_UISceneEventResponse* _dataLock_last;

}
-(id)init;
-(void)_enqueueCommitResponse:(/*^block*/id)arg1 forPhase:(int)arg2 ;
-(void)_clearResponse:(id)arg1 ;
-(void)enqueuePostCommitResponse:(/*^block*/id)arg1 ;
-(void)enqueuePostSynchronizeResponse:(/*^block*/id)arg1 ;
@end

