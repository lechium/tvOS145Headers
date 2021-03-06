//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DirectUploadSessionDelegate-Protocol.h"
#import "MediaSocialAuthenticationDelegate-Protocol.h"
#import "MediaSocialErrorDelegate-Protocol.h"
#import "MediaSocialStatusPollingDelegate-Protocol.h"

@class DirectUploadSessionController, ISOperationQueue, MediaSocialAuthenticationCoordinator, MediaSocialErrorCoordinator, MediaSocialStatusPollingCoordinator, NSMutableArray, NSMutableDictionary, NSString, SSSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface DirectUploadController : NSObject <DirectUploadSessionDelegate, MediaSocialAuthenticationDelegate, MediaSocialErrorDelegate, MediaSocialStatusPollingDelegate>
{
    MediaSocialAuthenticationCoordinator *_authenticationCoordinator;	// 8 = 0x8
    id _backgroundTaskObserver;	// 16 = 0x10
    NSMutableArray *_clients;	// 24 = 0x18
    SSSQLiteDatabase *_database;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    MediaSocialErrorCoordinator *_errorCoordinator;	// 48 = 0x30
    MediaSocialStatusPollingCoordinator *_pollingCoordinator;	// 56 = 0x38
    ISOperationQueue *_postOperationQueue;	// 64 = 0x40
    NSMutableDictionary *_progressDictionary;	// 72 = 0x48
    DirectUploadSessionController *_sessionController;	// 80 = 0x50
}

+ (void)_setupDatabase:(id)arg1;	// IMP=0x0000000100060d34
+ (void)_sendAccessDeniedErrorWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100060b18
+ (id)_orderedUploadQueryWithDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x0000000100060a14
+ (id)_orderedPostQueryWithDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x0000000100060910
+ (_Bool)_isConnectionEntitled:(id)arg1;	// IMP=0x00000001000608ac
+ (id)_copyPersistentIdentifiersArrayWithXPCArray:(id)arg1;	// IMP=0x000000010006077c
+ (void)resumeUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010005d450
+ (void)registerObserverWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010005d2f0
+ (void)pauseUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010005ceec
+ (void)observeXPCServer:(id)arg1;	// IMP=0x000000010005ce24
+ (void)getUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010005cacc
+ (void)cancelUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010005c5dc
+ (id)sharedController;	// IMP=0x000000010005b61c
- (void).cxx_destruct;	// IMP=0x0000000100066334
- (id)_sessionController;	// IMP=0x00000001000662cc
- (void)_sendRemoveUploadsMessageWithUploadIdentifiers:(id)arg1;	// IMP=0x0000000100066124
- (void)_sendChangeUploadsMessageWithUploads:(id)arg1;	// IMP=0x0000000100065f7c
- (void)_retryFailedEntities;	// IMP=0x000000010006590c
- (_Bool)_resumeUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 resetFailureCount:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000100065204
- (void)_registerObserverWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100064d30
- (id)_postOperationQueue;	// IMP=0x0000000100064cc0
- (id)_pollingCoordinator;	// IMP=0x0000000100064c58
- (_Bool)_pauseUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000646b8
- (void)_operationDidFinishForPostIdentifier:(long long)arg1 response:(id)arg2;	// IMP=0x0000000100063864
- (id)_newSSVDirectUploadWithProgress:(id)arg1 state:(long long)arg2;	// IMP=0x0000000100063790
- (id)_newAddUploadsMessageWithDatabase:(id)arg1 hydratedUploadIDs:(id)arg2;	// IMP=0x0000000100063498
- (id)_errorCoordinator;	// IMP=0x0000000100063430
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010006323c
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100063110
- (void)_finishPostWithPostIdentifier:(long long)arg1 response:(id)arg2;	// IMP=0x0000000100062b50
- (void)_enumerateSSVDirectUploadsWithQuery:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001000629ac
- (void)_enqueueNextReadyMediaSocialPostOperationWithDatabase:(id)arg1;	// IMP=0x00000001000623fc
- (id)_databaseIfExists;	// IMP=0x0000000100062340
- (id)_database;	// IMP=0x00000001000621e8
- (void)_cleanupPendingUploads:(id)arg1 database:(id)arg2;	// IMP=0x000000010006172c
- (void)_cleanupSessionController;	// IMP=0x00000001000616c4
- (_Bool)_cancelUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100060e68
- (id)_authenticationCoordinator;	// IMP=0x0000000100060e00
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x0000000100060404
- (void)pollingCoordinator:(id)arg1 didPollWithResponses:(id)arg2;	// IMP=0x000000010005ffe4
- (void)mediaSocialErrorCoordinator:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x000000010005f018
- (void)authenticationCoordinator:(id)arg1 didFinishAuthenticationWithResponse:(id)arg2;	// IMP=0x000000010005e580
- (void)uploadSessionController:(id)arg1 uploadProgressDidChange:(id)arg2;	// IMP=0x000000010005e350
- (void)uploadSessionController:(id)arg1 uploadDidFinishWithDatabaseID:(long long)arg2 response:(id)arg3;	// IMP=0x000000010005e0c8
- (void)uploadSessionController:(id)arg1 uploadDidFailWithDatabaseID:(long long)arg2 error:(id)arg3;	// IMP=0x000000010005da4c
- (void)uploadSessionController:(id)arg1 uploadDidBeginTransferWithDatabaseID:(long long)arg2;	// IMP=0x000000010005d864
- (void)uploadSessionController:(id)arg1 taskDidStopWithDatabaseID:(long long)arg2;	// IMP=0x000000010005d858
- (void)start;	// IMP=0x000000010005c1c4
- (void)addMediaSocialPostWithDescription:(id)arg1 client:(id)arg2;	// IMP=0x000000010005b6b8
- (void)dealloc;	// IMP=0x000000010005b504
- (id)init;	// IMP=0x000000010005b49c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

