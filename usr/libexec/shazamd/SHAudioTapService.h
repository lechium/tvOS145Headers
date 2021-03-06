//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SHService-Protocol.h"

@class NSString, SHAudioTap, SHRecordingService;
@protocol SHServiceDelegate;

__attribute__((visibility("hidden")))
@interface SHAudioTapService : NSObject <SHService>
{
    id <SHServiceDelegate> _serviceDelegate;	// 8 = 0x8
    SHAudioTap *_audioTap;	// 16 = 0x10
    id _tapClosedObserver;	// 24 = 0x18
    SHRecordingService *_recordingService;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100006268
@property(retain, nonatomic) SHRecordingService *recordingService; // @synthesize recordingService=_recordingService;
@property(nonatomic) __weak id tapClosedObserver; // @synthesize tapClosedObserver=_tapClosedObserver;
@property(nonatomic) __weak SHAudioTap *audioTap; // @synthesize audioTap=_audioTap;
@property(nonatomic) __weak id <SHServiceDelegate> serviceDelegate; // @synthesize serviceDelegate=_serviceDelegate;
- (double)timeRequiredToPerformWork;	// IMP=0x00000001000061d8
@property(readonly, nonatomic) _Bool managesRecordingSession;
- (id)requiredEntitlements;	// IMP=0x000000010000617c
- (oneway void)stop;	// IMP=0x0000000100006170
@property(readonly, nonatomic) _Bool isRunning;
- (void)stopTap;	// IMP=0x0000000100005ff8
- (id)startTap;	// IMP=0x0000000100005c4c
- (id)initWithRecordingService:(id)arg1;	// IMP=0x0000000100005bd4
- (id)init;	// IMP=0x0000000100005b74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

