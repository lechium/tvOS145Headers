//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface TIAutofillServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

+ (id)sharedAutofillServer;	// IMP=0x0000000100004488
- (void).cxx_destruct;	// IMP=0x00000001000048f8
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010000477c
- (_Bool)checkEntitlementForAddEntryStringWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x000000010000467c
- (void)dealloc;	// IMP=0x0000000100004618
- (id)init;	// IMP=0x0000000100004524

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

