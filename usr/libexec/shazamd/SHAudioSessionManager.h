//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, SHAudioSessionManagerDelegate;

__attribute__((visibility("hidden")))
@interface SHAudioSessionManager : NSObject
{
    _Bool _isAudioSessionInterrupted;	// 8 = 0x8
    id <SHAudioSessionManagerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_audioManagerDispatchQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000c5d8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioManagerDispatchQueue; // @synthesize audioManagerDispatchQueue=_audioManagerDispatchQueue;
@property(nonatomic) _Bool isAudioSessionInterrupted; // @synthesize isAudioSessionInterrupted=_isAudioSessionInterrupted;
@property(nonatomic) __weak id <SHAudioSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)areHeadphonesOrExternalSpeakerConnectedWhileAudioPlaying;	// IMP=0x000000010000c514
- (void)handleAudioSessionRouteChange:(id)arg1;	// IMP=0x000000010000c45c
- (_Bool)isExternalSpeakerConnected;	// IMP=0x000000010000c15c
- (_Bool)areHeadphonesConnected;	// IMP=0x000000010000bf98
- (void)configureAudioSession;	// IMP=0x000000010000bbf0
- (void)handleMediaServicesWereReset:(id)arg1;	// IMP=0x000000010000bb48
- (void)handleMediaServicesWereLost:(id)arg1;	// IMP=0x000000010000baa0
- (void)handleAudioSessionInterruption:(id)arg1;	// IMP=0x000000010000b87c
- (void)deactivateAudioSession;	// IMP=0x000000010000b710
- (void)activateAudioSessionWithOptions:(unsigned long long)arg1;	// IMP=0x000000010000b6d4
- (id)init;	// IMP=0x000000010000b66c
- (void)removeObservers;	// IMP=0x000000010000b4e8
- (void)registerObservers;	// IMP=0x000000010000b344
- (void)dealloc;	// IMP=0x000000010000b2a8

@end
