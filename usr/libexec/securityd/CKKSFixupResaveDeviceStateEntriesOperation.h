//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSGroupOperation.h"

@class CKKSKeychainView;

__attribute__((visibility("hidden")))
@interface CKKSFixupResaveDeviceStateEntriesOperation : CKKSGroupOperation
{
    CKKSKeychainView *_ckks;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010013a5a8
@property __weak CKKSKeychainView *ckks; // @synthesize ckks=_ckks;
- (void)groupStart;	// IMP=0x000000010013a384
- (id)description;	// IMP=0x000000010013a310
- (id)initWithCKKSKeychainView:(id)arg1;	// IMP=0x000000010013a29c

@end

