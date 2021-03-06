/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FBSBundleInfo.h>

@protocol OS_dispatch_queue;
@class LSApplicationProxy, NSObject, FBSApplicationPlaceholderProgress, NSMutableSet, FBSApplicationLibrary;

@interface FBSApplicationPlaceholder : FBSBundleInfo {

	LSApplicationProxy* _proxy;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	FBSApplicationPlaceholderProgress* _queue_progress;
	NSMutableSet* _queue_observers;
	FBSApplicationLibrary* _appLibrary;

}

@property (setter=_setProxy:,getter=_proxy,nonatomic,retain) LSApplicationProxy * proxy; 
@property (assign,nonatomic,__weak) FBSApplicationLibrary * appLibrary;                               //@synthesize appLibrary=_appLibrary - In the implementation block
@property (nonatomic,readonly) id<FBSApplicationPlaceholderProgress> progress; 
@property (getter=isPrioritizable,nonatomic,readonly) BOOL prioritizable; 
@property (getter=isPausable,nonatomic,readonly) BOOL pausable; 
@property (getter=isResumable,nonatomic,readonly) BOOL resumable; 
@property (getter=isCancellable,nonatomic,readonly) BOOL cancellable; 
+(id)_callOutQueue;
+(id)_sharedQueue;
-(void)dealloc;
-(BOOL)cancel;
-(BOOL)resume;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id<FBSApplicationPlaceholderProgress>)progress;
-(BOOL)pause;
-(BOOL)prioritize;
-(id)_proxy;
-(BOOL)isCancellable;
-(BOOL)isPausable;
-(BOOL)isPrioritizable;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithApplicationProxy:(id)arg1 ;
-(BOOL)isRestricted;
-(id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2 ;
-(void)_setProxy:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)_canPerformAction:(unsigned long long)arg1 ;
-(BOOL)_performAction:(unsigned long long)arg1 withResult:(/*^block*/id)arg2 ;
-(double)percentComplete;
-(void)_dispatchToObserversWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)installType;
-(BOOL)_queue_isCloudDemoted;
-(unsigned long long)_queue_supportedActions;
-(BOOL)_queue_canPerformAction:(unsigned long long)arg1 ;
-(void)_pauseWithResult:(/*^block*/id)arg1 ;
-(void)_resumeWithResult:(/*^block*/id)arg1 ;
-(void)_cancelWithResult:(/*^block*/id)arg1 ;
-(FBSApplicationLibrary *)appLibrary;
-(void)_prioritizeWithResult:(/*^block*/id)arg1 ;
-(void)_queue_setProxy:(id)arg1 force:(BOOL)arg2 ;
-(void)_reloadFromProxy:(id)arg1 ;
-(void)_queue_noteChangedSignificantly:(id)arg1 ;
-(void)_sendToObserversPlaceholderProgressDidUpdate;
-(void)_sendToObserversPlaceholderDidChangeSignificantly;
-(unsigned long long)installState;
-(unsigned long long)installPhase;
-(id)_initWithBundleProxy:(id)arg1 url:(id)arg2 ;
-(BOOL)isResumable;
-(BOOL)prioritizeWithResult:(/*^block*/id)arg1 ;
-(BOOL)pauseWithResult:(/*^block*/id)arg1 ;
-(BOOL)resumeWithResult:(/*^block*/id)arg1 ;
-(BOOL)cancelWithResult:(/*^block*/id)arg1 ;
-(void)_setProxy:(id)arg1 ;
-(void)_reloadProgress;
-(void)_noteChangedSignificantly;
-(void)setAppLibrary:(FBSApplicationLibrary *)arg1 ;
@end

