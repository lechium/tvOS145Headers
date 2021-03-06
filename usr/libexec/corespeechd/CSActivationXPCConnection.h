//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSActivateXPCConnectionDelegate, OS_dispatch_queue, OS_xpc_object;

@interface CSActivationXPCConnection : NSObject
{
    id <CSActivateXPCConnectionDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_xpc_object> *_connection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010009ff5c
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSActivateXPCConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleActivateEventMesssage:(id)arg1 client:(id)arg2;	// IMP=0x000000010009fd5c
- (void)_sendReply:(id)arg1 client:(id)arg2 result:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000010009fc64
- (void)_handleClientError:(id)arg1 client:(id)arg2;	// IMP=0x000000010009fa90
- (void)_handleClientMessage:(id)arg1 client:(id)arg2;	// IMP=0x000000010009f910
- (void)_handleClientEvent:(id)arg1;	// IMP=0x000000010009f824
- (void)activateConnection;	// IMP=0x000000010009f710
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010009f640

@end

