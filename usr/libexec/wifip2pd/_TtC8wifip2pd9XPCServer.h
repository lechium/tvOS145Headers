//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC8wifip2pd9XPCServer : NSObject <NSXPCListenerDelegate>
{
    MISSING_TYPE *listener;	// 8 = 0x8
    MISSING_TYPE *entitlement;	// 16 = 0x10
    MISSING_TYPE *newSessionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000963cc
- (id)init;	// IMP=0x0000000100096370
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000962f4

@end

