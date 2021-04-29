//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BTLEXpcConnection;
@protocol OS_xpc_object;

@interface BTLEXpcServer : NSObject
{
    NSObject<OS_xpc_object> *_xpcServer;	// 8 = 0x8
    BTLEXpcConnection *_serverConnection;	// 16 = 0x10
}

+ (id)instance;	// IMP=0x00000001000265b8
- (void).cxx_destruct;	// IMP=0x000000010002737c
@property(retain, nonatomic) BTLEXpcConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcServer; // @synthesize xpcServer=_xpcServer;
- (void)handleXpcDisconnection:(id)arg1;	// IMP=0x00000001000272cc
- (void)handleConnection:(id)arg1;	// IMP=0x0000000100027134
- (void)handleEvent:(id)arg1;	// IMP=0x0000000100027070
- (id)init;	// IMP=0x0000000100026f50
- (void)sendANCSNotificationSourceRegisteredMsg:(id)arg1;	// IMP=0x0000000100026e2c
- (void)sendDevMgmtPipeDisconnectedMsg:(id)arg1;	// IMP=0x0000000100026d08
- (void)sendDevMgmtPipeConnectedMsg:(id)arg1;	// IMP=0x0000000100026be4
- (void)sendSetConnectionParametersMsg:(id)arg1 forPeer:(id)arg2;	// IMP=0x0000000100026800
- (void)sendEnableBTSyncMsg:(unsigned short)arg1 forPeer:(id)arg2;	// IMP=0x00000001000266ac
- (void)sendMsg:(id)arg1 args:(id)arg2;	// IMP=0x0000000100026624

@end

