//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LAContextExternalizationObserverProt-Protocol.h"
#import "LAContextServerSideProt-Protocol.h"

@class ContextPlugin, NSData, NSMutableArray, NSMutableDictionary, NSString, NSUUID;
@protocol OS_os_transaction;

@interface Context : NSObject <LAContextServerSideProt, LAContextExternalizationObserverProt>
{
    NSMutableDictionary *_serverProperties;	// 8 = 0x8
    NSMutableArray *_allowedTransfers;	// 16 = 0x10
    int _processId;	// 24 = 0x18
    unsigned int _userId;	// 28 = 0x1c
    int _auditSessionId;	// 32 = 0x20
    unsigned int _instanceId;	// 36 = 0x24
    NSUUID *_uuid;	// 40 = 0x28
    ContextPlugin *_plugin;	// 48 = 0x30
    NSObject<OS_os_transaction> *_transaction;	// 56 = 0x38
}

+ (unsigned int)newInstanceId;	// IMP=0x000000010000b938
+ (void)managedContextWithExternalizedContext:(id)arg1 processId:(int)arg2 userId:(unsigned int)arg3 auditSessionId:(int)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010000b3c4
- (void).cxx_destruct;	// IMP=0x000000010000d440
@property(readonly, nonatomic) unsigned int instanceId; // @synthesize instanceId=_instanceId;
@property(readonly, nonatomic) int auditSessionId; // @synthesize auditSessionId=_auditSessionId;
@property(readonly, nonatomic) unsigned int userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) int processId; // @synthesize processId=_processId;
@property(readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) ContextPlugin *plugin; // @synthesize plugin=_plugin;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)connectFromCaller:(id)arg1 token:(id)arg2 senderAuditTokenData:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000d098
- (void)tokenForTransferFromCaller:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000cea8
- (void)allowTransferFromCaller:(id)arg1 receiverAuditTokenData:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000cda8
- (void)authMethodWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000cd98
- (void)contextWasExternalized:(id)arg1;	// IMP=0x000000010000cd20
@property(readonly, nonatomic) NSData *externalizedContext;
- (void)externalizedContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000cb9c
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 originator:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000ca58
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ca54
- (void)resetProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000ca50
- (void)retryProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000ca4c
- (void)retryEvent:(long long)arg1 originator:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c8ec
- (void)resetEvent:(long long)arg1 originator:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c8dc
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c700
- (void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c4ec
- (void)serverPropertyForOption:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c3b0
- (id)_updateOptionsWithServerProperties:(id)arg1;	// IMP=0x000000010000c1f8
- (void)checkCredentialSatisfied:(long long)arg1 policy:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c1e8
- (void)credentialOfType:(long long)arg1 originator:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c1d8
- (void)setCredential:(id)arg1 type:(long long)arg2 options:(id)arg3 originator:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010000c108
- (void)isCredentialSet:(long long)arg1 originator:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000c0f8
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010000bda0
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 request:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x000000010000bbd0
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 request:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000010000ba58
- (_Bool)_hasProtectedOptions:(id)arg1;	// IMP=0x000000010000b9bc
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000010000b870
- (id)initWithPlugin:(id)arg1 processId:(int)arg2 userId:(unsigned int)arg3 auditSessionId:(int)arg4 externalizedContext:(id)arg5;	// IMP=0x000000010000b5f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

