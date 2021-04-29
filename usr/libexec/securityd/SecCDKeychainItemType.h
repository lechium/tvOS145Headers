//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString, SecCDKeychainManagedItemType;

__attribute__((visibility("hidden")))
@interface SecCDKeychainItemType : NSObject
{
    NSString *_name;	// 8 = 0x8
    int _version;	// 16 = 0x10
    NSSet *_primaryKeys;	// 24 = 0x18
    NSSet *_syncableKeys;	// 32 = 0x20
    SecCDKeychainManagedItemType *_managedItemType;	// 40 = 0x28
}

+ (id)itemTypeForVersion:(int)arg1;	// IMP=0x0000000100044930
+ (id)itemType;	// IMP=0x0000000100044928
- (void).cxx_destruct;	// IMP=0x00000001000448e0
@property(readonly) SecCDKeychainManagedItemType *managedItemType; // @synthesize managedItemType=_managedItemType;
@property(readonly) int version; // @synthesize version=_version;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)managedItemTypeWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000446e4
@property(readonly, copy) NSArray *syncableKeys;
@property(readonly, copy) NSArray *primaryKeys;
- (id)debugDescription;	// IMP=0x0000000100044620
- (id)description;	// IMP=0x00000001000445dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000444e8
- (id)_initWithName:(id)arg1 version:(int)arg2 primaryKeys:(id)arg3 syncableKeys:(id)arg4;	// IMP=0x00000001000443c4

@end

