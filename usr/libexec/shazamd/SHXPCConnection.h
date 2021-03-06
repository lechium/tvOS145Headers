//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SHServiceDelegate-Protocol.h"

@class NSDate, NSString, NSXPCConnection, NSXPCInterface, SHAttribution, SHWatchdogTimer;
@protocol OS_os_transaction, SHXPCRemoteDelegate, SHXPCServiceProxy;

__attribute__((visibility("hidden")))
@interface SHXPCConnection : NSObject <SHServiceDelegate>
{
    _Bool _hasStartedSafetynetException;	// 8 = 0x8
    SHWatchdogTimer *_watchdogTimer;	// 16 = 0x10
    NSXPCInterface *_remoteInterface;	// 24 = 0x18
    id <SHXPCRemoteDelegate> _remoteDelegate;	// 32 = 0x20
    SHAttribution *_attribution;	// 40 = 0x28
    NSString *_associatedBundleID;	// 48 = 0x30
    NSXPCConnection *_connection;	// 56 = 0x38
    NSObject<OS_os_transaction> *_transaction;	// 64 = 0x40
    NSDate *_startManagedRecordingDate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100005088
@property(retain, nonatomic) NSDate *startManagedRecordingDate; // @synthesize startManagedRecordingDate=_startManagedRecordingDate;
@property(nonatomic) _Bool hasStartedSafetynetException; // @synthesize hasStartedSafetynetException=_hasStartedSafetynetException;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, copy, nonatomic) NSString *associatedBundleID; // @synthesize associatedBundleID=_associatedBundleID;
@property(readonly, nonatomic) SHAttribution *attribution; // @synthesize attribution=_attribution;
@property(retain, nonatomic) id <SHXPCRemoteDelegate> remoteDelegate; // @synthesize remoteDelegate=_remoteDelegate;
@property(retain, nonatomic) id <SHXPCServiceProxy> exportedObject;
@property(readonly, nonatomic) NSXPCInterface *remoteInterface; // @synthesize remoteInterface=_remoteInterface;
- (id)configurationForService:(id)arg1;	// IMP=0x0000000100004c4c
- (void)serviceUpdated:(id)arg1 withRunningState:(_Bool)arg2;	// IMP=0x00000001000048e8
@property(readonly, nonatomic) SHWatchdogTimer *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;
- (void)stopWatchdogTimer;	// IMP=0x0000000100004804
- (void)startWatchdogTimerForInterval:(double)arg1 firedCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000046b0
- (void)stopMediaSafetyNetExemption;	// IMP=0x00000001000046ac
- (void)startMediaSafetyNetExemption;	// IMP=0x00000001000046a8
- (void)powerlogCallingProcessBundleID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;	// IMP=0x0000000100004484
- (void)registerBundleAttribution:(id)arg1;	// IMP=0x0000000100004480
- (void)endTransaction;	// IMP=0x00000001000043fc
- (void)startTransaction;	// IMP=0x0000000100004340
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100004100
- (void)dealloc;	// IMP=0x0000000100004074

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

