/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NAScheduler;
#import <MobileTimer/MobileTimer-Structs.h>
@class NSHashTable;

@interface MTObserverStore : NSObject {

	os_unfair_lock_s _observersLock;
	id<NAScheduler> _callbackScheduler;
	NSHashTable* _observers;

}

@property (nonatomic,retain) id<NAScheduler> callbackScheduler;              //@synthesize callbackScheduler=_callbackScheduler - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s observersLock;                 //@synthesize observersLock=_observersLock - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                        //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(os_unfair_lock_s)observersLock;
-(void)setObserversLock:(os_unfair_lock_s)arg1 ;
-(id)initWithCallbackScheduler:(id)arg1 ;
-(void)enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(id<NAScheduler>)callbackScheduler;
-(void)setCallbackScheduler:(id<NAScheduler>)arg1 ;
-(void)addObserver:(id)arg1 wasFirst:(BOOL*)arg2 ;
-(void)removeObserver:(id)arg1 wasLast:(BOOL*)arg2 ;
-(BOOL)containsObserver:(id)arg1 ;
@end

