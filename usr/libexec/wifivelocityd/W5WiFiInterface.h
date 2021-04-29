//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CWFInterface, NSData, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface W5WiFiInterface : NSObject
{
    NSObject<OS_dispatch_queue> *_eventQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    struct _Apple80211 *_a11Ref;	// 24 = 0x18
    struct __SCDynamicStore *_storeRef;	// 32 = 0x20
    CWFInterface *_corewifi;	// 40 = 0x28
    _Bool _isMonitoringEvents;	// 48 = 0x30
    NSMutableArray *_linkQualityUpdates;	// 56 = 0x38
    NSData *_lastAssociatedSSID;	// 64 = 0x40
    NSString *_lastAssociatedSSIDString;	// 72 = 0x48
    NSMutableDictionary *_cachedPreferredNetworksListUUIDMap;	// 80 = 0x50
    _Bool _isAWDLRealTimeMode;	// 88 = 0x58
    CDUnknownBlockType _updatedWiFiCallback;	// 96 = 0x60
    NSString *_interfaceName;	// 104 = 0x68
}

@property(readonly, nonatomic) _Bool isAWDLRealTimeMode; // @synthesize isAWDLRealTimeMode=_isAWDLRealTimeMode;
@property(readonly, copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(copy, nonatomic) CDUnknownBlockType updatedWiFiCallback; // @synthesize updatedWiFiCallback=_updatedWiFiCallback;
- (_Bool)isUsingCustomProxySetting;	// IMP=0x000000010003609c
- (_Bool)isUsingCustomDNSSettings;	// IMP=0x0000000100035fc0
- (long long)ipv4ConfigMethod;	// IMP=0x0000000100035d94
- (long long)ipv6ConfigMethod;	// IMP=0x0000000100035bc0
- (id)__proxiesSetupConfig;	// IMP=0x0000000100035b08
- (id)__dnsSetupConfig;	// IMP=0x0000000100035a50
- (id)__dnsStateConfig;	// IMP=0x0000000100035998
- (id)__ipv6SetupConfig;	// IMP=0x00000001000358e0
- (id)__ipv4SetupConfig;	// IMP=0x0000000100035828
- (id)__ipv6StateConfig;	// IMP=0x0000000100035770
- (id)__ipv4StateConfig;	// IMP=0x00000001000356b8
- (void)clearCachedPreferredNetworksListWithUUID:(id)arg1;	// IMP=0x000000010003561c
- (id)cachedPreferredNetworksListWithUUID:(id)arg1;	// IMP=0x00000001000354ac
- (id)currentPreferredNetwork;	// IMP=0x000000010003548c
- (id)currentNetwork;	// IMP=0x000000010003546c
- (long long)security;	// IMP=0x0000000100035374
- (id)scanCache:(_Bool)arg1;	// IMP=0x000000010003516c
- (_Bool)setChannel:(id)arg1;	// IMP=0x00000001000350d4
- (void)disassociate;	// IMP=0x00000001000350c0
- (id)performScanOnChannels:(id)arg1 translate:(_Bool)arg2;	// IMP=0x00000001000346c4
- (id)channel;	// IMP=0x00000001000346a4
- (id)lastAssociatedSSIDString;	// IMP=0x0000000100034594
- (id)lastAssociatedSSID;	// IMP=0x0000000100034484
- (id)supportedChannels;	// IMP=0x00000001000342a0
- (id)linkQualityUpdates;	// IMP=0x0000000100034174
- (void)__addlinkQualityUpdate:(id)arg1;	// IMP=0x00000001000340ac
- (void)__clearLinkQualityUpdates;	// IMP=0x0000000100034018
- (void)__updateLastAssociatedSSID;	// IMP=0x0000000100033f28
- (void)__updateAWDLRealTimeMode:(_Bool)arg1;	// IMP=0x0000000100033ea0
- (void)stopEventMonitoring;	// IMP=0x0000000100033de8
- (void)__stopEventMonitoring;	// IMP=0x0000000100033d28
- (void)startEventMonitoring;	// IMP=0x0000000100033c6c
- (void)__startEventMonitoring;	// IMP=0x0000000100032e84
- (id)preferredNetworksList;	// IMP=0x0000000100032ab4
- (int)role;	// IMP=0x0000000100032aa4
- (void)dealloc;	// IMP=0x0000000100032a04
- (void)setUpdatedWiFiInterfaceCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000100032928
- (id)init;	// IMP=0x00000001000328f0
- (id)initWithInterfaceName:(id)arg1 corewifi:(id)arg2;	// IMP=0x00000001000326ac

@end
