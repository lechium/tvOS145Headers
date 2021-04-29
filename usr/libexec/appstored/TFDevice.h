//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString, TFDisplay, TFMemoryUsage;

@interface TFDevice : PBCodable <NSCopying>
{
    NSString *_architecture;	// 8 = 0x8
    unsigned int _batteryPercentage;	// 16 = 0x10
    NSString *_carrier;	// 24 = 0x18
    NSString *_cellularNetworkType;	// 32 = 0x20
    int _connection;	// 40 = 0x28
    TFMemoryUsage *_disk;	// 48 = 0x30
    TFDisplay *_display;	// 56 = 0x38
    NSString *_locale;	// 64 = 0x40
    NSString *_model;	// 72 = 0x48
    NSString *_osVersion;	// 80 = 0x50
    NSString *_timezone;	// 88 = 0x58
    struct {
        unsigned int batteryPercentage:1;
        unsigned int connection:1;
    } _has;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000010021c3a0
@property(retain, nonatomic) TFMemoryUsage *disk; // @synthesize disk=_disk;
@property(retain, nonatomic) NSString *cellularNetworkType; // @synthesize cellularNetworkType=_cellularNetworkType;
@property(retain, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property(retain, nonatomic) NSString *timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) TFDisplay *display; // @synthesize display=_display;
@property(retain, nonatomic) NSString *architecture; // @synthesize architecture=_architecture;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010021c0d8
- (unsigned long long)hash;	// IMP=0x000000010021bf44
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010021bcd8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010021badc
- (void)copyTo:(id)arg1;	// IMP=0x000000010021b938
- (void)writeTo:(id)arg1;	// IMP=0x000000010021b7c0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010021b7b8
- (id)dictionaryRepresentation;	// IMP=0x000000010021b054
- (id)description;	// IMP=0x000000010021afa0
@property(nonatomic) _Bool hasBatteryPercentage;
@property(nonatomic) unsigned int batteryPercentage; // @synthesize batteryPercentage=_batteryPercentage;
@property(readonly, nonatomic) _Bool hasDisk;
- (int)StringAsConnection:(id)arg1;	// IMP=0x000000010021ae4c
- (id)connectionAsString:(int)arg1;	// IMP=0x000000010021adbc
@property(nonatomic) _Bool hasConnection;
@property(nonatomic) int connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) _Bool hasCellularNetworkType;
@property(readonly, nonatomic) _Bool hasCarrier;
@property(readonly, nonatomic) _Bool hasTimezone;
@property(readonly, nonatomic) _Bool hasLocale;
@property(readonly, nonatomic) _Bool hasDisplay;
@property(readonly, nonatomic) _Bool hasArchitecture;
@property(readonly, nonatomic) _Bool hasOsVersion;
@property(readonly, nonatomic) _Bool hasModel;

@end

