//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

#import "SBSRemoteAlertHandleObserver-Protocol.h"

@class ACAccount, NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface AcknowledgePrivacyTask : Task <SBSRemoteAlertHandleObserver>
{
    ACAccount *_account;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_privacyPromptSemaphore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010015c5c4
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x000000010015c4c8
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x000000010015c3ec
- (void)main;	// IMP=0x000000010015c3e0
- (id)initWithAccount:(id)arg1;	// IMP=0x000000010015c360

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

