//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFSyncBeginInfo-Protocol.h"

@class NSSet, NSString, SASyncAppMetaData;

@interface ASSyncBeginInfo : NSObject <AFSyncBeginInfo>
{
    NSString *_anchor;	// 8 = 0x8
    NSString *_validity;	// 16 = 0x10
    long long _count;	// 24 = 0x18
    NSString *_key;	// 32 = 0x20
    NSString *_applicationBundleIdentifier;	// 40 = 0x28
    NSString *_intentSlotName;	// 48 = 0x30
    SASyncAppMetaData *_appMetadata;	// 56 = 0x38
    NSSet *_reasons;	// 64 = 0x40
    NSString *_resetValidity;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100006454
@property(copy, nonatomic) NSString *resetValidity; // @synthesize resetValidity=_resetValidity;
@property(copy, nonatomic) NSSet *reasons; // @synthesize reasons=_reasons;
@property(copy, nonatomic) SASyncAppMetaData *appMetadata; // @synthesize appMetadata=_appMetadata;
@property(copy, nonatomic) NSString *intentSlotName; // @synthesize intentSlotName=_intentSlotName;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *validity; // @synthesize validity=_validity;
@property(copy, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
- (id)description;	// IMP=0x00000001000062f8
- (void)resetWithValidity:(id)arg1;	// IMP=0x00000001000062ec

@end

