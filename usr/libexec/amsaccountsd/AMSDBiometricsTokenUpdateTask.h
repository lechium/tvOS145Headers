//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import "AMSURLProtocolDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class ACAccount, AMSProcessInfo, NSDictionary, NSString;
@protocol AMSSecurityClientInterface;

@interface AMSDBiometricsTokenUpdateTask : AMSTask <AMSURLProtocolDelegate, NSURLSessionDelegate>
{
    _Bool _shouldGenerateKeysOnly;	// 8 = 0x8
    _Bool _shouldRequestConfirmation;	// 9 = 0x9
    ACAccount *_account;	// 16 = 0x10
    NSDictionary *_additionalDialogMetrics;	// 24 = 0x18
    AMSProcessInfo *_clientInfo;	// 32 = 0x20
    id <AMSSecurityClientInterface> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010000a308
@property(nonatomic) _Bool shouldRequestConfirmation; // @synthesize shouldRequestConfirmation=_shouldRequestConfirmation;
@property(nonatomic) _Bool shouldGenerateKeysOnly; // @synthesize shouldGenerateKeysOnly=_shouldGenerateKeysOnly;
@property(nonatomic) __weak id <AMSSecurityClientInterface> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) NSDictionary *additionalDialogMetrics; // @synthesize additionalDialogMetrics=_additionalDialogMetrics;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010000a158
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100009c60
- (id)_handleDialogRequest:(id)arg1;	// IMP=0x00000001000097e8
- (void)_sendMetricsForUpdate;	// IMP=0x00000001000097e4
- (void)_sendMetricsForDialog;	// IMP=0x00000001000097e0
- (long long)_runUpdateRequestWithStyle:(unsigned long long)arg1 primaryCerts:(id)arg2 extendedCerts:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000090d8
- (_Bool)_runConfirmationDialogWithError:(id *)arg1;	// IMP=0x0000000100008a48
- (void)_releaseLock;	// IMP=0x0000000100008a38
- (_Bool)_takeLockWithError:(id *)arg1;	// IMP=0x000000010000895c
- (id)performUpdate;	// IMP=0x00000001000077bc
- (id)initWithAccount:(id)arg1;	// IMP=0x000000010000773c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

