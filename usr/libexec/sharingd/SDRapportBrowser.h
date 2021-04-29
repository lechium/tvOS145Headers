//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, RPPeopleDiscovery, SDXPCHelperConnection;

__attribute__((visibility("hidden")))
@interface SDRapportBrowser : NSObject
{
    long long _startCount;	// 8 = 0x8
    NSMutableDictionary *_cachedNodes;	// 16 = 0x10
    RPPeopleDiscovery *_peopleDiscovery;	// 24 = 0x18
    SDXPCHelperConnection *_helperConnection;	// 32 = 0x20
}

+ (id)deviceTypeFromModelIdentifier:(id)arg1;	// IMP=0x00000001000b7c18
+ (id)deviceImageNameFromModelIdentifier:(id)arg1;	// IMP=0x00000001000b77d4
+ (_Bool)deviceIsEligibleForAirDrop:(id)arg1;	// IMP=0x00000001000b76e4
+ (_Bool)personHasAirDropEligibleDevice:(id)arg1;	// IMP=0x00000001000b75a0
+ (id)identifiersForPerson:(id)arg1;	// IMP=0x00000001000b74a0
+ (unsigned long long)defaultSFNodeFlags;	// IMP=0x00000001000b6cb0
+ (void)updateRangingMeasurementForDevice:(id)arg1 inNode:(struct __SFNode *)arg2;	// IMP=0x00000001000b6c10
+ (void)updateRangingMeasurementForPerson:(id)arg1 inNode:(struct __SFNode *)arg2;	// IMP=0x00000001000b69cc
+ (id)sharedRapportBrowser;	// IMP=0x00000001000b5394
- (void).cxx_destruct;	// IMP=0x00000001000b7d68
@property(nonatomic) __weak SDXPCHelperConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
- (struct __SFNode *)createSFNodeFromMyRPDevice:(id)arg1;	// IMP=0x00000001000b7378
- (struct __SFNode *)createSFNodeFromRPPerson:(id)arg1;	// IMP=0x00000001000b71b4
- (struct __SFNode *)createSFNodeFromCNContact:(id)arg1 identifier:(id)arg2 device:(id)arg3;	// IMP=0x00000001000b6cb8
- (void)resumeHandoffAdvertisingIfAppropriate;	// IMP=0x00000001000b6938
- (void)stopHandoffAdvertisingIfAppropriate;	// IMP=0x00000001000b68a4
- (_Bool)shouldStopHandoffAdvertising;	// IMP=0x00000001000b6878
- (id)assertionIdentifier;	// IMP=0x00000001000b6840
- (void)removeNodesForPerson:(id)arg1;	// IMP=0x00000001000b67cc
- (void)addOrUpdateNodesForPerson:(id)arg1 withChanges:(unsigned int)arg2;	// IMP=0x00000001000b6240
@property(readonly, copy) NSArray *nodes;
- (void)removeObservers;	// IMP=0x00000001000b61e0
- (void)addObservers;	// IMP=0x00000001000b6178
- (void)contactsChanged:(id)arg1;	// IMP=0x00000001000b5ff0
- (void)_stop;	// IMP=0x00000001000b5f44
- (void)_start;	// IMP=0x00000001000b55d4
- (void)stop;	// IMP=0x00000001000b5500
- (void)start;	// IMP=0x00000001000b5434
- (id)init;	// IMP=0x00000001000b5400

@end
