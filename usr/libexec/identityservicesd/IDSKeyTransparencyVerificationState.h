//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

@interface IDSKeyTransparencyVerificationState : NSObject
{
    NSNumber *_transparencyStatus;	// 8 = 0x8
    NSData *_transparencyBlob;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001005ed0a0
@property(readonly, nonatomic) NSData *transparencyBlob; // @synthesize transparencyBlob=_transparencyBlob;
@property(readonly, nonatomic) NSNumber *transparencyStatus; // @synthesize transparencyStatus=_transparencyStatus;
- (id)description;	// IMP=0x00000001005ecf70
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001005ecf54
- (unsigned long long)hash;	// IMP=0x00000001005eceb4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001005ece04
- (_Bool)isEqualToKeyTransparencyVerificationState:(id)arg1;	// IMP=0x00000001005ecac4
- (id)initWithTransparencyStatus:(id)arg1 transparencyBlob:(id)arg2;	// IMP=0x00000001005ec9ac

@end
