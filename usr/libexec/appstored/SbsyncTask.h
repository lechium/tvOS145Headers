//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

#import "AMSURLProtocolDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class ACAccount, AMSURLSession, NSNumber, NSString;

@interface SbsyncTask : Task <NSURLSessionDelegate, AMSURLProtocolDelegate>
{
    _Bool _displayingDialog;	// 8 = 0x8
    long long _syncType;	// 16 = 0x10
    long long _initialSubscriptionStatus;	// 24 = 0x18
    _Bool _userInitiated;	// 32 = 0x20
    ACAccount *_account;	// 40 = 0x28
    NSString *_logUUID;	// 48 = 0x30
    double _timeout;	// 56 = 0x38
    long long _subscriptionStatus;	// 64 = 0x40
    NSNumber *_subscriptionDuration;	// 72 = 0x48
    double _startTime;	// 80 = 0x50
    AMSURLSession *_urlSession;	// 88 = 0x58
}

+ (id)_subscriptionStatusFromFPSubscriptionInfoList:(struct FPSubscriptionInfo_ *)arg1 subscriptionInfoListLength:(unsigned int)arg2;	// IMP=0x0000000100135868
+ (id)_subscriptionStatusReturningError:(id *)arg1;	// IMP=0x00000001001356f4
+ (long long)_subscriptionStatusForAccountID:(id)arg1 dictionary:(id)arg2 returningError:(id *)arg3;	// IMP=0x0000000100135684
+ (_Bool)_importSubscriptionKeyBagData:(id)arg1 accountID:(id)arg2 logKey:(id)arg3 subscriptionStatus:(long long *)arg4 returningError:(id *)arg5;	// IMP=0x0000000100135118
+ (id)sbsyncDataForAccountID:(id)arg1 sbsyncType:(long long)arg2 logKey:(id)arg3 returningError:(id *)arg4;	// IMP=0x0000000100134af4
+ (id)sbsyncDataForAccountID:(id)arg1 sbsyncType:(long long)arg2 returningError:(id *)arg3;	// IMP=0x0000000100134a7c
+ (long long)subscriptionStatusForAccountID:(id)arg1 returningError:(id *)arg2;	// IMP=0x00000001001349ec
+ (_Bool)importSubscriptionKeyBagData:(id)arg1 subscriptionStatus:(long long *)arg2 returningError:(id *)arg3;	// IMP=0x00000001001348f8
- (void).cxx_destruct;	// IMP=0x0000000100135a34
@property(retain, nonatomic) AMSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic, getter=isUserInitiated) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(copy, nonatomic) NSNumber *subscriptionDuration; // @synthesize subscriptionDuration=_subscriptionDuration;
@property(readonly, nonatomic) long long subscriptionStatus; // @synthesize subscriptionStatus=_subscriptionStatus;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(copy, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_requestURL:(id *)arg1;	// IMP=0x00000001001355c8
- (id)_newBaseRequestBodyDictionaryWithError:(id *)arg1;	// IMP=0x00000001001353f0
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100134d9c
- (void)main;	// IMP=0x0000000100133914
- (id)initWithSyncType:(long long)arg1;	// IMP=0x0000000100133790

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

