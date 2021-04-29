//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRDNowPlayingOriginClient, MRPlayerPath, MSVPersistentTimer, NSNumber, NSString;
@protocol MRDElectedPlayerControllerDelegate;

@interface MRDElectedPlayerController : NSObject
{
    NSString *_activeSystemEndpointOutputDeviceUID;	// 8 = 0x8
    NSNumber *_changeType;	// 16 = 0x10
    MSVPersistentTimer *_playbackTimer;	// 24 = 0x18
    MRPlayerPath *_electedPlayerPath;	// 32 = 0x20
    MRPlayerPath *_previousElectedPlayerPath;	// 40 = 0x28
    NSString *_event;	// 48 = 0x30
    NSString *_eventReason;	// 56 = 0x38
    NSString *_selectionReason;	// 64 = 0x40
    NSString *_mostRecentEvent;	// 72 = 0x48
    NSString *_mostRecentEventReason;	// 80 = 0x50
    NSString *_mostRecentSelectionReason;	// 88 = 0x58
    id <MRDElectedPlayerControllerDelegate> _delegate;	// 96 = 0x60
    MRDNowPlayingOriginClient *_originClient;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000100094704
@property(retain, nonatomic) MRDNowPlayingOriginClient *originClient; // @synthesize originClient=_originClient;
@property(nonatomic) id <MRDElectedPlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *mostRecentSelectionReason; // @synthesize mostRecentSelectionReason=_mostRecentSelectionReason;
@property(readonly, nonatomic) NSString *mostRecentEventReason; // @synthesize mostRecentEventReason=_mostRecentEventReason;
@property(readonly, nonatomic) NSString *mostRecentEvent; // @synthesize mostRecentEvent=_mostRecentEvent;
@property(readonly, nonatomic) NSString *selectionReason; // @synthesize selectionReason=_selectionReason;
@property(readonly, nonatomic) NSString *eventReason; // @synthesize eventReason=_eventReason;
@property(readonly, nonatomic) NSString *event; // @synthesize event=_event;
@property(readonly, nonatomic) MRPlayerPath *previousElectedPlayerPath; // @synthesize previousElectedPlayerPath=_previousElectedPlayerPath;
@property(readonly, nonatomic) MRPlayerPath *electedPlayerPath; // @synthesize electedPlayerPath=_electedPlayerPath;
- (void)_onSyncSelf_maybeSetupPlaybackTimeoutTimerForEvent:(long long)arg1;	// IMP=0x00000001000941b4
- (id)_onSyncSelf_calculateElectedPlayerForOriginClient:(id)arg1 event:(long long)arg2 reason:(id *)arg3;	// IMP=0x0000000100093eb4
- (long long)_resolveChangeTypeWithOriginClient:(id)arg1 forEvent:(long long)arg2;	// IMP=0x0000000100093b2c
- (void)_onSyncSelf_reevaluateElectedPlayerForEvent:(long long)arg1 withReason:(id)arg2;	// IMP=0x0000000100093650
- (void)_handleActiveSystemEndpointDidChangeNotification:(id)arg1;	// IMP=0x0000000100093108
- (void)_handleNowPlayingApplicationDidForegroundNotification:(id)arg1;	// IMP=0x0000000100092fb0
- (void)_handleNowPlayingApplicationDidChangeNotification:(id)arg1;	// IMP=0x0000000100092e9c
- (void)_handleIsPlayingDidChangeNotification:(id)arg1;	// IMP=0x0000000100092d14
- (void)_handlePlaybackQueueChangedNotification:(id)arg1;	// IMP=0x0000000100092c0c
- (_Bool)_shouldUseNotification:(id)arg1;	// IMP=0x0000000100092b6c
@property(retain, nonatomic) NSString *activeSystemEndpointOutputDeviceUID;
- (void)setOriginClient:(id)arg1 withChangeType:(long long)arg2;	// IMP=0x0000000100092a04
- (id)initWithOriginClient:(id)arg1;	// IMP=0x00000001000925f8

@end

