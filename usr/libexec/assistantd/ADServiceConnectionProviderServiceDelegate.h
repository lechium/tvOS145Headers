//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFProviderServiceDelegate-Protocol.h"

@class ADServiceConnection, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADServiceConnectionProviderServiceDelegate : NSObject <AFProviderServiceDelegate>
{
    ADServiceConnection *_serviceConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncQueue;	// 16 = 0x10
    NSMutableDictionary *_syncRequestsByUUID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001ed96c
- (oneway void)assistantServiceWillCrashForStuckSyncPluginAtPath:(id)arg1;	// IMP=0x00000001001ed7ec
- (oneway void)getTimeoutSuspendedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ed780
- (oneway void)handleCommand:(id)arg1 executionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001ed69c
- (oneway void)fetchContextsForKeys:(id)arg1 forRequestID:(id)arg2 includesNearbyDevices:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001ed5e4
- (oneway void)prepareForAudioHandoffFailedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ed514
- (oneway void)prepareForAudioHandoffWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ed440
- (oneway void)getStarkModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ed3d4
- (oneway void)getCarDNDModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ed368
- (oneway void)getLockStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001001ed2fc
- (oneway void)dismissAssistant;	// IMP=0x00000001001ed2b4
- (oneway void)openURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ed21c
- (oneway void)syncChunksWithPreAnchor:(id)arg1 postAnchor:(id)arg2 updates:(id)arg3 deletes:(id)arg4 validity:(id)arg5 forRequestUUID:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x00000001001ece30
- (void)clearSyncRequestWithUUID:(id)arg1;	// IMP=0x00000001001ecd9c
- (void)setSyncRequest:(id)arg1 forUUID:(id)arg2;	// IMP=0x00000001001ecd8c
- (id)syncRequestForUUID:(id)arg1;	// IMP=0x00000001001ecd7c
- (id)initWithServiceConnection:(id)arg1 syncQueue:(id)arg2;	// IMP=0x00000001001eccb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

