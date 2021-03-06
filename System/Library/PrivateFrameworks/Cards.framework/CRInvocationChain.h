/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, CRInvocationChainDelegate;
@class NSObject, NSPointerArray;

@interface CRInvocationChain : NSObject {

	NSObject*<OS_dispatch_queue> _chainedObjectsAccessQueue;
	id<CRInvocationChainDelegate> _delegate;
	NSPointerArray* _chainedObjects;

}

@property (setter=_setChainedObjects:,getter=_chainedObjects,nonatomic,retain) NSPointerArray * chainedObjects;              //@synthesize chainedObjects=_chainedObjects - In the implementation block
@property (assign,nonatomic,__weak) id<CRInvocationChainDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)init;
-(id<CRInvocationChainDelegate>)delegate;
-(void)setDelegate:(id<CRInvocationChainDelegate>)arg1 ;
-(id)_methodSignatureForSelector:(SEL)arg1 ;
-(void)_forwardInvocation:(id)arg1 ;
-(void)_accessChainedObjectsSafely:(/*^block*/id)arg1 ;
-(BOOL)_respondsToSelector:(SEL)arg1 ;
-(void)_addChainedObject:(id)arg1 ;
-(void)_enumerateChainedObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_isEligibleForSelector:(SEL)arg1 ;
-(id)_chainedObjects;
-(void)addChainedObject:(id)arg1 ;
-(void)enumerateChainedObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEligibleForSelector:(SEL)arg1 ;
-(void)_setChainedObjects:(id)arg1 ;
@end

