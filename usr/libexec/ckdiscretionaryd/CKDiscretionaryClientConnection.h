//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKXPCDiscretionaryDaemon-Protocol.h"

@class CKDiscretionaryDaemon, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CKDiscretionaryClientConnection : NSObject <CKXPCDiscretionaryDaemon>
{
    _Bool _isSpringBoardApp;	// 8 = 0x8
    _Bool _requiresPastBuddy;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    CKDiscretionaryDaemon *_daemon;	// 32 = 0x20
    NSMutableDictionary *_tasksByOperationID;	// 40 = 0x28
    NSString *_group;	// 48 = 0x30
    CDUnknownBlockType _scheduleSendBarrierBlock;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100006e38
@property(copy, nonatomic) CDUnknownBlockType scheduleSendBarrierBlock; // @synthesize scheduleSendBarrierBlock=_scheduleSendBarrierBlock;
@property(retain, nonatomic) NSString *group; // @synthesize group=_group;
@property(retain, nonatomic) NSMutableDictionary *tasksByOperationID; // @synthesize tasksByOperationID=_tasksByOperationID;
@property(nonatomic) __weak CKDiscretionaryDaemon *daemon; // @synthesize daemon=_daemon;
@property(nonatomic) _Bool requiresPastBuddy; // @synthesize requiresPastBuddy=_requiresPastBuddy;
@property(nonatomic) _Bool isSpringBoardApp; // @synthesize isSpringBoardApp=_isSpringBoardApp;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void)cleanup;	// IMP=0x00000001000069c8
- (void)finishOperationID:(id)arg1;	// IMP=0x0000000100006634
- (void)queueOperationID:(id)arg1 options:(id)arg2 clientOperationCallbackProxy:(id)arg3 withBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000059f4
- (id)initWithDaemon:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100005590
- (id)initWithDaemon:(id)arg1 group:(id)arg2 bundleID:(id)arg3 isSpringBoardApp:(_Bool)arg4 requiresPastBuddy:(_Bool)arg5 scheduleSendBarrierBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000001000053e4

@end
