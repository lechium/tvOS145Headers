/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _UIAfterCACommitBlock;

@interface _UIAfterCACommitQueue : NSObject {

	_UIAfterCACommitBlock* _first;
	_UIAfterCACommitBlock* _last;

}
-(id)init;
-(BOOL)flush;
-(void)_enqueueCommitResponse:(/*^block*/id)arg1 forPhase:(int)arg2 ;
-(void)enqueuePostCommitBlock:(/*^block*/id)arg1 ;
-(void)enqueuePostSynchronizeBlock:(/*^block*/id)arg1 ;
@end

