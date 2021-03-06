//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BaseListener.h"

#import "ASDStoreQueueProtocol-Protocol.h"

@class NSString;

@interface StoreQueueListener : BaseListener <ASDStoreQueueProtocol>
{
}

- (void)_initializeConnection:(id)arg1;	// IMP=0x0000000100061664
- (void)_handleDisconnect:(id)arg1;	// IMP=0x0000000100061578
- (id)_clientID;	// IMP=0x000000010006150c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100061300
- (void)managedApplicationRequestWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000611b8
- (void)getAutomaticDownloadQueueWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010006105c
- (void)getDownloadQueueWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100060f00
- (void)claimApplicationsWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100060d50
- (void)checkQueueWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100060b54
- (id)init;	// IMP=0x0000000100060b20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

