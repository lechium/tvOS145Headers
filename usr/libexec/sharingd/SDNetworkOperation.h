//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDAirDropConnectionDelegate-Protocol.h"
#import "SDAirDropControllerDelegate-Protocol.h"
#import "SDAirDropInformationDelegate-Protocol.h"
#import "SDAirDropServerDelegate-Protocol.h"
#import "SDAirDropSessionDelegate-Protocol.h"
#import "SDAirDropStatusDelegate-Protocol.h"
#import "SDNetworkEjecterDelegate-Protocol.h"
#import "SDNetworkResolverDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_xpc_object, SDNetworkOperationDelegate;

__attribute__((visibility("hidden")))
@interface SDNetworkOperation : NSObject <SDAirDropServerDelegate, SDAirDropConnectionDelegate, SDAirDropSessionDelegate, SDAirDropControllerDelegate, SDAirDropStatusDelegate, SDAirDropInformationDelegate, SDNetworkResolverDelegate, SDNetworkEjecterDelegate>
{
    id _operation;	// 8 = 0x8
    _Bool _connectionScheduled;	// 16 = 0x10
    NSObject<OS_xpc_object> *_connection;	// 24 = 0x18
    NSMutableDictionary *_properties;	// 32 = 0x20
    long long _sandboxExtensionHandle;	// 40 = 0x28
    NSString *_kind;	// 48 = 0x30
    NSString *_objectKey;	// 56 = 0x38
    NSObject<OS_xpc_object> *_boostMessage;	// 64 = 0x40
    NSMutableArray *_activities;	// 72 = 0x48
    id <SDNetworkOperationDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001000d447c
@property __weak id <SDNetworkOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(retain) NSMutableArray *activities; // @synthesize activities=_activities;
@property(retain) NSObject<OS_xpc_object> *boostMessage; // @synthesize boostMessage=_boostMessage;
@property(copy) NSString *objectKey; // @synthesize objectKey=_objectKey;
@property(readonly, copy) NSString *kind; // @synthesize kind=_kind;
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x00000001000d4198
- (void)resume;	// IMP=0x00000001000d3728
- (void)notifyClientWithPosixError:(long long)arg1;	// IMP=0x00000001000d35c8
- (void)airDropConnection:(id)arg1 event:(long long)arg2 withResults:(id)arg3;	// IMP=0x00000001000d3560
- (void)networkResolver:(id)arg1 event:(long long)arg2 withResults:(id)arg3;	// IMP=0x00000001000d34f8
- (void)networkEjecter:(id)arg1 event:(long long)arg2 withResults:(id)arg3;	// IMP=0x00000001000d3490
- (void)airDropServer:(id)arg1 event:(long long)arg2 withResults:(id)arg3;	// IMP=0x00000001000d3428
- (void)airDropSession:(id)arg1 event:(long long)arg2 withResults:(id)arg3;	// IMP=0x00000001000d33c0
- (void)airDropController:(id)arg1 didChange:(id)arg2;	// IMP=0x00000001000d335c
- (void)airDropInformation:(id)arg1 didChange:(id)arg2;	// IMP=0x00000001000d32f8
- (void)airDropStatus:(id)arg1 didChange:(id)arg2;	// IMP=0x00000001000d3294
- (const void *)copyPropertyForKey:(id)arg1;	// IMP=0x00000001000d3218
- (void)setProperty:(void *)arg1 forKey:(id)arg2;	// IMP=0x00000001000d3140
- (void)dealloc;	// IMP=0x00000001000d30f4
- (id)initWithKind:(id)arg1;	// IMP=0x00000001000d3024

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

