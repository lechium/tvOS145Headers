/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GKCache.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, GKLinkedList, NSObject, NSString;

@interface GKThreadsafeCache : NSObject <GKCache> {

	NSMutableDictionary* _dictionary;
	NSMutableDictionary* _missingEntryQueues;
	GKLinkedList* _cacheList;
	unsigned long long _maxCount;
	unsigned long long _count;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;                      //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) GKLinkedList * cacheList;                              //@synthesize cacheList=_cacheList - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * missingEntryQueues;              //@synthesize missingEntryQueues=_missingEntryQueues - In the implementation block
@property (assign,nonatomic) unsigned long long maxCount;                           //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) unsigned long long count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                //@synthesize syncQueue=_syncQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)dictionary;
-(void)setCount:(unsigned long long)arg1 ;
-(unsigned long long)maxCount;
-(void)setMaxCount:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)internalObjectForKey:(id)arg1 ;
-(void)internalSetObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithName:(id)arg1 maxCount:(unsigned long long)arg2 ;
-(id)objectForKey:(id)arg1 withMissingHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)missingEntryQueues;
-(void)setMissingEntryQueues:(NSMutableDictionary *)arg1 ;
-(GKLinkedList *)cacheList;
-(void)setCacheList:(GKLinkedList *)arg1 ;
@end

