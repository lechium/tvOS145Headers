//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CUTMetricLogger-Protocol.h"

@class AWDServerConnection, NSString;
@protocol OS_dispatch_queue;

@interface APSAWDLogger : NSObject <CUTMetricLogger>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AWDServerConnection *_AWDServerConnection;	// 16 = 0x10
    AWDServerConnection *_awdServerConnection;	// 24 = 0x18
}

+ (id)logger;	// IMP=0x000000010006a274
- (void).cxx_destruct;	// IMP=0x000000010006a768
@property(readonly) AWDServerConnection *awdServerConnection; // @synthesize awdServerConnection=_awdServerConnection;
- (_Bool)_shouldSubmit;	// IMP=0x000000010006a754
- (void)_submitAWDMetric:(id)arg1 withContainer:(id)arg2;	// IMP=0x000000010006a680
- (void)_submitMetric:(id)arg1 withIdentifier:(unsigned int)arg2;	// IMP=0x000000010006a404
- (void)logMetric:(id)arg1;	// IMP=0x000000010006a380
- (id)init;	// IMP=0x000000010006a2e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

