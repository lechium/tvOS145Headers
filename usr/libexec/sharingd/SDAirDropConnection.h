//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDAirDropFileZipperDelegate-Protocol.h"

@class NSData, NSMutableData, NSMutableDictionary, NSProgress, NSString, NSURL, SDAirDropFileZipper, SDStatusMonitor;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_os_transaction, SDAirDropConnectionDelegate;

__attribute__((visibility("hidden")))
@interface SDAirDropConnection : NSObject <SDAirDropFileZipperDelegate>
{
    _Bool _discover;	// 8 = 0x8
    _Bool _personAdded;	// 9 = 0x9
    _Bool _stopDeferred;	// 10 = 0xa
    _Bool _userAccepted;	// 11 = 0xb
    _Bool _senderTrusted;	// 12 = 0xc
    _Bool _delayedFinish;	// 13 = 0xd
    _Bool _queueSuspended;	// 14 = 0xe
    _Bool _endEncountered;	// 15 = 0xf
    _Bool _connectionClosed;	// 16 = 0x10
    _Bool _transactionStarted;	// 17 = 0x11
    struct __SFNode *_person;	// 24 = 0x18
    NSURL *_destination;	// 32 = 0x20
    char *_requestBuffer;	// 40 = 0x28
    NSProgress *_progress;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    struct __SecTrust *_clientTrust;	// 64 = 0x40
    double _startTime;	// 72 = 0x48
    SDStatusMonitor *_monitor;	// 80 = 0x50
    long long _lastEvent;	// 88 = 0x58
    NSMutableData *_requestData;	// 96 = 0x60
    struct __CFReadStream *_readStream;	// 104 = 0x68
    SDAirDropFileZipper *_zipper;	// 112 = 0x70
    NSMutableDictionary *_properties;	// 120 = 0x78
    unsigned int _powerAssertionID;	// 128 = 0x80
    NSObject<OS_dispatch_semaphore> *_askSemaphore;	// 136 = 0x88
    struct _CFHTTPServerRequest *_askRequest;	// 144 = 0x90
    struct _CFHTTPServerRequest *_uploadRequest;	// 152 = 0x98
    struct _CFHTTPServerRequest *_discoverRequest;	// 160 = 0xa0
    struct _CFHTTPServerConnection *_connection;	// 168 = 0xa8
    NSData *_mediaCapabilities;	// 176 = 0xb0
    NSObject<OS_os_transaction> *_transaction;	// 184 = 0xb8
    _Bool _contactsOnly;	// 192 = 0xc0
    _Bool _shouldExtractMediaFromPhotosBundles;	// 193 = 0xc1
    NSString *_sessionID;	// 200 = 0xc8
    id <SDAirDropConnectionDelegate> _delegate;	// 208 = 0xd0
}

