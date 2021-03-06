//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class KeepAlive, NSError, NSLock;

@interface Task : NSOperation
{
    KeepAlive *_keepAlive;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
    _Bool _success;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100168d84
@property _Bool success; // @synthesize success=_success;
@property(copy) NSError *error; // @synthesize error=_error;
- (void)_dispatchCompletionBlock;	// IMP=0x0000000100168c24
- (void)unlock;	// IMP=0x0000000100168c0c
- (_Bool)runSubTask:(id)arg1 returningError:(id *)arg2;	// IMP=0x0000000100168b20
- (void)lock;	// IMP=0x0000000100168b08
- (void)completeWithSuccess;	// IMP=0x0000000100168aa0
- (void)completeWithError:(id)arg1;	// IMP=0x0000000100168a10
- (id)initWithoutKeepAlive;	// IMP=0x00000001001689a4
- (id)init;	// IMP=0x00000001001688cc

@end

