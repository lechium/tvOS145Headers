//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSPushHandlerDelegate-Protocol.h"

@class IDSPushHandler, NSSet, NSString;
@protocol IDSActivityPushListenerDelegate, OS_dispatch_queue;

@interface IDSActivityPushListener : NSObject <IDSPushHandlerDelegate>
{
    _Bool _shouldListen;	// 8 = 0x8
    _Bool _listening;	// 9 = 0x9
    NSSet *_topicsToListenOn;	// 16 = 0x10
    id <IDSActivityPushListenerDelegate> _delegate;	// 24 = 0x18
    IDSPushHandler *_pushHandler;	// 32 = 0x20
    IDSPushHandler *_persistentEnrollmentHandler;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010019c9fc
@property(nonatomic) _Bool listening; // @synthesize listening=_listening;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSPushHandler *persistentEnrollmentHandler; // @synthesize persistentEnrollmentHandler=_persistentEnrollmentHandler;
@property(retain, nonatomic) IDSPushHandler *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(nonatomic) __weak id <IDSActivityPushListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSSet *topicsToListenOn; // @synthesize topicsToListenOn=_topicsToListenOn;
@property(nonatomic) _Bool shouldListen; // @synthesize shouldListen=_shouldListen;
- (void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;	// IMP=0x000000010019c3bc
- (void)_configurePushHandler;	// IMP=0x000000010019c220
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010019bfbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

