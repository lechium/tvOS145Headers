//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ACCPlatformDigitalAudioManager : NSObject
{
    _Bool _bDigAudSendNewProp;	// 8 = 0x8
    _Bool _bDigAudIsActive;	// 9 = 0x9
    int _digAudSampleEnum;	// 12 = 0xc
    unsigned int _digAudSampleMask;	// 16 = 0x10
    unsigned int _digAudVolumeLevel;	// 20 = 0x14
    unsigned int _digAudSoundCheck;	// 24 = 0x18
    NSString *_digAudEndpointUUID;	// 32 = 0x20
}

+ (unsigned int)sampleRateMaskFromEnum:(int)arg1;	// IMP=0x0000000100103fa8
+ (int)sampleRateEnumFromValue:(unsigned int)arg1;	// IMP=0x0000000100103e24
+ (unsigned int)sampleRateValueFromEnum:(int)arg1;	// IMP=0x0000000100103d64
+ (id)getManager;	// IMP=0x0000000100103cf8
- (void).cxx_destruct;	// IMP=0x0000000100104f7c
@property(nonatomic) _Bool bDigAudIsActive; // @synthesize bDigAudIsActive=_bDigAudIsActive;
@property(nonatomic) _Bool bDigAudSendNewProp; // @synthesize bDigAudSendNewProp=_bDigAudSendNewProp;
@property(nonatomic) unsigned int digAudSoundCheck; // @synthesize digAudSoundCheck=_digAudSoundCheck;
@property(nonatomic) unsigned int digAudVolumeLevel; // @synthesize digAudVolumeLevel=_digAudVolumeLevel;
@property(nonatomic) unsigned int digAudSampleMask; // @synthesize digAudSampleMask=_digAudSampleMask;
@property(nonatomic) int digAudSampleEnum; // @synthesize digAudSampleEnum=_digAudSampleEnum;
@property(retain, nonatomic) NSString *digAudEndpointUUID; // @synthesize digAudEndpointUUID=_digAudEndpointUUID;
- (id)supportedSampleRatesList;	// IMP=0x0000000100104d38
- (void)updateSoundCheck:(unsigned int)arg1;	// IMP=0x0000000100104bc0
- (void)updateVolumeLevel:(unsigned int)arg1;	// IMP=0x0000000100104a48
- (void)updateSampleRate:(unsigned int)arg1;	// IMP=0x000000010010487c
- (unsigned int)convertToSupportedSampleRate:(unsigned int)arg1;	// IMP=0x000000010010466c
- (unsigned int)currentSampleRate;	// IMP=0x0000000100104528
- (_Bool)newAudioPropertyNotification;	// IMP=0x000000010010426c
- (void)stopAudioPropertyNotifications;	// IMP=0x0000000100104220
- (void)startAudioPropertyNotifications;	// IMP=0x00000001001041d4
- (void)sendAudioStateChangedNotification;	// IMP=0x00000001001041c8
- (_Bool)setDigitalAudioEndpointUUID:(id)arg1 withSupportedSampleRates:(unsigned int)arg2;	// IMP=0x0000000100104058
- (void)dealloc;	// IMP=0x0000000100104024
- (id)init;	// IMP=0x0000000100103fbc

@end

