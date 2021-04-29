//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSXPCConnection;
@protocol GCHIDXPCInterface;

@interface GCHIDXPCConnection : NSObject
{
    NSObject<GCHIDXPCInterface> *_interface;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSNumber *_registryID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100003cfc
@property(retain) NSNumber *registryID; // @synthesize registryID=_registryID;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain) NSObject<GCHIDXPCInterface> *interface; // @synthesize interface=_interface;
- (id)initWithConnection:(id)arg1 interface:(id)arg2 registryID:(id)arg3;	// IMP=0x0000000100003bf0

@end

