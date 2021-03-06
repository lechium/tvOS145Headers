//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDIAPHistoryServiceProtocol-Protocol.h"

@interface IAPHistoryService : NSObject <ASDIAPHistoryServiceProtocol>
{
}

+ (id)defaultService;	// IMP=0x00000001000fe548
- (void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ff9b8
- (void)getCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ff710
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(_Bool)arg2 requestingBundleId:(id)arg3 withReplyHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000ff3d4
- (void)getSubscriptionEntitlementsIgnoreCaches:(_Bool)arg1 forActiveAccountWithReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ff124
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3;	// IMP=0x00000001000fef34
- (void)refreshIAPsForActiveAccountWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000feccc
- (void)getIAPsForActiveAccountWithAdamIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fe838
- (void)getAllIAPsForActiveAccountWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fe5b4

@end

