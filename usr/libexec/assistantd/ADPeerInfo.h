//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface ADPeerInfo : NSObject <NSCopying>
{
    _Bool _deviceOwnedByCurrentUser;	// 8 = 0x8
    NSString *_idsIdentifier;	// 16 = 0x10
    NSString *_productType;	// 24 = 0x18
    NSString *_buildVersion;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSString *_idsDeviceUniqueIdentifier;	// 48 = 0x30
    NSString *_assistantIdentifier;	// 56 = 0x38
    NSString *_idsFirstRoutableDestination;	// 64 = 0x40
    NSArray *_airPlayRouteIdentifiers;	// 72 = 0x48
    NSString *_rapportEffectiveIdentifier;	// 80 = 0x50
    NSString *_homeKitAccessoryIdentifier;	// 88 = 0x58
    NSString *_mediaSystemIdentifier;	// 96 = 0x60
    NSString *_roomName;	// 104 = 0x68
    unsigned long long _preferredMessagingOptionsForCommands;	// 112 = 0x70
    NSString *_userInterfaceIdiom;	// 120 = 0x78
    NSString *_aceVersion;	// 128 = 0x80
}

+ (void)updateSharedInfoWithIdentifier:(id)arg1 productType:(id)arg2 buildVersion:(id)arg3;	// IMP=0x00000001002bc2d0
+ (id)locallyPairedPeerInfo;	// IMP=0x00000001002bb878
+ (id)_queue;	// IMP=0x00000001002bb808
- (void).cxx_destruct;	// IMP=0x00000001002bc6d0
@property(copy, nonatomic) NSString *aceVersion; // @synthesize aceVersion=_aceVersion;
@property(copy, nonatomic) NSString *userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(nonatomic) unsigned long long preferredMessagingOptionsForCommands; // @synthesize preferredMessagingOptionsForCommands=_preferredMessagingOptionsForCommands;
@property(copy, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(copy, nonatomic) NSString *mediaSystemIdentifier; // @synthesize mediaSystemIdentifier=_mediaSystemIdentifier;
@property(copy, nonatomic) NSString *homeKitAccessoryIdentifier; // @synthesize homeKitAccessoryIdentifier=_homeKitAccessoryIdentifier;
@property(copy, nonatomic) NSString *rapportEffectiveIdentifier; // @synthesize rapportEffectiveIdentifier=_rapportEffectiveIdentifier;
@property(copy, nonatomic) NSArray *airPlayRouteIdentifiers; // @synthesize airPlayRouteIdentifiers=_airPlayRouteIdentifiers;
@property(copy, nonatomic) NSString *idsFirstRoutableDestination; // @synthesize idsFirstRoutableDestination=_idsFirstRoutableDestination;
@property(copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property(nonatomic, getter=isDeviceOwnedByCurrentUser) _Bool deviceOwnedByCurrentUser; // @synthesize deviceOwnedByCurrentUser=_deviceOwnedByCurrentUser;
@property(copy, nonatomic) NSString *idsDeviceUniqueIdentifier; // @synthesize idsDeviceUniqueIdentifier=_idsDeviceUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001002bc418
- (unsigned long long)hash;	// IMP=0x00000001002bc408
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002bc404
- (id)afPeerInfo;	// IMP=0x00000001002bc098
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)description;	// IMP=0x00000001002bbf68
- (id)initWithAFPeerInfo:(id)arg1;	// IMP=0x00000001002bbb88
- (id)initWithUniqueIdentifer:(id)arg1;	// IMP=0x00000001002bbb0c
- (id)initWithIDSIdentifer:(id)arg1;	// IMP=0x00000001002bbaf4
- (id)initWithIDSIdentifer:(id)arg1 productType:(id)arg2 buildVersion:(id)arg3 name:(id)arg4;	// IMP=0x00000001002bb9bc

@end

