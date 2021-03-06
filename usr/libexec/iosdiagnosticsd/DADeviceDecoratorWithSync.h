//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import "DADevice-Protocol.h"
#import "DADeviceWithSync-Protocol.h"

@class DADeviceState, DAIDSDestination, NSObject, NSString;
@protocol DADevice, DAIDSMessageSender;

@interface DADeviceDecoratorWithSync : NSProxy <DADevice, DADeviceWithSync>
{
    id <DAIDSMessageSender> _messenger;	// 8 = 0x8
    DAIDSDestination *_destination;	// 16 = 0x10
    NSObject<DADevice> *_original;	// 24 = 0x18
}

+ (id)decorateDevice:(id)arg1;	// IMP=0x0000000100004d44
- (void).cxx_destruct;	// IMP=0x0000000100005d24
@property(retain, nonatomic) NSObject<DADevice> *original; // @synthesize original=_original;
@property(retain, nonatomic) DAIDSDestination *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) id <DAIDSMessageSender> messenger; // @synthesize messenger=_messenger;
- (_Bool)_isDeviceLocked;	// IMP=0x0000000100005bf0
- (void)_deviceStateDidChange:(id)arg1;	// IMP=0x0000000100005a9c
- (void)_syncState:(id)arg1;	// IMP=0x00000001000056d4
- (void)end;	// IMP=0x0000000100005694
- (void)resumeTests;	// IMP=0x0000000100005654
- (void)suspendTests;	// IMP=0x0000000100005614
- (void)idle;	// IMP=0x00000001000055d4
- (void)start;	// IMP=0x0000000100005594
- (void)receiveMessage:(id)arg1 data:(id)arg2 fromDestination:(id)arg3 expectsResponse:(_Bool)arg4 response:(CDUnknownBlockType)arg5;	// IMP=0x0000000100005220
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x00000001000051b8
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000010000515c
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000100004ff0
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000100004e98
- (id)initWithDevice:(id)arg1;	// IMP=0x0000000100004d94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isLocal) _Bool local; // @dynamic local;
@property(readonly, nonatomic) DADeviceState *state; // @dynamic state;
@property(readonly) Class superclass;

@end

