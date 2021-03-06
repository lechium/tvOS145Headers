//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UWLMessageHeaders : PBCodable <NSCopying>
{
    NSMutableArray *_cookies;	// 8 = 0x8
    NSString *_userAgent;	// 16 = 0x10
    NSString *_xAppleStorefront;	// 24 = 0x18
    NSString *_xDsid;	// 32 = 0x20
    NSString *_xGuid;	// 40 = 0x28
    NSString *_xUseridKey;	// 48 = 0x30
    NSString *_xUseridKeyspace;	// 56 = 0x38
}

+ (Class)cookiesType;	// IMP=0x000000010001df9c
- (void).cxx_destruct;	// IMP=0x000000010001f114
@property(retain, nonatomic) NSMutableArray *cookies; // @synthesize cookies=_cookies;
@property(retain, nonatomic) NSString *xUseridKey; // @synthesize xUseridKey=_xUseridKey;
@property(retain, nonatomic) NSString *xUseridKeyspace; // @synthesize xUseridKeyspace=_xUseridKeyspace;
@property(retain, nonatomic) NSString *xGuid; // @synthesize xGuid=_xGuid;
@property(retain, nonatomic) NSString *xAppleStorefront; // @synthesize xAppleStorefront=_xAppleStorefront;
@property(retain, nonatomic) NSString *xDsid; // @synthesize xDsid=_xDsid;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010001ee1c
- (unsigned long long)hash;	// IMP=0x000000010001ed48
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001eb98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010001e930
- (void)copyTo:(id)arg1;	// IMP=0x000000010001e7ac
- (void)writeTo:(id)arg1;	// IMP=0x000000010001e5e8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010001e5e0
- (id)dictionaryRepresentation;	// IMP=0x000000010001e05c
- (id)description;	// IMP=0x000000010001dfa8
- (id)cookiesAtIndex:(unsigned long long)arg1;	// IMP=0x000000010001df84
- (unsigned long long)cookiesCount;	// IMP=0x000000010001df6c
- (void)addCookies:(id)arg1;	// IMP=0x000000010001def8
- (void)clearCookies;	// IMP=0x000000010001dee0
@property(readonly, nonatomic) _Bool hasXUseridKey;
@property(readonly, nonatomic) _Bool hasXUseridKeyspace;
@property(readonly, nonatomic) _Bool hasXGuid;

@end

