/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>
#import <libobjc.A.dylib/REElementCoordinatorProperties.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSMutableDictionary, REObserverStore, NSMutableArray, NSObject;

@interface REElementCoordinator : RERelevanceEngineSubsystem <REElementCoordinatorProperties> {

	NSMutableDictionary* _displayElements;
	REObserverStore* _observers;
	BOOL _performingBatch;
	NSMutableArray* _updates;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) unsigned long long numberOfObservers; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue; 
@property (nonatomic,readonly) NSDictionary * displayElements; 
+(id)applicationPrewarmIdentifiers;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)addObserver:(id)arg1 ;
-(void)enumerateObservers:(/*^block*/id)arg1 ;
-(id)initWithRelevanceEngine:(id)arg1 ;
-(unsigned long long)numberOfElementsInSection:(id)arg1 ;
-(id)elementAtPath:(id)arg1 ;
-(id)pathForElement:(id)arg1 ;
-(void)didAddObserver:(id)arg1 ;
-(void)_enumerateValidObservers:(/*^block*/id)arg1 ;
-(void)didRemoveObserver:(id)arg1 ;
-(void)_performOperationsToDisplayElements:(id)arg1 ;
-(void)_performOperation:(id)arg1 toObserver:(id)arg2 ;
-(void)reloadElement:(id)arg1 atPath:(id)arg2 ;
-(void)_enqueueOrPerformOperation:(id)arg1 ;
-(void)insertElement:(id)arg1 atPath:(id)arg2 ;
-(void)removeElement:(id)arg1 atPath:(id)arg2 ;
-(void)moveElement:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 ;
-(void)refreshElement:(id)arg1 atPath:(id)arg2 ;
-(void)_performOperationsToDisplayElements:(id)arg1 toSection:(id)arg2 ;
-(NSDictionary *)displayElements;
-(unsigned long long)numberOfObservers;
-(void)performBatchUpdateBlock:(/*^block*/id)arg1 ;
@end

