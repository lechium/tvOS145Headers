//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

#import "AMSCloudDataManagerDataSourceDelegate-Protocol.h"
#import "AMSMetricsIdentifierCloudDataSourceDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC14amsengagementd36MetricsIdentifierCloudDataController : _TtCs12_SwiftObject <AMSCloudDataManagerDataSourceDelegate, AMSMetricsIdentifierCloudDataSourceDelegate>
{
    MISSING_TYPE *$__lazy_storage_$_cloudContainer;	// 16 = 0x10
    MISSING_TYPE *cloudDatabasePromise;	// 24 = 0x18
    MISSING_TYPE *cloudDataSource;	// 32 = 0x20
    MISSING_TYPE *identifierSource;	// 40 = 0x28
    MISSING_TYPE *lock;	// 48 = 0x30
    MISSING_TYPE *pendingRecordKeys;	// 56 = 0x38
    MISSING_TYPE *queue;	// 64 = 0x40
    MISSING_TYPE *kAMSMetricsIdentifierUserRecordNameKey;	// 72 = 0x48
    MISSING_TYPE *kAMSMetricsIdentifierZoneCreatedKey;	// 88 = 0x58
    MISSING_TYPE *kAMSMetricsIdentifierZoneSubscriptionCreatedKey;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_sync;	// 120 = 0x78
    MISSING_TYPE *$__lazy_storage_$_fetch;	// 136 = 0x88
}

- (void)dataSourceDidChange:(id)arg1;	// IMP=0x000000010002cac8
- (void)dataSourceAccountDidChange:(id)arg1;	// IMP=0x000000010002cabc
- (id)recordIdentifierForKey:(id)arg1;	// IMP=0x000000010002d4ec
- (id)keyForRecordIdentifier:(id)arg1;	// IMP=0x000000010002d454
- (id)createRecordForKey:(id)arg1 recordType:(id)arg2;	// IMP=0x000000010002d390
- (id)identifierRecordType;	// IMP=0x000000010002cbdc
- (id)identifierStoreRecordType;	// IMP=0x000000010002cba8

@end

