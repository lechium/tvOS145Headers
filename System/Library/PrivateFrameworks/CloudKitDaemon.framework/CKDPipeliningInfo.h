/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKDURLRequestPipelining, CKDOperationPipelining, OS_dispatch_group, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface CKDPipeliningInfo : NSObject {

	BOOL _perRequestCallbackQueueSuspended;
	BOOL _isCancelled;
	id<CKDURLRequestPipelining> _request;
	id<CKDOperationPipelining> _operation;
	NSObject*<OS_dispatch_group> _perRequestCallbackGroup;
	NSObject*<OS_dispatch_group> _perRequestGroup;
	NSObject*<OS_dispatch_queue> _perRequestCallbackQueue;
	NSMutableArray* _perRequestCallbackBlocks;

}

@property (assign,nonatomic) BOOL perRequestCallbackQueueSuspended;                             //@synthesize perRequestCallbackQueueSuspended=_perRequestCallbackQueueSuspended - In the implementation block
@property (nonatomic,retain) NSMutableArray * perRequestCallbackBlocks;                         //@synthesize perRequestCallbackBlocks=_perRequestCallbackBlocks - In the implementation block
@property (assign,nonatomic) BOOL isCancelled;                                                  //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,retain) id<CKDURLRequestPipelining> request;                               //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<CKDOperationPipelining> operation;                       //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> perRequestCallbackGroup;              //@synthesize perRequestCallbackGroup=_perRequestCallbackGroup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> perRequestGroup;                      //@synthesize perRequestGroup=_perRequestGroup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> perRequestCallbackQueue;              //@synthesize perRequestCallbackQueue=_perRequestCallbackQueue - In the implementation block
-(void)dealloc;
-(id<CKDURLRequestPipelining>)request;
-(BOOL)isCancelled;
-(id<CKDOperationPipelining>)operation;
-(void)setOperation:(id<CKDOperationPipelining>)arg1 ;
-(void)setRequest:(id<CKDURLRequestPipelining>)arg1 ;
-(void)setIsCancelled:(BOOL)arg1 ;
-(BOOL)perRequestCallbackQueueSuspended;
-(void)setPerRequestCallbackQueueSuspended:(BOOL)arg1 ;
-(id)initWithRequest:(id)arg1 operation:(id)arg2 ;
-(void)addPerRequestCallbackBlock:(/*^block*/id)arg1 ;
-(void)disablePerRequestCallbackBlocks;
-(void)cancelAndDisablePerRequestCallbackBlocks;
-(void)suspendCallbackQueue;
-(void)resumeCallbackQueue;
-(NSObject*<OS_dispatch_group>)perRequestCallbackGroup;
-(void)setPerRequestCallbackGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)perRequestGroup;
-(void)setPerRequestGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_queue>)perRequestCallbackQueue;
-(void)setPerRequestCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)perRequestCallbackBlocks;
-(void)setPerRequestCallbackBlocks:(NSMutableArray *)arg1 ;
@end

