/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface RBMeteredMessageQueue : NSObject {

	NSMutableDictionary* _pendingMessagesByIdentifier;
	BOOL _isProcessingPendingMessages;
	NSObject*<OS_dispatch_queue> _lockQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	/*^block*/id _messageSendBlock;

}

@property (nonatomic,copy) id messageSendBlock;              //@synthesize messageSendBlock=_messageSendBlock - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(BOOL)containsMessageWithIdentifier:(id)arg1 ;
-(void)enqueueIdentifier:(id)arg1 message:(id)arg2 ;
-(id)messageSendBlock;
-(void)setMessageSendBlock:(id)arg1 ;
@end

