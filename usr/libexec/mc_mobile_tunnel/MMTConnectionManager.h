//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface MMTConnectionManager : NSObject
{
    NSMutableSet *_activeConnections;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100008e00
- (void).cxx_destruct;	// IMP=0x0000000100009288
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) NSMutableSet *activeConnections; // @synthesize activeConnections=_activeConnections;
- (void)removeConnection:(id)arg1;	// IMP=0x000000010000908c
- (void)createConnectionForLockdownConnection:(struct _lockdown_connection *)arg1;	// IMP=0x0000000100008f00
- (id)init;	// IMP=0x0000000100008e6c

@end

