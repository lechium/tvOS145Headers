//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKKSNearFutureScheduler, CKRecordZoneID, NSString, OctagonStateMachine;
@protocol OctagonStateString;

__attribute__((visibility("hidden")))
@interface CKKSKeychainViewState : NSObject
{
    NSString *_zoneName;	// 8 = 0x8
    CKRecordZoneID *_zoneID;	// 16 = 0x10
    CKKSNearFutureScheduler *_notifyViewChangedScheduler;	// 24 = 0x18
    CKKSNearFutureScheduler *_notifyViewReadyScheduler;	// 32 = 0x20
    OctagonStateMachine *_zoneStateMachine;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100165c40
@property(retain) OctagonStateMachine *zoneStateMachine; // @synthesize zoneStateMachine=_zoneStateMachine;
@property(retain) CKKSNearFutureScheduler *notifyViewReadyScheduler; // @synthesize notifyViewReadyScheduler=_notifyViewReadyScheduler;
@property(retain) CKKSNearFutureScheduler *notifyViewChangedScheduler; // @synthesize notifyViewChangedScheduler=_notifyViewChangedScheduler;
@property(readonly) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(readonly) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly) NSString<OctagonStateString> *zoneCKKSState;
- (id)initWithZoneID:(id)arg1 viewStateMachine:(id)arg2 notifyViewChangedScheduler:(id)arg3 notifyViewReadyScheduler:(id)arg4;	// IMP=0x0000000100165a74

@end

