//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADAddressBookManagerDelegate-Protocol.h"
#import "ADDisplayScaleContextCollectorDelegate-Protocol.h"
#import "ADLocalMeCardStoreObserving-Protocol.h"
#import "MCProfileConnectionObserver-Protocol.h"
#import "TUCallCapabilitiesDelegate-Protocol.h"

@class ADAddressBookManager, ADDisplayScaleContextCollector, AFInstanceContext, NSArray, NSHashTable, NSString, SAMediaContentRatingRestrictions, SASetAssistantData, SAVoice;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ADAssistantDataManager : NSObject <TUCallCapabilitiesDelegate, MCProfileConnectionObserver, ADAddressBookManagerDelegate, ADDisplayScaleContextCollectorDelegate, ADLocalMeCardStoreObserving>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    NSArray *_cachedMeCards;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_fetchingMeCardGroup;	// 32 = 0x20
    NSArray *_cachedRestrictions;	// 40 = 0x28
    _Bool _cachedCensorSpeech;	// 48 = 0x30
    _Bool _cachedAllowUserGeneratedContent;	// 49 = 0x31
    _Bool _cachedInRetailStoreDemoMode;	// 50 = 0x32
    NSString *_cachedCountryCode;	// 56 = 0x38
    _Bool _receivedGeoCountryConfigurationResponse;	// 64 = 0x40
    _Bool _voiceTriggerEnabled;	// 65 = 0x41
    SAVoice *_cachedVoice;	// 72 = 0x48
    _Bool _initialFetchComplete;	// 80 = 0x50
    _Bool _cachedAllowsExplicitContent;	// 81 = 0x51
    SAMediaContentRatingRestrictions *_cachedContentRatingRestrictions;	// 88 = 0x58
    _Bool _cachedSupportsTelephonyCalls;	// 96 = 0x60
    _Bool _cachedIsDictationHIPAAMDMEnabled;	// 97 = 0x61
    ADDisplayScaleContextCollector *_displayScaleMonitor;	// 104 = 0x68
    _Bool _cachedServerFlagsEnabled;	// 112 = 0x70
    _Bool _watchIsInverted;	// 113 = 0x71
    _Bool _watchIsOnLeftWrist;	// 114 = 0x72
    NSString *_cachedStoreFrontId;	// 120 = 0x78
    _Bool _observingiTunesChanges;	// 128 = 0x80
    SASetAssistantData *_cachedSAD;	// 136 = 0x88
    NSString *_unredactedAnchor;	// 144 = 0x90
    AFInstanceContext *_instanceContext;	// 152 = 0x98
    _Bool _voiceOverIsActive;	// 160 = 0xa0
    ADAddressBookManager *_addressBookManager;	// 168 = 0xa8
}

+ (id)sharedDataManager;	// IMP=0x000000010025fd38
- (void).cxx_destruct;	// IMP=0x00000001002661c4
@property(readonly, nonatomic, getter=_addressBookManager) ADAddressBookManager *addressBookManager; // @synthesize addressBookManager=_addressBookManager;
@property(nonatomic) _Bool voiceOverIsActive; // @synthesize voiceOverIsActive=_voiceOverIsActive;
- (void)localMeCardDidUpdate:(id)arg1;	// IMP=0x0000000100265ff4
- (void)_updateVoiceOverStatus:(CDUnknownBlockType)arg1;	// IMP=0x0000000100265f10
- (void)_updateItunesStoreIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x0000000100265c5c
- (void)_updateCallCapability:(CDUnknownBlockType)arg1;	// IMP=0x0000000100265ab0
- (void)_updateVoice:(CDUnknownBlockType)arg1;	// IMP=0x0000000100264e98
- (id)_cachedRestrictions;	// IMP=0x0000000100264e64
- (void)_updateRestrictions:(CDUnknownBlockType)arg1;	// IMP=0x00000001002642d8
- (void)_fetchDictationHIPAAMDMStatus:(CDUnknownBlockType)arg1;	// IMP=0x00000001002641f0
- (id)_mcQueue;	// IMP=0x0000000100264184
- (void)_setAllowExplicitContent:(_Bool)arg1;	// IMP=0x00000001002640bc
- (id)_cachedAssistantData;	// IMP=0x0000000100263ff4
- (void)_onMainThreadUpdateCountryCodeWithCountryConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100263d34
- (void)_notifyObserversOfDictationHIPAAMDMStatus;	// IMP=0x0000000100263a18
- (void)_notifyObserversOfSAD:(id)arg1;	// IMP=0x00000001002638a4
- (void)_generateAssistantData;	// IMP=0x0000000100263060
- (id)_redactedCopyMeCards:(id)arg1;	// IMP=0x0000000100262ed0
- (void)_censorSpeechDidChange:(id)arg1;	// IMP=0x0000000100262d78
- (void)_safeUpdateVoiceOverStatus;	// IMP=0x0000000100262cac
- (void)_safeGenerateAssistantDataForVoiceTriggerEnabled;	// IMP=0x0000000100262b7c
- (void)_countryCodeDidChange:(id)arg1;	// IMP=0x00000001002629d8
- (void)_outputVoiceDidChange:(id)arg1;	// IMP=0x0000000100262880
- (void)_systemTimeZoneDidChange:(id)arg1;	// IMP=0x0000000100262760
- (void)_storeFrontDidChange:(id)arg1;	// IMP=0x00000001002624a4
- (void)_locationRestrictionDidChange:(id)arg1;	// IMP=0x000000010026234c
- (void)_currentLocaleDidChange:(id)arg1;	// IMP=0x0000000100262214
- (void)_voiceAssetsUpdated:(id)arg1;	// IMP=0x00000001002620bc
- (void)contextCollector:(id)arg1 didChangeDisplayScale:(double)arg2;	// IMP=0x0000000100261f60
- (void)addressBookManagerDidUpdateData:(id)arg1 meCard:(id)arg2;	// IMP=0x0000000100261d2c
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000100261bb8
- (void)didChangeTelephonyCallingSupport;	// IMP=0x0000000100261ab4
- (id)unredactedAnchor;	// IMP=0x00000001002619a4
- (void)getMeCardsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002613f0
- (void)getiTunesStoreFrontIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002611f8
- (void)removeiTunesObserver;	// IMP=0x00000001002611f4
- (void)addiTunesObserver;	// IMP=0x00000001002611f0
- (void)requestAssistantDataUpdate;	// IMP=0x00000001002610c4
- (void)removeObserver:(id)arg1;	// IMP=0x000000010026102c
- (void)addObserver:(id)arg1;	// IMP=0x0000000100260f94
- (void)dealloc;	// IMP=0x0000000100260edc
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x000000010025fe04
- (id)init;	// IMP=0x000000010025fda4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
