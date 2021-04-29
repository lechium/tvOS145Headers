//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface ACCPlatformLocationManager : NSObject
{
    _Bool _bLocationStarted;	// 8 = 0x8
    _Bool _bNMEAFilterListNew;	// 9 = 0x9
    unsigned int _supportedNMEASentenceMask;	// 12 = 0xc
    unsigned int _minNMEAIntervalMs;	// 16 = 0x10
    NSString *_endpointUUID;	// 24 = 0x18
    NSMutableArray *_pNMEAFilterList;	// 32 = 0x20
    NSArray *_supportedNMEASentencesArray;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x00000001000dad68
- (void).cxx_destruct;	// IMP=0x00000001000dd6dc
@property(retain, nonatomic) NSArray *supportedNMEASentencesArray; // @synthesize supportedNMEASentencesArray=_supportedNMEASentencesArray;
@property(nonatomic) _Bool bNMEAFilterListNew; // @synthesize bNMEAFilterListNew=_bNMEAFilterListNew;
@property(nonatomic) unsigned int minNMEAIntervalMs; // @synthesize minNMEAIntervalMs=_minNMEAIntervalMs;
@property(nonatomic) unsigned int supportedNMEASentenceMask; // @synthesize supportedNMEASentenceMask=_supportedNMEASentenceMask;
@property(nonatomic) _Bool bLocationStarted; // @synthesize bLocationStarted=_bLocationStarted;
@property(retain, nonatomic) NSMutableArray *pNMEAFilterList; // @synthesize pNMEAFilterList=_pNMEAFilterList;
@property(retain, nonatomic) NSString *endpointUUID; // @synthesize endpointUUID=_endpointUUID;
- (unsigned int)sentenceTypesBitmask:(id)arg1 forUUID:(id)arg2;	// IMP=0x00000001000dd394
- (_Bool)isSentenceArrayValidForUUID:(id)arg1;	// IMP=0x00000001000dd208
- (_Bool)isSentenceTypeSupported:(int)arg1 forUUID:(id)arg2;	// IMP=0x00000001000dcf68
- (_Bool)setNMEAFilterList:(id)arg1 forUUID:(id)arg2;	// IMP=0x00000001000dc604
- (_Bool)stopLocationUpdatesForUUID:(id)arg1;	// IMP=0x00000001000dc1d0
- (_Bool)sendGPRMCDataStatus:(_Bool)arg1 valueV:(_Bool)arg2 valueX:(_Bool)arg3 forUUID:(id)arg4;	// IMP=0x00000001000dbd6c
- (_Bool)startLocationUpdatesForUUID:(id)arg1;	// IMP=0x00000001000db45c
- (_Bool)resetLocationEndpointUUID:(id)arg1;	// IMP=0x00000001000db1a4
- (_Bool)setLocationEndpointUUID:(id)arg1 withSupportedNMEASentences:(struct __CFArray *)arg2;	// IMP=0x00000001000daec8
- (void)dealloc;	// IMP=0x00000001000dae50
- (id)init;	// IMP=0x00000001000dadd4

@end

