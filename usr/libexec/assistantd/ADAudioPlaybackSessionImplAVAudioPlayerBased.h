//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADAudioPlaybackSession-Protocol.h"
#import "AVAudioPlayerDelegate-Protocol.h"

@class AFAudioPlaybackRequest, AVAudioPlayer, AVAudioSession, NSString;
@protocol OS_dispatch_queue;

@interface ADAudioPlaybackSessionImplAVAudioPlayerBased : NSObject <AVAudioPlayerDelegate, ADAudioPlaybackSession>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AVAudioPlayer *_player;	// 16 = 0x10
    AVAudioSession *_audioSession;	// 24 = 0x18
    _Bool _isActive;	// 32 = 0x20
    _Bool _isPrepared;	// 33 = 0x21
    CDUnknownBlockType _completion;	// 40 = 0x28
    AFAudioPlaybackRequest *_request;	// 48 = 0x30
    unsigned long long _options;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000c2fac
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) AFAudioPlaybackRequest *request; // @synthesize request=_request;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;	// IMP=0x00000001000c2e70
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;	// IMP=0x00000001000c2d0c
- (void)_finalizeWithError:(id)arg1;	// IMP=0x00000001000c2be4
- (void)_didStopWithError:(id)arg1;	// IMP=0x00000001000c2a50
- (void)_didNotStartWithError:(id)arg1;	// IMP=0x00000001000c29c4
- (void)_handleEndInterruption:(_Bool)arg1;	// IMP=0x00000001000c285c
- (void)_handleBeginInterruption;	// IMP=0x00000001000c2720
- (void)_stop:(_Bool)arg1;	// IMP=0x00000001000c23c8
- (void)_startWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 preparationHandler:(CDUnknownBlockType)arg3 executionHandler:(CDUnknownBlockType)arg4 finalizationHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000c1f28
- (_Bool)_prepareWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000c197c
- (void)handleEndInterruption:(_Bool)arg1;	// IMP=0x00000001000c1944
- (void)handleBeginInterruption;	// IMP=0x00000001000c1914
- (void)stop:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c18b0
- (void)startWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 preparationHandler:(CDUnknownBlockType)arg3 executionHandler:(CDUnknownBlockType)arg4 finalizationHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000c17f0
- (void)prepareWithOptions:(unsigned long long)arg1 audioSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000c1738
- (id)initWithQueue:(id)arg1 request:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00000001000c1678
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
