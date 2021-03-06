//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NEPluginManagerObjectFactory-Protocol.h"

@class NEAgent, NSArray, NSString, NSXPCConnection, NSXPCInterface;
@protocol NEPluginDelegate, NEPluginDriver, OS_dispatch_queue;

@interface NEPlugin : NSObject <NEPluginManagerObjectFactory>
{
    id <NEPluginDriver> _pluginDriver;	// 8 = 0x8
    _Bool _started;	// 16 = 0x10
    int _extension_pid;	// 20 = 0x14
    NEAgent *_agent;	// 24 = 0x18
    id <NEPluginDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 40 = 0x28
    NSXPCConnection *_pluginConnection;	// 48 = 0x30
    NSString *_internalDescription;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100015020
@property(retain, nonatomic) NSString *internalDescription; // @synthesize internalDescription=_internalDescription;
@property(retain) NSXPCConnection *pluginConnection; // @synthesize pluginConnection=_pluginConnection;
@property int extension_pid; // @synthesize extension_pid=_extension_pid;
@property(readonly) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) __weak id <NEPluginDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NEAgent *agent; // @synthesize agent=_agent;
@property _Bool started; // @synthesize started=_started;
@property(readonly, nonatomic) NSXPCInterface *managerInterface;
@property(readonly, nonatomic) NSXPCInterface *remotePluginInterface;
@property(readonly) NSArray *processIdentities;
@property(readonly) NSArray *pluginUUIDs;
- (id)pluginType;	// IMP=0x0000000100014e84
- (long long)pluginVersion;	// IMP=0x0000000100014e38
@property(readonly) int pid;
- (void)terminate;	// IMP=0x0000000100014d7c
- (void)wakeup;	// IMP=0x0000000100014d3c
- (void)sleep;	// IMP=0x0000000100014a78
- (void)updateConfiguration:(id)arg1;	// IMP=0x0000000100014a0c
- (void)dispose;	// IMP=0x00000001000146cc
- (_Bool)createRemotePluginDriverWithEndpoint:(id)arg1;	// IMP=0x00000001000143a8
- (_Bool)createLocalPluginDriverWithEndpoint:(id)arg1;	// IMP=0x00000001000140b8
- (_Bool)startWithConfiguration:(id)arg1;	// IMP=0x0000000100013644
- (id)managerObjectWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100013640
@property(readonly) id managerObject;
- (id)remotePluginObjectWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000135a8
@property(readonly, nonatomic) id remotePluginObject;
- (void)handleXPCConnectionDown;	// IMP=0x0000000100013400
- (void)handlePluginFailedWithError:(id)arg1;	// IMP=0x00000001000133fc
- (id)description;	// IMP=0x00000001000133f0
- (id)initWithAgent:(id)arg1 delegateQueue:(id)arg2 andDelegate:(id)arg3;	// IMP=0x00000001000132b4

@end

