//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSAdBlockerAssetDownloadMonitorDelegate-Protocol.h"
#import "CSCATAssetManagerDelegate-Protocol.h"
#import "CSContinuousAudioFingerprintProviderDelegate-Protocol.h"
#import "CSSiriClientBehaviorMonitorDelegate-Protocol.h"
#import "CSVoiceTriggerDelegate-Protocol.h"
#import "SHSessionDelegate-Protocol.h"

@class CSAsset, CSCATAssetManager, CSContinuousAudioFingerprintProvider, NSMutableDictionary, NSString, NSURL, NSUUID, SHSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSAdBlocker : NSObject <SHSessionDelegate, CSSiriClientBehaviorMonitorDelegate, CSContinuousAudioFingerprintProviderDelegate, CSAdBlockerAssetDownloadMonitorDelegate, CSCATAssetManagerDelegate, CSVoiceTriggerDelegate>
{
    NSObject<OS_dispatch_source> *_downloadTimer;	// 8 = 0x8
    _Bool _hasCancelled;	// 16 = 0x10
    SHSession *_mainRecognitionSession;	// 24 = 0x18
    SHSession *_hotfixRecognitionSession;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    CSContinuousAudioFingerprintProvider *_fingerprintProvider;	// 48 = 0x30
    CSAsset *_assetForAdBlockerFile;	// 56 = 0x38
    NSUUID *_uuid;	// 64 = 0x40
    CSCATAssetManager *_catAssetanager;	// 72 = 0x48
    NSURL *_urlForManifest;	// 80 = 0x50
    NSString *_previousHotfixAssetVersion;	// 88 = 0x58
    NSString *_languageCode;	// 96 = 0x60
    unsigned long long _startTime;	// 104 = 0x68
    NSMutableDictionary *_mainShouldResetDictionary;	// 112 = 0x70
    NSMutableDictionary *_hotfixShouldResetDictionary;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000010001e280
@property(retain, nonatomic) NSMutableDictionary *hotfixShouldResetDictionary; // @synthesize hotfixShouldResetDictionary=_hotfixShouldResetDictionary;
@property(retain, nonatomic) NSMutableDictionary *mainShouldResetDictionary; // @synthesize mainShouldResetDictionary=_mainShouldResetDictionary;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSString *previousHotfixAssetVersion; // @synthesize previousHotfixAssetVersion=_previousHotfixAssetVersion;
@property(retain, nonatomic) NSURL *urlForManifest; // @synthesize urlForManifest=_urlForManifest;
@property(retain, nonatomic) CSCATAssetManager *catAssetanager; // @synthesize catAssetanager=_catAssetanager;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) _Bool hasCancelled; // @synthesize hasCancelled=_hasCancelled;
@property(retain, nonatomic) CSAsset *assetForAdBlockerFile; // @synthesize assetForAdBlockerFile=_assetForAdBlockerFile;
@property(nonatomic) __weak CSContinuousAudioFingerprintProvider *fingerprintProvider; // @synthesize fingerprintProvider=_fingerprintProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SHSession *hotfixRecognitionSession; // @synthesize hotfixRecognitionSession=_hotfixRecognitionSession;
@property(retain, nonatomic) SHSession *mainRecognitionSession; // @synthesize mainRecognitionSession=_mainRecognitionSession;
- (void)_createPeriodicalCATAssetDownloadTimer;	// IMP=0x000000010001dedc
- (void)sendAnalyticInformation:(_Bool)arg1 withAdName:(id)arg2 withTimeForAdBlockerDecision:(float)arg3;	// IMP=0x000000010001dc80
- (void)catAssetManagerDelegate:(id)arg1 withVersion:(id)arg2 withError:(id)arg3;	// IMP=0x000000010001da50
- (void)CSAdBlockerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(_Bool)arg2 assetProviderType:(unsigned long long)arg3;	// IMP=0x000000010001d674
- (void)continuousAudioFingerprintProvider:(id)arg1 hasNewFingerprintBuffer:(id)arg2;	// IMP=0x000000010001d484
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x000000010001d480
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;	// IMP=0x000000010001d2ec
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x000000010001d2e8
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x000000010001d2e4
- (void)session:(id)arg1 didFindMatch:(id)arg2;	// IMP=0x000000010001cde8
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;	// IMP=0x000000010001cb34
- (void)_populateAdBlockerWithSignaturesWithAsset:(id)arg1 useMainDatabase:(_Bool)arg2;	// IMP=0x000000010001c604
- (void)start;	// IMP=0x000000010001bf30
- (void)dealloc;	// IMP=0x000000010001bdcc
- (id)init;	// IMP=0x000000010001bc94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

