//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <System/OS_object.h>

#import "OS_mdns_object-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OS_mdns_object : OS_object <OS_mdns_object>
{
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010008363c
- (id)redactedDescription;	// IMP=0x0000000100083620
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000100083588

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

