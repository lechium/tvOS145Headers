//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAssetResourceLoaderDelegate-Protocol.h"

@class IPodLibraryItem, NSMutableDictionary, NSString;
@protocol DownloadAssetFairPlayStreamingKeyLoaderDelegate, OS_dispatch_queue;

@interface DownloadAssetFairPlayStreamingKeyLoader : NSObject <AVAssetResourceLoaderDelegate>
{
    NSObject<OS_dispatch_queue> *_resourceLoaderQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_persistenceQueue;	// 16 = 0x10
    NSMutableDictionary *_mutableCachedKeys;	// 24 = 0x18
    id <DownloadAssetFairPlayStreamingKeyLoaderDelegate> _delegate;	// 32 = 0x20
    long long _downloadIdentifier;	// 40 = 0x28
    IPodLibraryItem *_libraryItem;	// 48 = 0x30
    long long _rentalIdentifier;	// 56 = 0x38
    long long _storeItemIdentifier;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010009ec7c
@property(readonly, nonatomic) long long storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;
@property(readonly, nonatomic) long long rentalIdentifier; // @synthesize rentalIdentifier=_rentalIdentifier;
@property(readonly, nonatomic) IPodLibraryItem *libraryItem; // @synthesize libraryItem=_libraryItem;
@property(readonly) long long downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
@property __weak id <DownloadAssetFairPlayStreamingKeyLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_track;	// IMP=0x000000010009e8d4
- (void)_persistURI:(id)arg1 persistentContentKey:(id)arg2;	// IMP=0x000000010009e8d0
- (void)_persistKeys;	// IMP=0x000000010009e8cc
- (id)_pastisKeyServerURL;	// IMP=0x000000010009e80c
- (id)_pastisCertificateURL;	// IMP=0x000000010009e74c
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;	// IMP=0x000000010009e744
- (void)persistKeys;	// IMP=0x000000010009e740
- (void)applyResourceLoaderDelegate:(id)arg1;	// IMP=0x000000010009e724
- (id)initWithDownloadEntity:(id)arg1;	// IMP=0x000000010009e590

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

