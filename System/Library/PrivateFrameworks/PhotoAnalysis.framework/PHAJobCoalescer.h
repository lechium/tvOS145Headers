/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PHAJobCoalescerDelegate;
@interface PHAJobCoalescer : NSObject {

	id<PHAJobCoalescerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PHAJobCoalescerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PHAJobCoalescerDelegate>)delegate;
-(void)setDelegate:(id<PHAJobCoalescerDelegate>)arg1 ;
-(void)addJob:(id)arg1 ;
@end

