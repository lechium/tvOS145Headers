//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SecuritydXPCServer.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface LocalSecuritydXPCServer : SecuritydXPCServer
{
    NSMutableDictionary *_fakeEntitlements;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100013c5c
@property(retain) NSMutableDictionary *fakeEntitlements; // @synthesize fakeEntitlements=_fakeEntitlements;
- (_Bool)clientHasBooleanEntitlement:(id)arg1;	// IMP=0x0000000100013b78
- (id)initWithSecurityClient:(struct SecurityClient *)arg1 fakeEntitlements:(id)arg2;	// IMP=0x0000000100013ae0

@end
