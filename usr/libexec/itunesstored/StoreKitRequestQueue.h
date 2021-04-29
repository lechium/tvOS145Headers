//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RequestQueue.h"

#import "ISSingleton-Protocol.h"

@class NSString;

@interface StoreKitRequestQueue : RequestQueue <ISSingleton>
{
}

+ (id)sharedInstance;	// IMP=0x00000001000549cc
+ (void)setSharedInstance:(id)arg1;	// IMP=0x0000000100054990
- (void)addOperation:(id)arg1 forMessage:(id)arg2 connection:(id)arg3 replyBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100054d48
- (void)addOperation:(id)arg1 forClient:(id)arg2 withMessageBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100054c90
- (void)requestProductsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100054a00
- (id)init;	// IMP=0x00000001000548c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
