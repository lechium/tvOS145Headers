//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SiriAudioRelaySource-Protocol.h"

@class HIDManager, NSDate, NSMutableArray, NSString, SiriAudioRelay;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface GenericSiriRemoteListener : NSObject <SiriAudioRelaySource>
{
    unsigned char _state;	// 8 = 0x8
    HIDManager *_hidManager;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_eventQueue;	// 24 = 0x18
    SiriAudioRelay *_siriAudioRelay;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *_siriAudioStart;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *_siriAudioStop;	// 48 = 0x30
    NSMutableArray *_audioBuffer;	// 56 = 0x38
    NSDate *_lastAudioDate;	// 64 = 0x40
}

+ (id)instance;	// IMP=0x0000000100007a00
- (void).cxx_destruct;	// IMP=0x00000001000094c8
@property(retain) NSDate *lastAudioDate; // @synthesize lastAudioDate=_lastAudioDate;
@property(retain) NSMutableArray *audioBuffer; // @synthesize audioBuffer=_audioBuffer;
@property(retain) NSObject<OS_dispatch_semaphore> *siriAudioStop; // @synthesize siriAudioStop=_siriAudioStop;
@property(retain) NSObject<OS_dispatch_semaphore> *siriAudioStart; // @synthesize siriAudioStart=_siriAudioStart;
@property(retain, nonatomic) SiriAudioRelay *siriAudioRelay; // @synthesize siriAudioRelay=_siriAudioRelay;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(nonatomic) unsigned char state; // @synthesize state=_state;
@property(retain, nonatomic) HIDManager *hidManager; // @synthesize hidManager=_hidManager;
- (void)siriAudioDidStop:(CDUnknownBlockType)arg1;	// IMP=0x00000001000091f4
- (void)waitForSiriAudioToStop:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008b38
- (void)siriAudioWillStart:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008494
- (void)handleAudioData:(id)arg1;	// IMP=0x0000000100008048
- (id)init;	// IMP=0x0000000100007f90
- (id)allocHIDQueue;	// IMP=0x0000000100007ee0
- (void)setUpHidHandlers;	// IMP=0x0000000100007b2c
- (void)dealloc;	// IMP=0x0000000100007abc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

