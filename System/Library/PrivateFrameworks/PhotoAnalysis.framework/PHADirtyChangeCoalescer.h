/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, PHADirtyChangeCoalescerDelegate;
@class NSObject, PFCoalescer;

@interface PHADirtyChangeCoalescer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	PFCoalescer* _valueCoalescer;
	id<PHADirtyChangeCoalescerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PHADirtyChangeCoalescerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PHADirtyChangeCoalescerDelegate>)delegate;
-(void)setDelegate:(id<PHADirtyChangeCoalescerDelegate>)arg1 ;
-(void)recordDirtyTransitionForAssetIdentifier:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 ;
@end

