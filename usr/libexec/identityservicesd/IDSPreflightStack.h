//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface IDSPreflightStack : NSObject <NSCopying>
{
    NSString *_IMSI;	// 8 = 0x8
    NSString *_PLMN;	// 16 = 0x10
    NSArray *_validationMechanisms;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000aedb8
@property(readonly, nonatomic) NSArray *validationMechanisms; // @synthesize validationMechanisms=_validationMechanisms;
@property(readonly, nonatomic) NSString *PLMN; // @synthesize PLMN=_PLMN;
@property(readonly, nonatomic) NSString *IMSI; // @synthesize IMSI=_IMSI;
- (id)description;	// IMP=0x00000001000aec74
- (unsigned long long)hash;	// IMP=0x00000001000aeb98
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000ae6a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000ae68c
- (id)preflightStackByPoppingMechanism;	// IMP=0x00000001000ae560
- (id)topMechanism;	// IMP=0x00000001000ae4fc
- (_Bool)containsMechanisms;	// IMP=0x00000001000ae498
- (_Bool)matchesIMSI:(id)arg1 PLMN:(id)arg2;	// IMP=0x00000001000ae380
- (id)initWithIMSI:(id)arg1 PLMN:(id)arg2 validationMechanisms:(id)arg3;	// IMP=0x00000001000ae20c

@end

