//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDAccountManagerObserver-Protocol.h"

@class NSString, PDAccountManager;

@interface PDAccountAdStatusChangesObserver : NSObject <PDAccountManagerObserver>
{
    PDAccountManager *_accountManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001001986ac
- (void)accountManager:(id)arg1 didRemoveAccount:(id)arg2;	// IMP=0x00000001001986a8
- (void)accountManager:(id)arg1 didUpdateAccount:(id)arg2 oldAccount:(id)arg3;	// IMP=0x00000001001986a4
- (void)accountManager:(id)arg1 didAddAccount:(id)arg2;	// IMP=0x00000001001986a0
- (void)dealloc;	// IMP=0x000000010019864c
- (id)initWithAccountManager:(id)arg1;	// IMP=0x00000001001985c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
