//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;
@protocol OS_os_transaction;

@interface FollowUpServer : NSObject <NSXPCListenerDelegate>
{
    id _restrictionNotificationObject;	// 8 = 0x8
    NSObject<OS_os_transaction> *_transaction;	// 16 = 0x10
    NSXPCListener *_listener;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100006908
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)_stopObservingLanguageChangeNotification;	// IMP=0x00000001000068c4
- (void)_beginObservingLanguageChangeNotfication;	// IMP=0x0000000100006818
- (void)dealloc;	// IMP=0x00000001000067cc
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100006718
- (void)lightStart;	// IMP=0x00000001000066dc
- (void)start;	// IMP=0x0000000100006690
- (id)init;	// IMP=0x0000000100006618

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

