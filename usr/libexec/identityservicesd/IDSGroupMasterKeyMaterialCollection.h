//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface IDSGroupMasterKeyMaterialCollection : NSObject
{
    NSArray *_masterKeyMaterials;	// 8 = 0x8
    NSSet *_membershipURIs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001b31b8
@property(readonly, nonatomic) NSSet *membershipURIs; // @synthesize membershipURIs=_membershipURIs;
@property(readonly, nonatomic) NSArray *masterKeyMaterials; // @synthesize masterKeyMaterials=_masterKeyMaterials;
- (id)debugDescription;	// IMP=0x00000001001b3098
- (id)description;	// IMP=0x00000001001b2f8c
- (id)initWithMasterKeyMaterials:(id)arg1 membershipURIs:(id)arg2;	// IMP=0x00000001001b2e88

@end

