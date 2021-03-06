//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKKnowledgeStore, NSString;

@interface ADAnalyticsFBFDeliveryInfrastructure : NSObject
{
    CKKnowledgeStore *_knowledgeStore;	// 8 = 0x8
    _Bool _enabledForInstrumentationFetched;	// 16 = 0x10
    _Bool _enabledForInstrumentation;	// 17 = 0x11
    NSString *_applicationIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100266b78
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)_mapEventFromDiskRepresentation:(id)arg1 eventStreamId:(id)arg2;	// IMP=0x0000000100266868
- (void)_deliverSerializedWrapper:(id)arg1;	// IMP=0x00000001002667e8
- (void)deliverWrappedEvents:(id)arg1;	// IMP=0x00000001002666c8
- (void)deliverWrappedEvent:(id)arg1;	// IMP=0x000000010026662c
- (void)deliverLogViewerIdentifier:(id)arg1;	// IMP=0x00000001002665b4
- (void)deliverEvent:(id)arg1 eventStreamId:(id)arg2;	// IMP=0x0000000100266438
- (_Bool)shouldDeliverEvent:(id)arg1;	// IMP=0x00000001002663fc
- (_Bool)shouldHandleDeliveryStream:(unsigned long long)arg1;	// IMP=0x00000001002663d8
@property(readonly, nonatomic) _Bool enabledForInstrumentation; // @synthesize enabledForInstrumentation=_enabledForInstrumentation;
@property(readonly, nonatomic) _Bool enabledForLegacyMetrics;
- (id)init;	// IMP=0x00000001002662b0

@end

