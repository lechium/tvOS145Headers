/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSObject;

@interface SNFileSystem : NSObject {

	NSMutableArray* _requests;
	NSMutableDictionary* _taskCompletionMap;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * requests;                            //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * taskCompletionMap;              //@synthesize taskCompletionMap=_taskCompletionMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)requests;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(void)removeRequest:(id)arg1 ;
-(void)_removeRequest:(id)arg1 error:(id)arg2 ;
-(NSMutableDictionary *)taskCompletionMap;
-(void)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(void)setTaskCompletionMap:(NSMutableDictionary *)arg1 ;
@end

