//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface UARPBundleIdentityManifestEntry : NSObject
{
    _Bool _trusted;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSData *_digest;	// 24 = 0x18
}

@property(readonly) _Bool trusted; // @synthesize trusted=_trusted;
@property(readonly) NSData *digest; // @synthesize digest=_digest;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)descriptionWithTabDepth:(unsigned long long)arg1;	// IMP=0x000000010000468c
- (id)getTabs:(unsigned long long)arg1;	// IMP=0x0000000100004620
- (id)description;	// IMP=0x0000000100004610
- (void)dealloc;	// IMP=0x00000001000045b8
- (id)initWithName:(id)arg1 digest:(id)arg2 trusted:(_Bool)arg3;	// IMP=0x0000000100004528

@end

