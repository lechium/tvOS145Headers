//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSEntitlements : NSObject
{
    struct _SpecificEntitlement *_specificEntitlements;	// 8 = 0x8
    char **_shrunkenServiceIdentifiers;	// 16 = 0x10
    unsigned short _serviceIdentifierCount;	// 24 = 0x18
    unsigned char _specificEntitlementCount;	// 26 = 0x1a
}

- (id)dictionaryRepresentation;	// IMP=0x0000000100288988
- (_Bool)hasAnyEntitlementForService:(id)arg1;	// IMP=0x0000000100288770
- (_Bool)hasAnyEntitlements;	// IMP=0x0000000100288748
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x0000000100288648
- (_Bool)hasService:(id)arg1 forEntitlement:(id)arg2;	// IMP=0x00000001002882c0
- (id)debugDescription;	// IMP=0x000000010028825c
- (void)dealloc;	// IMP=0x0000000100288108
- (id)initWithEntitlements:(id)arg1;	// IMP=0x0000000100286e10

@end

