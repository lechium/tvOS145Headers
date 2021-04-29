//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSSQLDatabaseObject.h"

@class CKKSItem, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface CKKSOutgoingQueueEntry : CKKSSQLDatabaseObject
{
    CKKSItem *_item;	// 8 = 0x8
    NSString *_action;	// 16 = 0x10
    NSString *_state;	// 24 = 0x18
    NSString *_accessgroup;	// 32 = 0x20
    NSDate *_waitUntil;	// 40 = 0x28
}

+ (long long)countByState:(id)arg1 zone:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100062e34
+ (id)countsByStateInZone:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100062c58
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x0000000100062a70
+ (id)sqlColumns;	// IMP=0x0000000100062a0c
+ (id)sqlTable;	// IMP=0x0000000100062a00
+ (id)allWithUUID:(id)arg1 states:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000627ec
+ (id)allInState:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100062634
+ (id)fetch:(long long)arg1 state:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100062474
+ (id)tryFromDatabase:(id)arg1 state:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x000000010006223c
+ (id)tryFromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100062084
+ (id)fromDatabase:(id)arg1 state:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100061e4c
+ (id)withItem:(struct SecDbItem *)arg1 action:(id)arg2 zoneID:(id)arg3 keyCache:(id)arg4 error:(id *)arg5;	// IMP=0x0000000100060ae0
+ (id)keyForItem:(struct SecDbItem *)arg1 zoneID:(id)arg2 keyCache:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100060558
- (void).cxx_destruct;	// IMP=0x00000001000604dc
@property(retain) NSDate *waitUntil; // @synthesize waitUntil=_waitUntil;
@property(retain) NSString *accessgroup; // @synthesize accessgroup=_accessgroup;
@property(retain) NSString *state; // @synthesize state=_state;
@property(retain) NSString *action; // @synthesize action=_action;
@property(retain) CKKSItem *item; // @synthesize item=_item;
- (_Bool)intransactionMarkAsError:(id)arg1 viewState:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100060240
- (_Bool)intransactionMoveToState:(id)arg1 viewState:(id)arg2 error:(id *)arg3;	// IMP=0x000000010005fb5c
- (id)sqlValues;	// IMP=0x000000010005f924
- (id)whereClauseToFindSelf;	// IMP=0x000000010005f7bc
@property(retain) NSString *uuid;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010005f38c
- (id)initWithCKKSItem:(id)arg1 action:(id)arg2 state:(id)arg3 waitUntil:(id)arg4 accessGroup:(id)arg5;	// IMP=0x000000010005f244
- (id)description;	// IMP=0x000000010005f0b8

@end

