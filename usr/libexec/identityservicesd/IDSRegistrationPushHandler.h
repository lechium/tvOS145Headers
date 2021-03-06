//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSPushHandlerDelegate-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface IDSRegistrationPushHandler : NSObject <IDSPushHandlerDelegate>
{
    NSMutableArray *_handlers;	// 8 = 0x8
    _Bool _registeredForPush;	// 16 = 0x10
    _Bool _isListening;	// 17 = 0x11
}

+ (id)commandToHandlerBlock;	// IMP=0x00000001003b4a8c
- (void).cxx_destruct;	// IMP=0x00000001003b90f0
- (void)handler:(id)arg1 pushTokenChanged:(id)arg2;	// IMP=0x00000001003b8e28
- (void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;	// IMP=0x00000001003b8c9c
- (void)removeListener:(id)arg1;	// IMP=0x00000001003b8c18
- (void)addListener:(id)arg1;	// IMP=0x00000001003b8b68
- (id)copyHandlersForEnumerating;	// IMP=0x00000001003b8b34
- (id)_pushTopics;	// IMP=0x00000001003b8a40
@property(nonatomic) _Bool registered;
- (void)_ignoreIncomingPushes;	// IMP=0x00000001003b8888
- (void)_acceptIncomingPushes;	// IMP=0x00000001003b8798
- (void)_updateListenerIfNeeded;	// IMP=0x00000001003b8524
@property(readonly, nonatomic) NSData *pushToken;
- (void)dealloc;	// IMP=0x00000001003b841c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

