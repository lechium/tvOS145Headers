//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RPDelegateBase.h"

#import "RPScreenCaptureManagerProtocol-Protocol.h"

@class NSObject, NSString, RPAppAudioCaptureManager, RPMicAudioCaptureManager, RPScreenCaptureManager;
@protocol OS_dispatch_queue;

@interface RPCaptureManager : RPDelegateBase <RPScreenCaptureManagerProtocol>
{
    RPScreenCaptureManager *_screenCaptureManager;	// 8 = 0x8
    RPMicAudioCaptureManager *_micAudioCaptureManager;	// 16 = 0x10
    RPAppAudioCaptureManager *_appAudioCaptureManager;	// 24 = 0x18
    int _captureState;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_captureProcessQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_captureErrorQueue;	// 48 = 0x30
    int _currentProcessID;	// 56 = 0x38
    unsigned int _currentContextID;	// 60 = 0x3c
}

+ (id)sharedInstance;	// IMP=0x0000000100036040
- (void).cxx_destruct;	// IMP=0x0000000100037ea8
- (void)screenCaptureDidFailWithError:(id)arg1;	// IMP=0x0000000100037cf8
- (void)setAVAudioSessionCategory;	// IMP=0x0000000100037c40
- (void)enableMicrophone;	// IMP=0x0000000100037af8
- (void)updateContextIDs:(id)arg1 forProcessID:(int)arg2;	// IMP=0x00000001000377f4
- (void)startCaptureManagersForProcessID:(int)arg1 windowSize:(struct CGSize)arg2 systemRecording:(_Bool)arg3 contextIDs:(id)arg4 dispatchGroup:(id)arg5;	// IMP=0x0000000100037364
- (void)startCaptureForDelegate:(id)arg1 forProcessID:(int)arg2 shouldStartMicrophoneCapture:(_Bool)arg3 windowSize:(struct CGSize)arg4 systemRecording:(_Bool)arg5 contextIDs:(id)arg6 didStartHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000100036d74
- (void)stopCaptureForDelegate:(id)arg1;	// IMP=0x0000000100036a64
- (void)stopAllCapture;	// IMP=0x0000000100036928
- (void)stopAppAudioCapture;	// IMP=0x0000000100036910
- (void)restartAppAudioCaptureForProcessID:(int)arg1;	// IMP=0x0000000100036798
- (void)startAppAudioCaptureForProcessID:(int)arg1 outputHandler:(CDUnknownBlockType)arg2 didStartHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010003666c
- (void)startMicrophoneCaptureWithDispatchGroup:(id)arg1;	// IMP=0x000000010003639c
- (void)dealloc;	// IMP=0x00000001000362ac
- (id)init;	// IMP=0x00000001000360ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
