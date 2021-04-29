/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSLock, NSMutableArray, VSSpeechCache, VSShortTermCache, NSObject;

@interface VSCachingService : NSObject {

	NSLock* _threadLock;
	NSMutableArray* _inMemoryCaches;
	VSSpeechCache* _cacheStore;
	VSShortTermCache* _shortTermCache;
	NSObject*<OS_dispatch_queue> _cachingQueue;

}

@property (nonatomic,retain) NSLock * threadLock;                                    //@synthesize threadLock=_threadLock - In the implementation block
@property (nonatomic,retain) NSMutableArray * inMemoryCaches;                        //@synthesize inMemoryCaches=_inMemoryCaches - In the implementation block
@property (nonatomic,retain) VSSpeechCache * cacheStore;                             //@synthesize cacheStore=_cacheStore - In the implementation block
@property (nonatomic,retain) VSShortTermCache * shortTermCache;                      //@synthesize shortTermCache=_shortTermCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cachingQueue;              //@synthesize cachingQueue=_cachingQueue - In the implementation block
+(id)standardService;
-(void)fetchCacheForTask:(id)arg1 ;
-(id)popShortTermCacheForHash:(id)arg1 ;
-(void)enqueueShortTermCacheWithHash:(id)arg1 audio:(id)arg2 timingInfo:(id)arg3 voiceKey:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)enqueueCacheWithHash:(id)arg1 streamAudio:(id)arg2 timingInfo:(id)arg3 voiceKey:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)inMemoryCacheForHash:(id)arg1 ;
-(id)onDiskCacheForHash:(id)arg1 ;
-(id)shortTermCacheForHash:(id)arg1 ;
-(void)enqueueCacheWithHash:(id)arg1 audio:(id)arg2 timingInfo:(id)arg3 voiceKey:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithCache:(id)arg1 shortTermMemory:(id)arg2 ;
-(void)_enqueueCacheWithHash:(id)arg1 audioObject:(id)arg2 timingInfo:(id)arg3 voiceKey:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)compressStreamAudio:(id)arg1 ;
-(id)compressAudio:(id)arg1 ;
-(NSLock *)threadLock;
-(NSMutableArray *)inMemoryCaches;
-(NSObject*<OS_dispatch_queue>)cachingQueue;
-(VSSpeechCache *)cacheStore;
-(id)_inMemoryCacheForHash:(id)arg1 ;
-(id)_onDiskCacheForHash:(id)arg1 ;
-(VSShortTermCache *)shortTermCache;
-(void)setThreadLock:(NSLock *)arg1 ;
-(void)setInMemoryCaches:(NSMutableArray *)arg1 ;
-(void)setCacheStore:(VSSpeechCache *)arg1 ;
-(void)setShortTermCache:(VSShortTermCache *)arg1 ;
-(void)setCachingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

