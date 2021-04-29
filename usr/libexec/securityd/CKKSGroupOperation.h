//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSResultOperation.h"

@class NSBlockOperation, NSMutableArray, NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKKSGroupOperation : CKKSResultOperation
{
    _Bool executing;	// 8 = 0x8
    _Bool finished;	// 9 = 0x9
    _Bool _fillInError;	// 10 = 0xa
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    NSBlockOperation *_startOperation;	// 24 = 0x18
    NSBlockOperation *_finishOperation;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableArray *_internalSuccesses;	// 48 = 0x30
}

+ (id)named:(id)arg1 withBlockTakingSelf:(CDUnknownBlockType)arg2;	// IMP=0x0000000100054a04
+ (id)named:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100054990
+ (id)operationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100054908
- (void).cxx_destruct;	// IMP=0x0000000100054560
@property(retain) NSMutableArray *internalSuccesses; // @synthesize internalSuccesses=_internalSuccesses;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSBlockOperation *finishOperation; // @synthesize finishOperation=_finishOperation;
@property(retain) NSBlockOperation *startOperation; // @synthesize startOperation=_startOperation;
@property _Bool fillInError; // @synthesize fillInError=_fillInError;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)dependOnBeforeGroupFinished:(id)arg1;	// IMP=0x0000000100054254
- (void)runBeforeGroupFinished:(id)arg1;	// IMP=0x000000010005419c
- (void)groupStart;	// IMP=0x0000000100054198
- (void)addDependency:(id)arg1;	// IMP=0x0000000100054104
- (void)completeOperation;	// IMP=0x0000000100054020
- (void)cancel;	// IMP=0x0000000100053bc4
- (void)start;	// IMP=0x0000000100053a24
- (_Bool)isFinished;	// IMP=0x0000000100053954
- (_Bool)isExecuting;	// IMP=0x0000000100053884
- (_Bool)isConcurrent;	// IMP=0x000000010005387c
- (id)debugDescription;	// IMP=0x0000000100053870
- (id)description;	// IMP=0x0000000100053280
- (void)setName:(id)arg1;	// IMP=0x00000001000530e8
- (_Bool)isPending;	// IMP=0x000000010005307c
- (void)dealloc;	// IMP=0x0000000100052fac
- (id)init;	// IMP=0x0000000100052bc0

@end

