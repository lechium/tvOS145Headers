//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSOperationQueue, NSString;

@interface TaskQueue : NSObject
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
}

+ (id)networkQueue;	// IMP=0x000000010011b420
- (void).cxx_destruct;	// IMP=0x000000010011b60c
- (void)waitUntilAllTasksAreFinished;	// IMP=0x000000010011b5fc
- (void)cancelAllTasks;	// IMP=0x000000010011b5ec
- (void)addTaskWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010011b5dc
- (void)addTasks:(id)arg1 waitUntilFinished:(_Bool)arg2;	// IMP=0x000000010011b5cc
- (void)addTask:(id)arg1;	// IMP=0x000000010011b5bc
@property long long qualityOfService;
@property(readonly, copy) NSArray *tasks;
@property(copy) NSString *name;
- (void)setUnderlyingQueue:(id)arg1;	// IMP=0x000000010011b55c
@property long long maxConcurrentOperationCount;
- (id)init;	// IMP=0x000000010011b4ac

@end

