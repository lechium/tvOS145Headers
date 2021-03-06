/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSObject;

@interface REConcurrentDictionary : NSObject <NSCopying> {

	NSMapTable* _table;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long count; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initStrongToStrongDictionary;
-(id)initWeakToStrongDictionary;
@end

