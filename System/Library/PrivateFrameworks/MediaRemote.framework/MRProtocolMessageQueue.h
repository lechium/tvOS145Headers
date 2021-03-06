/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, MRProtocolMessageQueueDataSource, MRProtocolMessageQueueDelegate;
@class NSObject, MRPendingMessageQueue, NSMutableDictionary;

@interface MRProtocolMessageQueue : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	id<MRProtocolMessageQueueDataSource> _datasource;
	id<MRProtocolMessageQueueDelegate> _delegate;
	MRPendingMessageQueue* _pendingMessageQueue;
	NSMutableDictionary* _pendingReplyQueue;

}

@property (assign,nonatomic,__weak) id<MRProtocolMessageQueueDataSource> datasource; 
@property (assign,nonatomic,__weak) id<MRProtocolMessageQueueDelegate> delegate; 
-(void)dealloc;
-(id<MRProtocolMessageQueueDelegate>)delegate;
-(void)setDelegate:(id<MRProtocolMessageQueueDelegate>)arg1 ;
-(void)flush;
-(id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1 ;
-(id<MRProtocolMessageQueueDataSource>)datasource;
-(void)setDatasource:(id<MRProtocolMessageQueueDataSource>)arg1 ;
-(void)enqueueMessage:(id)arg1 expectedMessage:(unsigned long long)arg2 reply:(/*^block*/id)arg3 queue:(id)arg4 ;
-(BOOL)reply:(id)arg1 ;
@end

