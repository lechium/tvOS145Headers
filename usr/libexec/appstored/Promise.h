//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRecursiveLock, PromiseResult;

@interface Promise : NSObject
{
    NSMutableArray *_observers;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    NSRecursiveLock *_stateLock;	// 24 = 0x18
    PromiseResult *_result;	// 32 = 0x20
}

+ (id)promiseWithError:(id)arg1;	// IMP=0x000000010005d0e8
+ (id)promiseWithValue:(id)arg1;	// IMP=0x000000010005d098
+ (id)onScheduler:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010005d024
- (void).cxx_destruct;	// IMP=0x000000010005e530
@property(readonly) PromiseResult *result; // @synthesize result=_result;
- (void)_invokeExecutor:(CDUnknownBlockType)arg1 onScheduler:(id)arg2;	// IMP=0x000000010005e3e4
- (void)rejectWithError:(id)arg1;	// IMP=0x000000010005e1b8
- (void)resolveWithValue:(id)arg1;	// IMP=0x000000010005df8c
- (CDUnknownBlockType)completionHandlerAdapter;	// IMP=0x000000010005df14
- (id)joinWithPromise:(id)arg1;	// IMP=0x000000010005dc04
- (id)flatMapUsingTransformer:(CDUnknownBlockType)arg1 onScheduler:(id)arg2;	// IMP=0x000000010005d950
- (id)mapUsingTransformer:(CDUnknownBlockType)arg1 onScheduler:(id)arg2;	// IMP=0x000000010005d770
- (void)thenPerform:(CDUnknownBlockType)arg1 orCatchError:(CDUnknownBlockType)arg2 onScheduler:(id)arg3;	// IMP=0x000000010005d530
- (void)catchError:(CDUnknownBlockType)arg1 onScheduler:(id)arg2;	// IMP=0x000000010005d510
- (void)alwaysPerform:(CDUnknownBlockType)arg1 onScheduler:(id)arg2;	// IMP=0x000000010005d418
@property(readonly, getter=isResolved) _Bool resolved;
- (id)initWithState:(long long)arg1 result:(id)arg2;	// IMP=0x000000010005d298
- (id)initOnScheduler:(id)arg1 withExecutor:(CDUnknownBlockType)arg2;	// IMP=0x000000010005d214
- (id)initWithError:(id)arg1;	// IMP=0x000000010005d1b0
- (id)initWithValue:(id)arg1;	// IMP=0x000000010005d14c
- (id)init;	// IMP=0x000000010005d138
- (void)resolveWithAMSPromise:(id)arg1;	// IMP=0x00000001002048dc
- (id)initWithAMSPromise:(id)arg1;	// IMP=0x0000000100204868

@end

