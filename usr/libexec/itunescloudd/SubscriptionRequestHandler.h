//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BaseRequestHandler.h"

#import "ICEnvironmentMonitorObserver-Protocol.h"

@class CloudArtworkImporter, NSString;

@interface SubscriptionRequestHandler : BaseRequestHandler <ICEnvironmentMonitorObserver>
{
    CloudArtworkImporter *_artworkImporter;	// 8 = 0x8
}

+ (id)handler;	// IMP=0x00000001000ba32c
+ (id)handlers;	// IMP=0x00000001000ba2ec
- (void).cxx_destruct;	// IMP=0x00000001000b9918
@property(readonly, nonatomic) CloudArtworkImporter *artworkImporter; // @synthesize artworkImporter=_artworkImporter;
- (void)_importAllItemArtwork;	// IMP=0x00000001000b9818
- (void)_loadArtworkInfoForSubscriptionPersistentIDs:(id)arg1 artworkType:(long long)arg2 entityType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000b90fc
- (void)environmentMonitorDidChangePower:(id)arg1;	// IMP=0x00000001000b8f60
- (void)loadMissingArtwork;	// IMP=0x00000001000b8f54
- (void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b8f3c
- (void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b8f24
- (void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b8f0c
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)arg1;	// IMP=0x00000001000b8ec0
- (void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)arg1;	// IMP=0x00000001000b8e74
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)arg1;	// IMP=0x00000001000b8e28
- (void)importContainerArtworkForPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b8b3c
- (void)importScreenshotForPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b87e4
- (void)importItemArtworkForPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b848c
- (void)becomeInactiveWithDeauthentication:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b80f0
- (void)becomeActive;	// IMP=0x00000001000b80ec
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000001000b8010

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

