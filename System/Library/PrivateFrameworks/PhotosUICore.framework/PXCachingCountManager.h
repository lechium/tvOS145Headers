/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSCache;

@interface PXCachingCountManager : NSObject {

	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSCache* _cache;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateQueue;              //@synthesize stateQueue=_stateQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;               //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSCache * cache;                                      //@synthesize cache=_cache - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSCache *)cache;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(void)setStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCache:(NSCache *)arg1 ;
-(void)requestCountForAssetCollection:(id)arg1 fetchOptions:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
@end

