//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDate, NSString, PKPass, PKPeerPaymentAccount, PKPeerPaymentPreferences;

@protocol PDPeerPaymentWebServiceCoordinatorDataSource
- (void)addPeerPaymentAccountIdentifierToDatabaseTransactions;
- (_Bool)passExistsWithUniqueID:(NSString *)arg1;
- (PKPass *)passWithUniqueIdentifier:(NSString *)arg1;
- (void)deleteRetryBackoffForAccountType:(unsigned long long)arg1 endpointType:(unsigned long long)arg2 accountIdentifier:(NSString *)arg3;
- (void)increaseRetryBackoffLevelForAccountType:(unsigned long long)arg1 endpointType:(unsigned long long)arg2 accountIdentifier:(NSString *)arg3;
- (NSDate *)nextPossibleFetchDateForAccountType:(unsigned long long)arg1 endpointType:(unsigned long long)arg2 accountIdentifier:(NSString *)arg3;
- (PKPeerPaymentPreferences *)removePeerPaymentPreferences;
- (PKPeerPaymentPreferences *)insertOrUpdatePeerPaymentPreferences:(PKPeerPaymentPreferences *)arg1;
- (PKPeerPaymentPreferences *)peerPaymentPreferences;
- (PKPeerPaymentAccount *)removePeerPaymentAccount;
- (PKPeerPaymentAccount *)insertOrUpdatePeerPaymentAccount:(PKPeerPaymentAccount *)arg1;
- (PKPeerPaymentAccount *)peerPaymentAccount;
@end

