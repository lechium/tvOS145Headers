/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class TVCKDataQuery, NSObject;

@interface _TVCKDataQueryRecord : NSObject {

	BOOL _processAsync;
	TVCKDataQuery* _query;
	NSObject*<OS_dispatch_queue> _completionQueue;
	/*^block*/id _completionHandler;
	long long _priority;

}

@property (nonatomic,retain) TVCKDataQuery * query;                                     //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,copy) id completionHandler;                                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) long long priority;                                        //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) BOOL processAsync;                                         //@synthesize processAsync=_processAsync - In the implementation block
-(void)invalidate;
-(TVCKDataQuery *)query;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setQuery:(TVCKDataQuery *)arg1 ;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)initWithQuery:(id)arg1 priority:(long long)arg2 processAsync:(BOOL)arg3 withCompletionQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)processAsync;
-(void)setProcessAsync:(BOOL)arg1 ;
@end

