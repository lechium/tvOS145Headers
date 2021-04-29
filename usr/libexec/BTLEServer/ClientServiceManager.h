//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBPeripheralDelegate-Protocol.h"

@class CBPeripheral, NSMapTable, NSMutableSet, NSString;

@interface ClientServiceManager : NSObject <CBPeripheralDelegate>
{
    CBPeripheral *_peripheral;	// 8 = 0x8
    NSMapTable *_clientServiceMap;	// 16 = 0x10
    unsigned long long _startPriority;	// 24 = 0x18
    NSMutableSet *_startingClientServices;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x0000000100015884
- (void).cxx_destruct;	// IMP=0x000000010001709c
@property(retain, nonatomic) NSMutableSet *startingClientServices; // @synthesize startingClientServices=_startingClientServices;
@property(nonatomic) unsigned long long startPriority; // @synthesize startPriority=_startPriority;
@property(retain, nonatomic) NSMapTable *clientServiceMap; // @synthesize clientServiceMap=_clientServiceMap;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;	// IMP=0x0000000100016edc
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x0000000100016d88
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x0000000100016c34
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x0000000100016ae0
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x000000010001698c
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;	// IMP=0x0000000100016868
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;	// IMP=0x0000000100016250
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;	// IMP=0x0000000100015e24
- (void)analyzeError:(id)arg1;	// IMP=0x0000000100015d30
- (void)startClientServices;	// IMP=0x0000000100015958
- (void)dealloc;	// IMP=0x00000001000158d4
- (void)clientService:(id)arg1 desiresConnectionParameters:(id)arg2;	// IMP=0x00000001000157dc
- (void)clientServiceDidStart:(id)arg1;	// IMP=0x0000000100015760
- (id)clientServiceForUUID:(id)arg1;	// IMP=0x000000010001551c
- (id)initWithPeripheral:(id)arg1;	// IMP=0x0000000100015430

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