+ (id)validatedItemsArray:(id)arg1;	// IMP=0x000000010016b568
+ (id)validatedFilesArray:(id)arg1;	// IMP=0x000000010016b2e4
+ (id)validatedFileInfo:(id)arg1;	// IMP=0x000000010016af8c
+ (id)fileInfoExpectedClassForKeyMap;	// IMP=0x000000010016ae14
- (void).cxx_destruct;	// IMP=0x0000000100170c98
@property __weak id <SDAirDropConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool shouldExtractMediaFromPhotosBundles; // @synthesize shouldExtractMediaFromPhotosBundles=_shouldExtractMediaFromPhotosBundles;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy) NSURL *destination; // @synthesize destination=_destination;
@property _Bool contactsOnly; // @synthesize contactsOnly=_contactsOnly;
- (void)stop;	// IMP=0x00000001001709a4
- (_Bool)accept;	// IMP=0x0000000100170878
- (void)start;	// IMP=0x00000001001706f8
- (void)startPublishingProgressForPlaceholderFiles:(id)arg1;	// IMP=0x00000001001706f4
- (void)schedule;	// IMP=0x00000001001706c0
- (void)fileZipper:(id)arg1 event:(long long)arg2 withProperty:(void *)arg3;	// IMP=0x0000000100170524
- (_Bool)transferIsOverPrebufferLimit;	// IMP=0x00000001001704b0
- (void)setCombinedFileURLsAndItems:(id)arg1;	// IMP=0x00000001001703e4
- (void)setSpotlightMetadata:(id)arg1;	// IMP=0x00000001001703e0
- (id)whereFromInfo;	// IMP=0x0000000100170338
- (void)handleClosedConnection;	// IMP=0x0000000100170154
- (void)didFailToSendResponse:(struct _CFHTTPServerResponse *)arg1;	// IMP=0x0000000100170094
- (void)didSendResponse:(struct _CFHTTPServerResponse *)arg1 forRequest:(struct _CFHTTPServerRequest *)arg2;	// IMP=0x000000010016fd54
- (void)finishOperation;	// IMP=0x000000010016f9d4
- (void)notifyClientOfBytesCopied:(id)arg1 timeRemaining:(id)arg2;	// IMP=0x000000010016f894
- (long long)getStatusCode:(struct _CFHTTPServerResponse *)arg1;	// IMP=0x000000010016f844
- (void)didReceiveRequest:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x000000010016ee0c
- (void)enqueueBadResponseForRequest:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x000000010016ec8c
- (void)makeDestinationDirectory;	// IMP=0x000000010016ea90
- (_Bool)oneHundredContinue:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x000000010016ea30
- (void)enqueueResponse:(struct _CFHTTPServerRequest *)arg1 code:(long long)arg2 body:(struct __CFData *)arg3;	// IMP=0x000000010016e9a8
- (void)silentlyCancelRequest;	// IMP=0x000000010016e8b8
- (_Bool)senderInfoAvailable;	// IMP=0x000000010016e824
- (_Bool)thereIsEnoughFreeSpace;	// IMP=0x000000010016e6f4
- (_Bool)startReceivingFile:(struct _CFHTTPServerRequest *)arg1 error:(id *)arg2;	// IMP=0x000000010016e314
- (id)compressionType;	// IMP=0x000000010016e23c
- (_Bool)startReceivingBody:(struct _CFHTTPServerRequest *)arg1 error:(id *)arg2;	// IMP=0x000000010016e0a4
- (void)handleReadStreamEvent:(struct __CFReadStream *)arg1 event:(unsigned long long)arg2;	// IMP=0x000000010016df10
- (void)processRequest;	// IMP=0x000000010016de54
- (void)cancelAndDecline;	// IMP=0x000000010016dda0
- (void)handleAskRequest;	// IMP=0x000000010016d8e4
- (void)adjustPropertiesForPhotosBundles;	// IMP=0x000000010016d678
- (_Bool)allowAskRequestFromPerson:(struct __SFNode *)arg1;	// IMP=0x000000010016d59c
- (void)parseAskRequest;	// IMP=0x000000010016d338
- (void)handleDiscoverRequest;	// IMP=0x000000010016d198
- (void)parseDiscoverRequest;	// IMP=0x000000010016d058
- (void)convertURLStringsToURLs;	// IMP=0x000000010016ce88
- (void)silentlyCancelRequestOnMainThread;	// IMP=0x000000010016ce20
- (_Bool)senderIsMe;	// IMP=0x000000010016cc2c
- (_Bool)senderIsTrusted:(id)arg1;	// IMP=0x000000010016ca84
- (_Bool)senderIsBlocked;	// IMP=0x000000010016ca7c
- (void)logSenderIsBlocked;	// IMP=0x000000010016ca20
- (struct __SFNode *)createPersonForAskRequest;	// IMP=0x000000010016c5d0
- (void)sendUploadResponse:(long long)arg1;	// IMP=0x000000010016c54c
- (void)releaseIdleSleepAssertion;	// IMP=0x000000010016c448
- (void)sendAskResponse:(long long)arg1;	// IMP=0x000000010016c23c
- (void)sendDiscoverResponse:(long long)arg1 forKnownAlias:(id)arg2;	// IMP=0x000000010016bd00
- (void)storeIconValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x000000010016bc1c
- (void)storeBooleanValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x000000010016bb70
- (void)storeNumberValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x000000010016bac4
- (void)storeStringValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x000000010016ba18
- (void)storeDataValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x000000010016b96c
- (void)storeRequestValue:(struct _CFHTTPServerRequest *)arg1 forKey:(struct __CFString *)arg2 convertToNumber:(_Bool)arg3;	// IMP=0x000000010016b810
- (void)storeArrayValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x000000010016b688
- (void)setProperty:(void *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x000000010016ae00
- (void)didReceiveError:(struct __CFError *)arg1;	// IMP=0x000000010016ad04
- (void)notifyClientForEvent:(long long)arg1;	// IMP=0x000000010016a3f8
- (void)performBlockForAllProgresses:(CDUnknownBlockType)arg1;	// IMP=0x000000010016a3e8
- (double)getTransferRate;	// IMP=0x000000010016a360
- (void)notifyClient:(long long)arg1 withResults:(id)arg2;	// IMP=0x000000010016a2d8
- (void)handleTerminalCallBack;	// IMP=0x000000010016a268
- (void)removeObservers;	// IMP=0x000000010016a218
- (void)addObservers;	// IMP=0x000000010016a1b0
- (void)wirelessPowerChanged:(id)arg1;	// IMP=0x000000010016a0c8
- (void)systemWillSleep:(id)arg1;	// IMP=0x0000000100169ff4
- (void)didCloseConnection;	// IMP=0x0000000100169f80
- (void)dealloc;	// IMP=0x0000000100169e60
- (id)initWithConnection:(struct _CFHTTPServerConnection *)arg1;	// IMP=0x0000000100169d08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

