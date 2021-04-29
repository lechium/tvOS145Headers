//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSAdBlockerMetaUpdateMonitorDelegate-Protocol.h"
#import "CSAssetControllerDelegate-Protocol.h"
#import "CSLanguageCodeUpdateMonitorDelegate-Protocol.h"
#import "CSSpeakerRecognitionAssetMetaUpdateMonitorDelegate-Protocol.h"
#import "CSSpeechEndpointAssetMetaUpdateMonitorDelegate-Protocol.h"
#import "CSVoiceTriggerAssetMetaUpdateMonitorDelegate-Protocol.h"

@class CSAssetDownloadingOption, CSPolicy, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSAssetManager : NSObject <CSVoiceTriggerAssetMetaUpdateMonitorDelegate, CSSpeechEndpointAssetMetaUpdateMonitorDelegate, CSAdBlockerMetaUpdateMonitorDelegate, CSAssetControllerDelegate, CSSpeakerRecognitionAssetMetaUpdateMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate>
{
    CSPolicy *_enablePolicy;	// 8 = 0x8
    NSString *_currentLanguageCode;	// 16 = 0x10
    CSAssetDownloadingOption *_downloadingOption;	// 24 = 0x18
    NSMutableDictionary *_observers;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_downloadTimer;	// 40 = 0x28
    long long _downloadTimerCount;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
}

+ (id)sharedManager;	// IMP=0x000000010009ab28
- (void).cxx_destruct;	// IMP=0x000000010009cf90
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_stopPeriodicalDownload;	// IMP=0x000000010009ce88
- (void)_startPeriodicalDownload;	// IMP=0x000000010009cd98
- (void)_createPeriodicalDownloadTimer;	// IMP=0x000000010009cb6c
- (void)CSAssetController:(id)arg1 didDownloadNewAssetForType:(unsigned long long)arg2;	// IMP=0x000000010009c944
- (void)CSSpeechEndpointAssetMetaUpdateMonitor:(id)arg1 didReceiveNewSpeechEndpointAssetMetaData:(_Bool)arg2;	// IMP=0x000000010009c8ac
- (void)CSSpeakerRecognitionAssetMetaUpdateMonitor:(id)arg1 didReceiveNewSpeakerRecognitionAssetMetaData:(_Bool)arg2;	// IMP=0x000000010009c814
- (void)CSAdBlockerMetaUpdateMonitor:(id)arg1 didReceiveNewAdBlockerAssetMetaData:(_Bool)arg2;	// IMP=0x000000010009c77c
- (void)CSVoiceTriggerAssetMetaUpdateMonitor:(id)arg1 didReceiveNewVoiceTriggerAssetMetaData:(_Bool)arg2;	// IMP=0x000000010009c670
- (void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2;	// IMP=0x000000010009c4dc
- (void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2;	// IMP=0x000000010009c2e8
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;	// IMP=0x000000010009c200
@property(readonly, nonatomic) NSString *currentLanguageCode;
- (_Bool)_canFetchRemoteAsset:(unsigned long long)arg1;	// IMP=0x000000010009c124
- (void)_fetchRemoteMetaData;	// IMP=0x000000010009beb4
- (void)assetOfType:(unsigned long long)arg1 providerType:(unsigned long long)arg2 language:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010009bdf4
- (void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010009bd58
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x000000010009bccc
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 compatibilityVersion:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010009bbf8
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010009bb30
- (id)assetOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x000000010009ba78
- (void)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010009b9bc
- (id)installedAssetForCurrentLanguageOfType:(unsigned long long)arg1;	// IMP=0x000000010009b918
- (void)assetForCurrentLanguageOfType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010009b830
- (id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x000000010009b7a4
- (id)assetForCurrentLanguageOfType:(unsigned long long)arg1;	// IMP=0x000000010009b6d4
- (void)setAssetDownloadingOption:(id)arg1;	// IMP=0x000000010009b2c4
- (id)initWithDownloadOption:(id)arg1;	// IMP=0x000000010009abc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

