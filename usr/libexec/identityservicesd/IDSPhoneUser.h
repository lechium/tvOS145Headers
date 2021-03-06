//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSUser-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IDSPhoneUser : NSObject <NSCopying, IDSUser>
{
    _Bool _isDefaultUser;	// 8 = 0x8
    NSString *_phoneNumber;	// 16 = 0x10
    NSString *_phoneBookNumber;	// 24 = 0x18
    NSString *_labelID;	// 32 = 0x20
    NSString *_countryCode;	// 40 = 0x28
    NSString *_networkCode;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010022fef8
- (void).cxx_destruct;	// IMP=0x000000010023075c
@property(retain, nonatomic) NSString *networkCode; // @synthesize networkCode=_networkCode;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) _Bool isDefaultUser; // @synthesize isDefaultUser=_isDefaultUser;
@property(readonly, nonatomic) NSString *labelID; // @synthesize labelID=_labelID;
@property(retain, nonatomic) NSString *phoneBookNumber; // @synthesize phoneBookNumber=_phoneBookNumber;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100230380
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010023026c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010022ff14
- (_Bool)differsFromPhoneNumber:(id)arg1;	// IMP=0x000000010022fc40
- (_Bool)isIdenticalToUser:(id)arg1;	// IMP=0x000000010022f9c0
- (_Bool)isEqualToUser:(id)arg1;	// IMP=0x000000010022f950
- (_Bool)isEqualToPhoneUser:(id)arg1;	// IMP=0x000000010022f53c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010022f48c
@property(readonly) unsigned long long hash;
- (_Bool)shouldReplace:(id)arg1;	// IMP=0x000000010022f2d0
- (id)storageIdentifier;	// IMP=0x000000010022f2a0
- (id)unprefixedIdentifier;	// IMP=0x000000010022f1ec
- (id)realmPrefixedIdentifier;	// IMP=0x000000010022f070
- (long long)realm;	// IMP=0x000000010022f054
- (id)uniqueIdentifier;	// IMP=0x000000010022f024
- (id)phoneUserWithUpdatedDefaultUser:(_Bool)arg1 countryCode:(id)arg2 networkCode:(id)arg3;	// IMP=0x000000010022ef1c
- (id)phoneUserWithUpdatedPhoneNumber:(id)arg1;	// IMP=0x000000010022ee74
- (id)phoneUserWithUpdatedPhoneNumber:(id)arg1 phoneBookNumber:(id)arg2;	// IMP=0x000000010022ed90
- (id)initWithLabelID:(id)arg1 phoneBookNumber:(id)arg2 isDefaultUser:(_Bool)arg3 countryCode:(id)arg4 networkCode:(id)arg5;	// IMP=0x000000010022ec0c
- (id)initWithLabelID:(id)arg1 phoneBookNumber:(id)arg2;	// IMP=0x000000010022eb08
- (id)initWithLabelID:(id)arg1;	// IMP=0x000000010022ea34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

