//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SHService-Protocol.h"
#import "SHServiceDelegate-Protocol.h"
#import "SHXPCServiceProxy-Protocol.h"

@class NSString, SHAttribution, SHAudioTapService, SHEntitlements, SHLibraryService, SHMediaItemService, SHNotificationService, SHRecognitionService;
@protocol SHConfiguration, SHServiceDelegate, SHXPCRemoteDelegate;

__attribute__((visibility("hidden")))
@interface SHShazamService : NSObject <SHServiceDelegate, SHService, SHXPCServiceProxy>
{
    SHRecognitionService *_recognitionService;	// 8 = 0x8
    SHMediaItemService *_mediaItemService;	// 16 = 0x10
    SHNotificationService *_notificationService;	// 24 = 0x18
    SHAudioTapService *_audioTapService;	// 32 = 0x20
    SHLibraryService *_libraryService;	// 40 = 0x28
    id <SHXPCRemoteDelegate> _delegate;	// 48 = 0x30
    id <SHServiceDelegate> _serviceDelegate;	// 56 = 0x38
    SHEntitlements *_entitlements;	// 64 = 0x40
    id <SHConfiguration> _configuration;	// 72 = 0x48
    SHAttribution *_attribution;	// 80 = 0x50
    id _matchedObserver;	// 88 = 0x58
    id _noMatchObserver;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000010000b210
@property(nonatomic) __weak id noMatchObserver; // @synthesize noMatchObserver=_noMatchObserver;
@property(nonatomic) __weak id matchedObserver; // @synthesize matchedObserver=_matchedObserver;
@property(retain, nonatomic) SHAttribution *attribution; // @synthesize attribution=_attribution;
@property(retain, nonatomic) id <SHConfiguration> configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) SHEntitlements *entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic) __weak id <SHServiceDelegate> serviceDelegate; // @synthesize serviceDelegate=_serviceDelegate;
@property(readonly, nonatomic) SHLibraryService *libraryService; // @synthesize libraryService=_libraryService;
@property(readonly, nonatomic) SHAudioTapService *audioTapService; // @synthesize audioTapService=_audioTapService;
@property(readonly, nonatomic) SHNotificationService *notificationService; // @synthesize notificationService=_notificationService;
@property(readonly, nonatomic) SHMediaItemService *mediaItemService; // @synthesize mediaItemService=_mediaItemService;
@property(readonly, nonatomic) SHRecognitionService *recognitionService; // @synthesize recognitionService=_recognitionService;
- (id)services;	// IMP=0x000000010000ace8
@property(nonatomic) __weak id <SHXPCRemoteDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unobserveRecognitionNotifications;	// IMP=0x000000010000ab50
- (void)observeRecognitionNotificationsForService:(id)arg1;	// IMP=0x000000010000a654
@property(readonly, nonatomic) _Bool managesRecordingSession;
- (id)requiredEntitlements;	// IMP=0x000000010000a640
- (double)timeRequiredToPerformWork;	// IMP=0x000000010000a4e8
- (id)configurationForService:(id)arg1;	// IMP=0x000000010000a4d4
- (void)serviceUpdated:(id)arg1 withRunningState:(_Bool)arg2;	// IMP=0x000000010000a3b4
- (_Bool)shouldStartService:(id)arg1;	// IMP=0x000000010000a25c
@property(readonly, nonatomic) _Bool isRunning;
- (oneway void)stop;	// IMP=0x0000000100009fbc
- (void)synchronizeChanges:(id)arg1;	// IMP=0x0000000100009f0c
- (void)shazamIDsFromAppleMusicIDs:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009e00
- (void)mediaItemsForShazamIDs:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009cf4
- (void)mediaItemsForAppleMusicIDs:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009be8
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x0000000100009a68
- (id)initWithEntitlements:(id)arg1 configuration:(id)arg2 attribution:(id)arg3;	// IMP=0x0000000100009998
- (void)dealloc;	// IMP=0x0000000100009900

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

