/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSMapTable;

@interface PXObservable : NSObject {

	long long _nestedChanges;
	NSMutableArray* _pendingChangeBlocks;
	long long _numAppliedPendingChanges;
	unsigned long long _currentChange;
	BOOL _isEnumeratingObservers;
	NSObject*<OS_dispatch_queue> _observersQueue;
	BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
	NSMapTable* _observersQueue_changeObserversWithContexts;
	BOOL _hasObservers;

}

@property (nonatomic,readonly) BOOL hasObservers;                              //@synthesize hasObservers=_hasObservers - In the implementation block
@property (nonatomic,readonly) unsigned long long currentChanges; 
@property (nonatomic,readonly) BOOL isPerformingChanges; 
-(id)init;
-(void)_willChange;
-(BOOL)hasObservers;
-(void)enumerateObserversUsingBlock:(/*^block*/id)arg1 ;
-(void)_didChange;
-(id)mutableChangeObject;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)isPerformingChanges;
-(void)registerChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)unregisterChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)didPerformChanges;
-(void)didPublishChanges;
-(void)willPerformChanges;
-(void)hasObserversDidChange;
-(void)signalChange:(unsigned long long)arg1 ;
-(unsigned long long)currentChanges;
-(void)_setHasObservers:(BOOL)arg1 ;
-(void)_publishChanges;
-(void)_applyPendingChanges;
-(void)_observersQueue_copyChangeObserversForWriteIfNeeded;
@end

