//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber;

@interface IDSPublicIdentityData : NSObject
{
    NSData *_publicLegacyIdentityData;	// 8 = 0x8
    NSData *_publicNGMIdentityData;	// 16 = 0x10
    NSData *_publicNGMPrekeyData;	// 24 = 0x18
    NSNumber *_NGMVersion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001003b97e8
@property(readonly, nonatomic) NSNumber *NGMVersion; // @synthesize NGMVersion=_NGMVersion;
@property(readonly, nonatomic) NSData *publicNGMPrekeyData; // @synthesize publicNGMPrekeyData=_publicNGMPrekeyData;
@property(readonly, nonatomic) NSData *publicNGMIdentityData; // @synthesize publicNGMIdentityData=_publicNGMIdentityData;
@property(readonly, nonatomic) NSData *publicLegacyIdentityData; // @synthesize publicLegacyIdentityData=_publicLegacyIdentityData;
- (id)initWithPublicLegacyIdentityData:(id)arg1 publicNGMIdentityData:(id)arg2 publicNGMPrekeyData:(id)arg3 NGMVersion:(id)arg4;	// IMP=0x00000001003b9614

@end
