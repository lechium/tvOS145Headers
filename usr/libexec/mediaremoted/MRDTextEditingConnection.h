//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteTextInput/RTIInputSystemServiceSession.h>

@class BKSApplicationStateMonitor, MRMutableTextEditingSession, MRTextEditingSession, MSVXPCTransaction, NSObject, NSString, NSXPCConnection;
@protocol MRDTextEditingConnectionDelegate, OS_dispatch_queue;

@interface MRDTextEditingConnection : RTIInputSystemServiceSession
{
    MRMutableTextEditingSession *_currentSession;	// 8 = 0x8
    _Bool _skipNextTextChangedDelegation;	// 16 = 0x10
    BKSApplicationStateMonitor *_applicationMonitor;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
    int _pid;	// 40 = 0x28
    NSXPCConnection *_xpcConnection;	// 48 = 0x30
    id <MRDTextEditingConnectionDelegate> _mrDelegate;	// 56 = 0x38
    NSString *_bundleID;	// 64 = 0x40
    MSVXPCTransaction *_transaction;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010003dd84
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) MSVXPCTransaction *transaction; // @synthesize transaction=_transaction;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) __weak id <MRDTextEditingConnectionDelegate> mrDelegate; // @synthesize mrDelegate=_mrDelegate;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)concatenatedTextForDocumentState:(id)arg1;	// IMP=0x000000010003daf8
- (void)_setCurrentSession:(id)arg1;	// IMP=0x000000010003dae4
- (void)_killRemoteTextEditingSession;	// IMP=0x000000010003da50
- (oneway void)endRemoteTextInputSessionWithID:(id)arg1;	// IMP=0x000000010003d904
- (oneway void)remoteTextInputSessionWithID:(id)arg1 documentTraitsDidChange:(id)arg2;	// IMP=0x000000010003d7fc
- (oneway void)remoteTextInputSessionWithID:(id)arg1 documentDidChange:(id)arg2;	// IMP=0x000000010003d684
- (oneway void)beginRemoteTextInputSessionWithID:(id)arg1 documentTraits:(id)arg2 initialDocumentState:(id)arg3;	// IMP=0x000000010003cc10
@property(readonly, nonatomic) MRTextEditingSession *currentSession;
- (void)didInitializeWithConnection:(id)arg1;	// IMP=0x000000010003cae0

@end

