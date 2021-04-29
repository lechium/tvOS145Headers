//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADAnalyticsEventRecordBuilder, NSString, SiriCoreSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface ADAnalyticsStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    SiriCoreSQLiteDatabase *_database;	// 16 = 0x10
    ADAnalyticsEventRecordBuilder *_eventRecordBuilder;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001001011bc
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void)_countQueuedEventRecordsWithCriteria:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100101084
- (void)countQueuedEventRecordsForDeliveryStream:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100100e70
- (void)countQueuedEventRecordsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100100d70
- (id)_fetchEventRecordsCreatedAfterDate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100100a0c
- (id)_fetchEventRecords:(unsigned long long)arg1 afterTimestamp:(unsigned long long)arg2 eventStreamUID:(id)arg3 streamAssistantId:(id)arg4 deliveryStream:(unsigned long long)arg5 error:(id *)arg6;	// IMP=0x0000000100100568
- (id)_fetchEventStreamUIDsWithError:(id *)arg1;	// IMP=0x0000000100100178
- (_Bool)_purgeDeletedEventRecordsBeforeOrEqualToDate:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000ffed4
- (_Bool)_deleteEventRecordsBeforeOrEqualToTimestamp:(unsigned long long)arg1 deliveryStream:(unsigned long long)arg2 eventStreamUID:(id)arg3 streamAssistantId:(id)arg4 error:(id *)arg5;	// IMP=0x00000001000ffb0c
- (_Bool)_insertEventRecords:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000ff664
- (id)_preparedDatabaseWithError:(id *)arg1;	// IMP=0x00000001000fe064
- (_Bool)_resetForReason:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000fdd48
- (void)checkpointWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fda6c
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fd830
- (void)purgeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fd3a4
- (void)fetchEventRecordsCreatedAfterDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fd254
- (void)purgeDeletedEventRecordsBeforeOrEqualToDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fd088
- (void)deleteEventRecordsBeforeOrEqualToTimestamp:(unsigned long long)arg1 deliveryStream:(unsigned long long)arg2 eventStreamUID:(id)arg3 streamAssistantId:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001000fcf00
- (void)fetchEventRecords:(unsigned long long)arg1 afterTimestamp:(unsigned long long)arg2 eventStreamUID:(id)arg3 streamAssistantId:(id)arg4 deliveryStream:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000001000fcd54
- (void)fetchEventStreamUIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fcc3c
- (void)insertEventRecords:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fca38
- (id)initWithPath:(id)arg1;	// IMP=0x00000001000fc948
- (void)dealloc;	// IMP=0x00000001000fc8f4

@end
