//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSPeerIDQueryHandler-Protocol.h"

@class FTMessageDelivery_DualMode, NSMutableArray, NSMutableDictionary, NSString;
@protocol IDSPeerIDNetworkChangeNotifier, IDSPeerIDPushHandler, IDSPeerIDQueryHandlerDataSource, IDSPeerIDQueryHandlerDelegate;

@interface IDSPeerIDQueryHandler : NSObject <IDSPeerIDQueryHandler>
{
    _Bool _isInServerBackoffMode;	// 8 = 0x8
    FTMessageDelivery_DualMode *_dualInterfaceidQueryMessageDelivery;	// 16 = 0x10
    NSMutableArray *_queryQueue;	// 24 = 0x18
    NSMutableDictionary *_completionBlocksToURIsMap;	// 32 = 0x20
    NSMutableDictionary *_extraCompletionBlocks;	// 40 = 0x28
    NSMutableDictionary *_disasterModeTokens;	// 48 = 0x30
    id <IDSPeerIDNetworkChangeNotifier> _networkChangeNotifier;	// 56 = 0x38
    id <IDSPeerIDPushHandler> _pushHandler;	// 64 = 0x40
    id <IDSPeerIDQueryHandlerDelegate> _delegate;	// 72 = 0x48
    id <IDSPeerIDQueryHandlerDataSource> _dataSource;	// 80 = 0x50
}

+ (int)queryRetryNumberForBadSignature;	// IMP=0x0000000100507568
+ (double)queryRetryIntervalForBadSignature;	// IMP=0x00000001005074a8
+ (_Bool)isQueryRetryForBadSignatureEnabled;	// IMP=0x00000001005073e0
+ (int)serverBackoffModeReceiverRetryInterval;	// IMP=0x0000000100507284
+ (int)serverBackoffModeMaxSenderRetries;	// IMP=0x000000010050712c
+ (_Bool)isServerBackoffModeActive;	// IMP=0x0000000100507088
+ (_Bool)shouldUseSelfTokens;	// IMP=0x0000000100506fb4
- (void).cxx_destruct;	// IMP=0x0000000100513488
@property(retain, nonatomic) id <IDSPeerIDQueryHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IDSPeerIDQueryHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <IDSPeerIDPushHandler> pushHandler; // @synthesize pushHandler=_pushHandler;
@property(retain, nonatomic) id <IDSPeerIDNetworkChangeNotifier> networkChangeNotifier; // @synthesize networkChangeNotifier=_networkChangeNotifier;
@property(nonatomic) _Bool isInServerBackoffMode; // @synthesize isInServerBackoffMode=_isInServerBackoffMode;
@property(retain, nonatomic) NSMutableDictionary *disasterModeTokens; // @synthesize disasterModeTokens=_disasterModeTokens;
@property(retain, nonatomic) NSMutableDictionary *extraCompletionBlocks; // @synthesize extraCompletionBlocks=_extraCompletionBlocks;
@property(retain, nonatomic) NSMutableDictionary *completionBlocksToURIsMap; // @synthesize completionBlocksToURIsMap=_completionBlocksToURIsMap;
@property(retain, nonatomic) NSMutableArray *queryQueue; // @synthesize queryQueue=_queryQueue;
@property(retain, nonatomic) FTMessageDelivery_DualMode *dualInterfaceidQueryMessageDelivery; // @synthesize dualInterfaceidQueryMessageDelivery=_dualInterfaceidQueryMessageDelivery;
- (void)removeCompletionBlockForToken:(id)arg1;	// IMP=0x0000000100512f64
- (void)addCompletionBlock:(CDUnknownBlockType)arg1 forToken:(id)arg2;	// IMP=0x0000000100512b18
- (_Bool)startQueryForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 context:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000010051299c
- (void)_dequeuePendingQueryIfPossible;	// IMP=0x0000000100509590
- (void)_startQueryForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 context:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x0000000100508b54
- (void)_removeCompletionBlocksForURIs:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3;	// IMP=0x0000000100508734
- (id)_completionBlocksForURIs:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3;	// IMP=0x00000001005085b4
- (_Bool)_addCompletionBlock:(CDUnknownBlockType)arg1 forURIs:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4;	// IMP=0x0000000100507d58
- (void)_bagLoaded:(id)arg1;	// IMP=0x0000000100507a7c
- (void)dealloc;	// IMP=0x00000001005079dc
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 dualMessageDelivery:(id)arg3 networkChangeNotifier:(id)arg4 pushHandler:(id)arg5;	// IMP=0x00000001005077b4
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000010050762c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
