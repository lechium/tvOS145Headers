//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PKPaymentWebServiceArchiver-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface PDPaymentWebServiceArchiver : NSObject <PKPaymentWebServiceArchiver>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010001e550
- (void)archiveBackgroundContext:(id)arg1;	// IMP=0x000000010001e488
- (void)archiveContext:(id)arg1;	// IMP=0x000000010001e31c
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010001e2a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

