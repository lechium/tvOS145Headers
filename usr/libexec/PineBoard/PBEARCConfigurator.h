//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSEARCConfigurating-Protocol.h"

@class EARCSystemClient, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface PBEARCConfigurator : NSObject <PBSEARCConfigurating>
{
    NSObject<OS_dispatch_queue> *_observerQueue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    EARCSystemClient *_earcClient;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100105a48
- (void).cxx_destruct;	// IMP=0x000000010010732c
@property(readonly, nonatomic) EARCSystemClient *earcClient; // @synthesize earcClient=_earcClient;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100106bc8
- (long long)_statusForStreamingProtocol:(id)arg1;	// IMP=0x0000000100106940
- (void)removeEARCObserver:(id)arg1;	// IMP=0x00000001001067e0
- (void)addEARCObserver:(id)arg1;	// IMP=0x0000000100106680
- (void)toggleEARC:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010010627c
- (void)enableEARC:(_Bool)arg1;	// IMP=0x0000000100106020
@property(readonly, nonatomic) long long eARCStatus;
- (void)dealloc;	// IMP=0x0000000100105ebc
- (id)_init;	// IMP=0x0000000100105b1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

