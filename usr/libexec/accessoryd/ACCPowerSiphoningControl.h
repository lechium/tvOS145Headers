//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ACCPowerSiphoningControlDelegate, OS_dispatch_source;

@interface ACCPowerSiphoningControl : NSObject
{
    NSObject<OS_dispatch_source> *_siphoningDebounceTimerSource;	// 8 = 0x8
    unsigned long long _siphoningDebounceTimerTime;	// 16 = 0x10
    _Bool _siphoningCurrentNeedSend;	// 24 = 0x18
    _Bool _usbAccessoryDetected;	// 25 = 0x19
    _Bool _usbAccessorySiphoningNotRequired;	// 26 = 0x1a
    int _siphoningCurrentInmA;	// 28 = 0x1c
    int _chargerCurrentInmA;	// 32 = 0x20
    int _chargerVoltageInmV;	// 36 = 0x24
    int _reserveCurrentInmA;	// 40 = 0x28
    int _minSiphoningCurrentInmA;	// 44 = 0x2c
    int _siphoningCurrentInmAOld;	// 48 = 0x30
    int _chargerCurrentInmAOld;	// 52 = 0x34
    int _chargerVoltageInmVOld;	// 56 = 0x38
    int _reserveCurrentInmAOld;	// 60 = 0x3c
    int _minSiphoningCurrentInmAOld;	// 64 = 0x40
    NSString *_connectionUID;	// 72 = 0x48
    id <ACCPowerSiphoningControlDelegate> _delegate;	// 80 = 0x50
}

+ (void)_setUSBHubOverCurrentSiphoning:(id)arg1;	// IMP=0x000000010000b560
+ (void)_resetUSBHubOverCurrentSiphoning:(id)arg1;	// IMP=0x000000010000b4c4
+ (_Bool)_getUSBHubOverCurrentState:(id)arg1;	// IMP=0x000000010000b414
+ (unsigned int)_getUSBHubSiphoningCurrentActualRequirementInmA:(id)arg1;	// IMP=0x000000010000b364
+ (unsigned int)_getUSBHubSiphoningCurrentRequirementInmA:(id)arg1;	// IMP=0x000000010000b2b4
+ (unsigned int)_getUSBHubUnitLoadInmA:(id)arg1;	// IMP=0x000000010000b204
+ (unsigned int)_getChargerVoltageInmV:(id)arg1;	// IMP=0x000000010000b154
+ (unsigned int)_getChargerCurrentInmA:(id)arg1;	// IMP=0x000000010000b0a4
+ (int)_getReserveCurrentInmA:(id)arg1;	// IMP=0x000000010000aff4
- (void).cxx_destruct;	// IMP=0x000000010000b678
@property(readonly, nonatomic) _Bool usbAccessorySiphoningNotRequired; // @synthesize usbAccessorySiphoningNotRequired=_usbAccessorySiphoningNotRequired;
@property(readonly, nonatomic) _Bool usbAccessoryDetected; // @synthesize usbAccessoryDetected=_usbAccessoryDetected;
@property(readonly, nonatomic) _Bool siphoningCurrentNeedSend; // @synthesize siphoningCurrentNeedSend=_siphoningCurrentNeedSend;
@property(readonly, nonatomic) int minSiphoningCurrentInmAOld; // @synthesize minSiphoningCurrentInmAOld=_minSiphoningCurrentInmAOld;
@property(readonly, nonatomic) int reserveCurrentInmAOld; // @synthesize reserveCurrentInmAOld=_reserveCurrentInmAOld;
@property(readonly, nonatomic) int chargerVoltageInmVOld; // @synthesize chargerVoltageInmVOld=_chargerVoltageInmVOld;
@property(readonly, nonatomic) int chargerCurrentInmAOld; // @synthesize chargerCurrentInmAOld=_chargerCurrentInmAOld;
@property(readonly, nonatomic) int siphoningCurrentInmAOld; // @synthesize siphoningCurrentInmAOld=_siphoningCurrentInmAOld;
@property(readonly, nonatomic) int minSiphoningCurrentInmA; // @synthesize minSiphoningCurrentInmA=_minSiphoningCurrentInmA;
@property(readonly, nonatomic) int reserveCurrentInmA; // @synthesize reserveCurrentInmA=_reserveCurrentInmA;
@property(readonly, nonatomic) int chargerVoltageInmV; // @synthesize chargerVoltageInmV=_chargerVoltageInmV;
@property(readonly, nonatomic) int chargerCurrentInmA; // @synthesize chargerCurrentInmA=_chargerCurrentInmA;
@property(readonly, nonatomic) int siphoningCurrentInmA; // @synthesize siphoningCurrentInmA=_siphoningCurrentInmA;
@property(readonly, nonatomic) id <ACCPowerSiphoningControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSString *connectionUID; // @synthesize connectionUID=_connectionUID;
- (void)_sendChangedSiphoningValues;	// IMP=0x000000010000ab3c
- (void)_updateSiphoningValues;	// IMP=0x000000010000a910
- (void)_processPowerInfoChangeTimeout;	// IMP=0x000000010000a344
- (void)_cckHubChangeNotificationHandler:(id)arg1;	// IMP=0x0000000100009fe8
- (void)_powerInfoChangeNotificationHandler:(id)arg1;	// IMP=0x0000000100009e04
- (void)setOverCurrentSiphoning;	// IMP=0x0000000100009de8
- (void)resetOverCurrentSiphoning;	// IMP=0x0000000100009dcc
- (_Bool)getOverCurrentState;	// IMP=0x0000000100009db0
- (unsigned int)calculateSiphoningCurrent:(unsigned int)arg1;	// IMP=0x0000000100009b48
- (id)siphoningDebounceTimerSource;	// IMP=0x0000000100009a7c
- (void)dealloc;	// IMP=0x0000000100009a1c
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010000981c

@end

