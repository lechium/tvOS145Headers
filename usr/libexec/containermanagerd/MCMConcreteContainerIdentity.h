//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMContainerIdentity.h"

@class NSUUID;

@interface MCMConcreteContainerIdentity : MCMContainerIdentity
{
    NSUUID *_uuid;	// 40 = 0x28
}

+ (id)containerIdentityWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 error:(unsigned long long *)arg6;	// IMP=0x0000000100036928
+ (id)containerIdentityWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 transient:(_Bool)arg6 error:(unsigned long long *)arg7;	// IMP=0x0000000100036860
- (void).cxx_destruct;	// IMP=0x0000000100036614
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003658c
- (_Bool)isEqualToConcreteContainerIdentity:(id)arg1;	// IMP=0x0000000100036504
- (unsigned long long)hash;	// IMP=0x000000010003649c
- (id)description;	// IMP=0x000000010003642c
- (id)initWithUUID:(id)arg1 userIdentity:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 platform:(unsigned int)arg5 transient:(_Bool)arg6 error:(unsigned long long *)arg7;	// IMP=0x0000000100036200
- (id)init;	// IMP=0x00000001000360e4

@end

