//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSAcousticSLResultProviding-Protocol.h"
#import "CSAudioAlertProviding-Protocol.h"
#import "CSAudioMeterProviding-Protocol.h"
#import "CSAudioMetricProviding-Protocol.h"
#import "CSAudioSessionInfoProviding-Protocol.h"
#import "CSAudioSessionProviding-Protocol.h"
#import "CSAudioStreamProviding-Protocol.h"
#import "CSAudioTimeConversionProviding-Protocol.h"
#import "CSFallbackAudioSessionReleaseProviding-Protocol.h"
#import "CSTriggerInfoProviding-Protocol.h"

@class CSAudioStream, NSHashTable, NSMutableSet, NSString;
@protocol CSAudioAlertProvidingDelegate, CSAudioSessionProvidingDelegate, CSAudioStreamProvidingDelegate, CSXPCClientDelegate, OS_xpc_object;

@interface CSXPCClient : NSObject <CSAudioSessionProviding, CSFallbackAudioSessionReleaseProviding, CSAudioStreamProviding, CSAudioAlertProviding, CSAudioSessionInfoProviding, CSAudioMeterProviding, CSAudioMetricProviding, CSAudioTimeConversionProviding, CSTriggerInfoProviding, CSAcousticSLResultProviding>
{
    id <CSAudioSessionProvidingDelegate> _audioSessionProvidingDelegate;	// 8 = 0x8
    id <CSAudioStreamProvidingDelegate> _audioStreamProvidingDelegate;	// 16 = 0x10
    id <CSAudioAlertProvidingDelegate> _audioAlertProvidingDelegate;	// 24 = 0x18
    id <CSXPCClientDelegate> _delegate;	// 32 = 0x20
    NSString *_UUID;	// 40 = 0x28
    NSObject<OS_xpc_object> *_xpcConnection;	// 48 = 0x30
    CSAudioStream *_audioStream;	// 56 = 0x38
    NSMutableSet *_activationAssertions;	// 64 = 0x40
    NSHashTable *_audioSessionInfoObservers;	// 72 = 0x48
    unsigned long long _xpcClientType;	// 80 = 0x50
}

