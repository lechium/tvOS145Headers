//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface TestObject : NSObject
{
    double _termination_threshold;	// 8 = 0x8
    double _remove_threshold;	// 16 = 0x10
    NSMutableArray *_terminationFailures;	// 24 = 0x18
    NSMutableArray *_removeFailures;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_q;	// 40 = 0x28
    unsigned long long _files_deleted;	// 48 = 0x30
}

+ (id)testObjectWithInfo:(id)arg1;	// IMP=0x0000000100010138
- (void).cxx_destruct;	// IMP=0x0000000100010644
@property unsigned long long files_deleted; // @synthesize files_deleted=_files_deleted;
@property(readonly) NSObject<OS_dispatch_queue> *q; // @synthesize q=_q;
@property(retain, nonatomic) NSMutableArray *removeFailures; // @synthesize removeFailures=_removeFailures;
@property(retain, nonatomic) NSMutableArray *terminationFailures; // @synthesize terminationFailures=_terminationFailures;
@property double remove_threshold; // @synthesize remove_threshold=_remove_threshold;
@property double termination_threshold; // @synthesize termination_threshold=_termination_threshold;
- (unsigned long long)deletes;	// IMP=0x00000001000104c8
- (void)addDeletes:(unsigned long long)arg1;	// IMP=0x00000001000103fc
- (void)addTerminationFailure:(id)arg1;	// IMP=0x0000000100010334
- (void)addRemoveFailure:(id)arg1;	// IMP=0x000000010001026c
- (id)description;	// IMP=0x000000010001018c
- (id)initWithInfo:(id)arg1;	// IMP=0x000000010000fe1c

@end
