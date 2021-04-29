//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "PBTapGestureRecognizerDelegate-Protocol.h"

@class NSString, PBInternalShortcutManager, PBSystemKeychordsGestureRecognizer, PBTapGestureRecognizer, UILongPressGestureRecognizer, UITapGestureRecognizer, _UIRepeatingPressGestureRecognizer;

@interface PBWindow : UIWindow <PBTapGestureRecognizerDelegate>
{
    UILongPressGestureRecognizer *_microphoneLongPressRecognizer;	// 8 = 0x8
    UITapGestureRecognizer *_microphoneTapRecognizer;	// 16 = 0x10
    PBTapGestureRecognizer *_microphoneTapDownRecognizer;	// 24 = 0x18
    UILongPressGestureRecognizer *_tvLongPressRecognizer;	// 32 = 0x20
    PBTapGestureRecognizer *_tvTapRecognizer;	// 40 = 0x28
    PBTapGestureRecognizer *_tvDoubleTapRecognizer;	// 48 = 0x30
    UILongPressGestureRecognizer *_rapidVolumeUpRecognizer;	// 56 = 0x38
    UILongPressGestureRecognizer *_rapidVolumeDownRecognizer;	// 64 = 0x40
    UILongPressGestureRecognizer *_longPressMenuRecognizer;	// 72 = 0x48
    UILongPressGestureRecognizer *_longPressHomeRecognizer;	// 80 = 0x50
    UITapGestureRecognizer *_tapMenuRecognizer;	// 88 = 0x58
    UITapGestureRecognizer *_tapACHomeRecognizer;	// 96 = 0x60
    UITapGestureRecognizer *_tripleTapMenuRecognizer;	// 104 = 0x68
    UITapGestureRecognizer *_quadrupleTapMenuRecognizer;	// 112 = 0x70
    UITapGestureRecognizer *_doubleTapMenuRecognizer;	// 120 = 0x78
    UITapGestureRecognizer *_doubleTapACHomeRecognizer;	// 128 = 0x80
    UITapGestureRecognizer *_tapExposeAllRecognizer;	// 136 = 0x88
    UITapGestureRecognizer *_tapPowerRecognizer;	// 144 = 0x90
    UILongPressGestureRecognizer *_powerLongPressRecognizer;	// 152 = 0x98
    UILongPressGestureRecognizer *_rewindLongPressRecognizer;	// 160 = 0xa0
    UILongPressGestureRecognizer *_fastForwardLongPressRecognizer;	// 168 = 0xa8
    UITapGestureRecognizer *_playPauseTapRecognizer;	// 176 = 0xb0
    PBTapGestureRecognizer *_playTapRecognizer;	// 184 = 0xb8
    PBTapGestureRecognizer *_pauseTapRecognizer;	// 192 = 0xc0
    PBTapGestureRecognizer *_stopTapRecognizer;	// 200 = 0xc8
    UITapGestureRecognizer *_rewindTapRecognizer;	// 208 = 0xd0
    UITapGestureRecognizer *_fastForwardTapRecognizer;	// 216 = 0xd8
    PBTapGestureRecognizer *_nextTrackTapRecognizer;	// 224 = 0xe0
    PBTapGestureRecognizer *_previousTrackTapRecognizer;	// 232 = 0xe8
    _UIRepeatingPressGestureRecognizer *_skipForwardsRepeatingPressRecognizer;	// 240 = 0xf0
    _UIRepeatingPressGestureRecognizer *_skipBackwardsRepeatingPressRecognizer;	// 248 = 0xf8
    PBSystemKeychordsGestureRecognizer *_sysdiagnoseRecognizer;	// 256 = 0x100
    PBSystemKeychordsGestureRecognizer *_screenshotRecognizer;	// 264 = 0x108
    PBSystemKeychordsGestureRecognizer *_blackScreenRecoveryRecognizer;	// 272 = 0x110
    UITapGestureRecognizer *_channelGuideTapRecognizer;	// 280 = 0x118
    UILongPressGestureRecognizer *_channelGuideLongPressRecognizer;	// 288 = 0x120
    PBInternalShortcutManager *_internalShortcutManager;	// 296 = 0x128
    _Bool _shouldOcclude;	// 304 = 0x130
    _Bool _occluding;	// 305 = 0x131
    NSString *_name;	// 312 = 0x138
}

+ (void)_decrementOcclusionCounter;	// IMP=0x00000001000edf9c
+ (void)_incrementOcclusionCounter;	// IMP=0x00000001000edad4
- (void).cxx_destruct;	// IMP=0x00000001000f1ac8
@property(nonatomic, getter=isOccluding) _Bool occluding; // @synthesize occluding=_occluding;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool shouldOcclude; // @synthesize shouldOcclude=_shouldOcclude;
- (void)_systemKeychordRecognized:(id)arg1;	// IMP=0x00000001000f183c
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeOnPressDown:(id)arg2;	// IMP=0x00000001000f16c0
- (_Bool)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2;	// IMP=0x00000001000f1284
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000001000f10a0
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000001000f0cb4
- (id)_newTripleTapGestureRecognizerWithPressTypes:(id)arg1;	// IMP=0x00000001000f0ba8
- (void)setSystemGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00000001000f06d8
- (void)setPlaybackGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00000001000efbe8
- (void)setPowerGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00000001000ef96c
- (void)setTripleTapMenuGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00000001000ef884
- (void)setMenuGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00000001000eef48
- (void)setChannelGuideGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00000001000eecec
- (void)setMicrophoneGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00000001000ee93c
- (void)setExposeAllGestureRecognizerEnabled:(_Bool)arg1;	// IMP=0x00000001000ee814
- (void)setTVGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00000001000ee44c
- (void)setVolumeGestureRecognizersEnabled:(_Bool)arg1;	// IMP=0x00000001000ee218
- (void)_updateOccludingState;	// IMP=0x00000001000ed9cc
- (void)setHidden:(_Bool)arg1;	// IMP=0x00000001000ed66c
- (void)setWindowLevel:(double)arg1;	// IMP=0x00000001000ed528
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000001000ed30c
- (id)initWithFrame:(struct CGRect)arg1 name:(id)arg2;	// IMP=0x00000001000ed194
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000ed0e8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000ed060

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