+ (id)createStopAudioStreamMessage;	// IMP=0x0000000100029904
+ (id)createStartAudioStreamMessageWithOption:(id)arg1;	// IMP=0x0000000100029660
+ (id)createPrepareAudioStreamMessageWithRequest:(id)arg1;	// IMP=0x00000001000292b8
+ (id)createAudioStreamMessageWithRequest:(id)arg1;	// IMP=0x0000000100028a84
- (void).cxx_destruct;	// IMP=0x000000010002d7f4
@property(nonatomic) unsigned long long xpcClientType; // @synthesize xpcClientType=_xpcClientType;
@property(retain, nonatomic) NSHashTable *audioSessionInfoObservers; // @synthesize audioSessionInfoObservers=_audioSessionInfoObservers;
@property(retain, nonatomic) NSMutableSet *activationAssertions; // @synthesize activationAssertions=_activationAssertions;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak id <CSXPCClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CSAudioAlertProvidingDelegate> audioAlertProvidingDelegate; // @synthesize audioAlertProvidingDelegate=_audioAlertProvidingDelegate;
@property(nonatomic) __weak id <CSAudioStreamProvidingDelegate> audioStreamProvidingDelegate; // @synthesize audioStreamProvidingDelegate=_audioStreamProvidingDelegate;
@property(nonatomic) __weak id <CSAudioSessionProvidingDelegate> audioSessionProvidingDelegate; // @synthesize audioSessionProvidingDelegate=_audioSessionProvidingDelegate;
- (void)_handleStreamProvidingDelegateHardwareConfigChange:(id)arg1;	// IMP=0x000000010002d63c
- (void)_handleStreamProvidingDelegateChunkForTVAvailable:(id)arg1;	// IMP=0x000000010002d54c
- (void)_handleStreamProvidingDelegateChunkAvailable:(id)arg1;	// IMP=0x000000010002d45c
- (void)_handleStreamProvidingDelegateDidStopUnexpectly:(id)arg1;	// IMP=0x000000010002d39c
- (void)_handleStreamProvidingDelegateMessageBody:(id)arg1;	// IMP=0x000000010002d2cc
- (void)_handleSessionInfoProvidingDelegateMediaServicesWereResetNotification:(id)arg1;	// IMP=0x000000010002d128
- (void)_handleSessionInfoProvidingDelegateMediaServicesWereLostNotification:(id)arg1;	// IMP=0x000000010002cf84
- (void)_handleSessionInfoProvidingDelegateRouteChangeNotification:(id)arg1;	// IMP=0x000000010002cd4c
- (void)_handleSessionInfoProvidingDelegateInterruptionNotification:(id)arg1;	// IMP=0x000000010002cb14
- (void)_handleSessionInfoProvidingDelegateMessageBody:(id)arg1;	// IMP=0x000000010002c9ac
- (void)_handleSessionProvidingDelegateDidChangeContext:(id)arg1;	// IMP=0x000000010002c8ec
- (void)_handleSessionProvidingDelegateStreamHandleIdInvalidation:(id)arg1;	// IMP=0x000000010002c82c
- (void)_handleSessionProvidingDelegateDidSetAudioSession:(id)arg1;	// IMP=0x000000010002c76c
- (void)_handleSessionProvidingDelegateWillSetAudioSession:(id)arg1;	// IMP=0x000000010002c6ac
- (void)_handleSessionProvidingDelegateEndInterruption:(id)arg1;	// IMP=0x000000010002c608
- (void)_handleSessionProvidingDelegateBeginInterruptionWithContext:(id)arg1;	// IMP=0x000000010002c43c
- (void)_handleSessionProvidingDelegateBeginInterruption:(id)arg1;	// IMP=0x000000010002c398
- (void)_handleSessionProvidingDelegateMessageBody:(id)arg1;	// IMP=0x000000010002c20c
- (void)_handleAlertProvidingDelegateDidFinishAlertPlayback:(id)arg1;	// IMP=0x000000010002c098
- (void)_handleAlertProvidingDelegateMessageBody:(id)arg1;	// IMP=0x000000010002bf6c
- (void)_handleListenerDisconnectedError:(id)arg1;	// IMP=0x000000010002be64
- (void)_handleListenerError:(id)arg1;	// IMP=0x000000010002bcfc
- (void)_handleListenerMessage:(id)arg1;	// IMP=0x000000010002bbd8
- (void)_handleListenerEvent:(id)arg1;	// IMP=0x000000010002bb0c
- (_Bool)_sendMessageAndReplySync:(id)arg1 connection:(id)arg2 error:(id *)arg3;	// IMP=0x000000010002b9c8
- (id)_decodeError:(id)arg1;	// IMP=0x000000010002b8f4
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002b6f8
- (_Bool)fallbackDeactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000010002b5a8
- (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1;	// IMP=0x000000010002b3f4
- (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1;	// IMP=0x000000010002b240
- (unsigned int)audioSessionIdForDeviceId:(id)arg1;	// IMP=0x000000010002b074
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000010002b05c
- (void)registerObserver:(id)arg1;	// IMP=0x000000010002b044
- (_Bool)isRecording;	// IMP=0x000000010002b000
- (void)cancelAudioStreamHold:(id)arg1;	// IMP=0x000000010002afc0
- (id)holdAudioStreamWithDescription:(id)arg1 timeout:(double)arg2;	// IMP=0x000000010002af7c
- (void)saveRecordingBufferToEndFrom:(unsigned long long)arg1 toURL:(id)arg2;	// IMP=0x000000010002af3c
- (void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;	// IMP=0x000000010002aefc
- (id)audioChunkToEndFrom:(unsigned long long)arg1 channelIdx:(unsigned long long)arg2;	// IMP=0x000000010002aeb8
- (id)audioChunkToEndFrom:(unsigned long long)arg1;	// IMP=0x000000010002ae74
- (id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x000000010002ae30
- (id)playbackRoute;	// IMP=0x000000010002acac
- (_Bool)isNarrowBand;	// IMP=0x000000010002ab70
- (id)recordSettings;	// IMP=0x000000010002a9b8
- (id)audioDeviceInfo;	// IMP=0x000000010002a81c
- (id)recordDeviceInfo;	// IMP=0x000000010002a680
- (id)recordRoute;	// IMP=0x000000010002a4fc
- (void)triggerInfoForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100029fe8
- (void)acousticSLResultForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100029b30
- (void)stopAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000299f4
- (void)startAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000297a0
- (void)prepareAudioStream:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000293f8
- (_Bool)prepareAudioStreamSync:(id)arg1 request:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100028f9c
- (void)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100028bc4
- (id)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100028728
- (_Bool)setCurrentContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000284e4
- (id)audioMetric;	// IMP=0x0000000100028220
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x000000010002800c
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x0000000100027df8
- (void)updateMeters;	// IMP=0x0000000100027cdc
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x0000000100027b98
- (void)configureAlertBehavior:(id)arg1;	// IMP=0x0000000100027a34
- (unsigned long long)alertStartTime;	// IMP=0x0000000100027850
- (_Bool)playRecordStartingAlertAndResetEndpointer;	// IMP=0x0000000100027734
- (_Bool)playAlertSoundForType:(long long)arg1;	// IMP=0x00000001000275e8
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;	// IMP=0x0000000100027418
- (void)setAudioAlertDelegate:(id)arg1;	// IMP=0x000000010002740c
- (void)setAudioSessionDelegate:(id)arg1;	// IMP=0x0000000100027400
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x00000001000272c4
- (void)enableSmartRoutingConsideration:(_Bool)arg1;	// IMP=0x0000000100027188
- (void)setDuckOthersOption:(_Bool)arg1;	// IMP=0x000000010002704c
- (_Bool)duckOthersOption;	// IMP=0x0000000100026f30
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000100026de0
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 dynamicAttribute:(unsigned long long)arg2 bundleID:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100026c24
- (_Bool)prewarmAudioSessionWithError:(id *)arg1;	// IMP=0x0000000100026afc
- (void)pingpong:(CDUnknownBlockType)arg1;	// IMP=0x00000001000269d4
- (_Bool)prepareAudioProviderWithContext:(id)arg1 clientType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000001000267e8
- (void)sendXPCClientType;	// IMP=0x000000010002666c
- (void)dealloc;	// IMP=0x0000000100026620
- (void)disconnect;	// IMP=0x00000001000265e4
- (void)connect;	// IMP=0x00000001000264c0
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x00000001000263a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

