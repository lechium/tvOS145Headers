//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, AMSProcessInfo, XPCRequestToken;

@interface SubscriptionEntitlementsRequest : NSObject
{
    ACAccount *_account;	// 8 = 0x8
    AMSProcessInfo *_clientInfo;	// 16 = 0x10
    _Bool _hasAttemptedAuth;	// 24 = 0x18
    XPCRequestToken *_token;	// 32 = 0x20
    _Bool _allowPromptForAuth;	// 40 = 0x28
    unsigned long long _segment;	// 48 = 0x30
}

+ (id)_newResponseWithURLResult:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100133370
- (void).cxx_destruct;	// IMP=0x0000000100133754
@property unsigned long long segment; // @synthesize segment=_segment;
@property(retain) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property _Bool allowPromptForAuth; // @synthesize allowPromptForAuth=_allowPromptForAuth;
@property(retain) ACAccount *account; // @synthesize account=_account;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100132c30
- (id)initWithRequestToken:(id)arg1;	// IMP=0x0000000100132bcc
- (id)init;	// IMP=0x0000000100132b38

@end

