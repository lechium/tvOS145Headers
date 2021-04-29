//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSSpeakerRecognitionAssetDownloadMonitorDelegate-Protocol.h"
#import "CSVoiceTriggerEnabledMonitorDelegate-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface CSVoiceProfileRetrainManager : NSObject <CSVoiceTriggerEnabledMonitorDelegate, CSSpeakerRecognitionAssetDownloadMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000c5a5c
- (void).cxx_destruct;	// IMP=0x00000001000c7b3c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_runVoiceProfileRetrainerWithAsset:(id)arg1 withLanguageCode:(id)arg2;	// IMP=0x00000001000c71c8
- (void)_speakerRecognitionCleanupDuplicatedProfilesCallback;	// IMP=0x00000001000c6df8
- (void)_speakerRecognitionModelRetrainCallback;	// IMP=0x00000001000c6aac
- (void)CSSpeakerRecognitionAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(_Bool)arg2 assetProviderType:(unsigned long long)arg3;	// IMP=0x00000001000c6714
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;	// IMP=0x00000001000c63d8
- (void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;	// IMP=0x00000001000c6018
- (void)triggerVoiceProfileRetrainingWithAsset:(id)arg1;	// IMP=0x00000001000c5e30
- (id)init;	// IMP=0x00000001000c5af0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
