//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSServiceProperties, NSArray, NSMapTable, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface IDSDServiceController : NSObject
{
    NSMapTable *_services;	// 8 = 0x8
    NSMapTable *_servicesToNameMap;	// 16 = 0x10
    NSMapTable *_servicesToTopicMap;	// 24 = 0x18
    NSMutableDictionary *_deviceIDToSubServicesMap;	// 32 = 0x20
    NSSet *_allAdHocServices;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

+ (_Bool)shouldLoadService:(id)arg1;	// IMP=0x00000001005a95d4
+ (id)sharedInstance;	// IMP=0x00000001005a9440
- (void).cxx_destruct;	// IMP=0x00000001005ae3a4
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSSet *allAdHocServices; // @synthesize allAdHocServices=_allAdHocServices;
- (id)adHocServicesForIdentifier:(id)arg1;	// IMP=0x00000001005addc8
- (id)linkedServicesForService:(id)arg1;	// IMP=0x00000001005adb14
- (id)serviceWithPushTopic:(id)arg1;	// IMP=0x00000001005ada10
- (id)serviceWithName:(id)arg1;	// IMP=0x00000001005ad90c
- (id)serviceWithIdentifier:(id)arg1;	// IMP=0x00000001005ad884
@property(readonly, nonatomic) __weak NSArray *allServicesStrings;
@property(readonly, nonatomic) __weak NSArray *allTinkerServices;
@property(readonly, nonatomic) __weak NSArray *allServices;
@property(readonly, nonatomic) NSSet *allPrimaryServices;
- (id)allServicesWithAdHocServiceType:(unsigned int)arg1;	// IMP=0x00000001005ad530
- (id)_currentSubServicesForDevice:(id)arg1 superService:(id)arg2;	// IMP=0x00000001005ad450
- (void)_updateSubServicesForDevice:(id)arg1 superService:(id)arg2 newSubservices:(id)arg3;	// IMP=0x00000001005ad22c
- (_Bool)_anyDeviceUsingSubService:(id)arg1 superService:(id)arg2;	// IMP=0x00000001005ace08
- (id)_combinedServicesForAllDevices;	// IMP=0x00000001005ac9e8
- (void)_loadSubServices;	// IMP=0x00000001005abacc
- (void)_saveSubServices;	// IMP=0x00000001005ab844
- (void)updateSubServices:(id)arg1 forService:(id)arg2 deviceUniqueID:(id)arg3;	// IMP=0x00000001005aa860
- (void)_loadSubServiceWithName:(id)arg1 usingService:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001005aa4e0
- (void)_unloadServiceWithName:(id)arg1;	// IMP=0x00000001005aa35c
- (void)_loadService:(id)arg1;	// IMP=0x00000001005aa04c
- (void)_loadServices;	// IMP=0x00000001005a98c8
@property(readonly, nonatomic) IDSServiceProperties *iCloudService;
@property(readonly, nonatomic) IDSServiceProperties *iTunesService;
- (id)userDefaults;	// IMP=0x00000001005a939c
- (id)serviceLoader;	// IMP=0x00000001005a9368
- (id)init;	// IMP=0x00000001005a91ec

@end

