//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSDServiceProvider-Protocol.h"
#import "AMSDeviceMessengerServiceInterface-Protocol.h"
#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface AMSDDeviceMessengerService : NSObject <IDSServiceDelegate, AMSDServiceProvider, AMSDeviceMessengerServiceInterface>
{
    NSArray *_cachedMessages;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSMutableArray *_delegates;	// 24 = 0x18
    NSMutableDictionary *_outgoingMessageReplyHandlers;	// 32 = 0x20
    IDSService *_service;	// 40 = 0x28
}

+ (_Bool)isConnectionEntitled:(id)arg1;	// IMP=0x000000010000e350
+ (id)sharedService;	// IMP=0x000000010000de6c
- (void).cxx_destruct;	// IMP=0x0000000100012798
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSMutableDictionary *outgoingMessageReplyHandlers; // @synthesize outgoingMessageReplyHandlers=_outgoingMessageReplyHandlers;
@property(retain, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) NSArray *cachedMessages; // @synthesize cachedMessages=_cachedMessages;
- (id)_saveLocation;	// IMP=0x00000001000126f4
- (void)_saveMessage:(id)arg1;	// IMP=0x00000001000121c0
- (void)_overwriteSavedMessages:(id)arg1;	// IMP=0x0000000100011924
- (id)_getSavedMessages;	// IMP=0x00000001000112c8
- (void)_clearMessage:(id)arg1;	// IMP=0x0000000100010f44
- (void)_cleanupSavedMessages;	// IMP=0x0000000100010ed0
- (_Bool)_sendMessage:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010840
- (id)_replyForIncomingMessage:(id)arg1;	// IMP=0x00000001000106c0
- (id)_messageWithProtobuf:(id)arg1 fromID:(id)arg2 context:(id)arg3;	// IMP=0x0000000100010200
- (void)_handleIncomingReply:(id)arg1;	// IMP=0x000000010000fec0
- (void)_handleIncomingMessage:(id)arg1;	// IMP=0x000000010000fd98
- (void)_handleErrorForIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x000000010000fb10
- (void)_enumerateDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000f898
- (long long)_determineDeviceTypeFromDeviceID:(id)arg1 devices:(id)arg2;	// IMP=0x000000010000f644
- (id)_determineDestinationsForMessage:(id)arg1;	// IMP=0x000000010000f164
- (_Bool)_attemptAutomaticHandleForMessage:(id)arg1;	// IMP=0x000000010000f0fc
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000010000efa0
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x000000010000ed1c
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000010000eba8
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e60c
- (void)getMessagesWithPurpose:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e3e4
- (void)addDelegate:(id)arg1;	// IMP=0x000000010000e220
- (id)init;	// IMP=0x000000010000ded8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
