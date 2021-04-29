//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSAudioRecordContext, NSHashTable;
@protocol OS_dispatch_queue;

@interface CSSiriClientBehaviorMonitor : NSObject
{
    _Bool _isStreaming;	// 8 = 0x8
    CSAudioRecordContext *_audioRecordContext;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000001000a0014
- (void).cxx_destruct;	// IMP=0x00000001000a0db8
@property(nonatomic) _Bool isStreaming; // @synthesize isStreaming=_isStreaming;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
- (void)notifyDidStopStream:(id)arg1 withEventUUID:(id)arg2;	// IMP=0x00000001000a0a48
- (void)notifyWillStopStream:(id)arg1;	// IMP=0x00000001000a083c
- (void)notifyDidStartStreamWithContext:(id)arg1 successfully:(_Bool)arg2 option:(id)arg3 withEventUUID:(id)arg4;	// IMP=0x00000001000a053c
- (void)notifyWillStartStreamWithContext:(id)arg1 option:(id)arg2;	// IMP=0x00000001000a02b8
- (void)unregisterObserver:(id)arg1;	// IMP=0x00000001000a01e8
- (void)registerObserver:(id)arg1;	// IMP=0x00000001000a0118
- (id)init;	// IMP=0x00000001000a0080

@end
