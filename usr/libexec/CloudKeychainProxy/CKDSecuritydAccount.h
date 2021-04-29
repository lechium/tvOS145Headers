//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKDAccount-Protocol.h"

@interface CKDSecuritydAccount : NSObject <CKDAccount>
{
}

+ (id)securitydAccount;	// IMP=0x00000001000087f0
- (int)syncWithAllPeers:(id *)arg1;	// IMP=0x000000010000879c
- (id)syncWithPeers:(id)arg1 backups:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100008748
- (_Bool)ensurePeerRegistration:(id *)arg1;	// IMP=0x00000001000086f4
- (id)keysChanged:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100008668

@end
