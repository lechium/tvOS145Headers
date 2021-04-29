//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RTCReportingBackend.h"

@class NSMutableArray, NSMutableDictionary, NSNumber, NSOperationQueue, NSString;

@interface HTTPSPostBackend : RTCReportingBackend
{
    NSString *_postURL;	// 248 = 0xf8
    _Bool _useDefaultPostURL;	// 256 = 0x100
    NSString *_realtimePostURL;	// 264 = 0x108
    _Bool _useDefaultRealtimePostURL;	// 272 = 0x110
    NSMutableArray *_batchedEvents;	// 280 = 0x118
    NSOperationQueue *_queue;	// 288 = 0x120
    int _eventThreshold;	// 296 = 0x128
    int _extrasOnInternal;	// 300 = 0x12c
    NSNumber *_overrideSampling;	// 304 = 0x130
    NSMutableDictionary *_eventMethodCounts;	// 312 = 0x138
    NSString *_uuidRespectDnu;	// 320 = 0x140
    NSString *_uuidOverrideDnu;	// 328 = 0x148
    NSString *_uuidCustom;	// 336 = 0x150
    _Bool _forceEventLogging;	// 344 = 0x158
    _Bool _immutable;	// 345 = 0x159
}

@property(copy) NSString *postURL; // @synthesize postURL=_postURL;
- (unsigned long long)batchedEventsSize;	// IMP=0x000000010002a230
- (void)setCorrelatedSessionID:(id)arg1;	// IMP=0x000000010002a080
- (id)flushMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100029994
- (id)sendMessage:(id)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5 flag:(int)arg6;	// IMP=0x000000010002926c
- (int)updateState;	// IMP=0x0000000100029228
- (int)updateBackendState;	// IMP=0x00000001000283bc
- (_Bool)isFrameworkEnabledForClient:(id)arg1;	// IMP=0x0000000100028240
- (void)resetBackendStateWithClient:(id)arg1;	// IMP=0x00000001000280dc
- (_Bool)updatePostLink:(id)arg1;	// IMP=0x0000000100027e24
- (void)postJSONMessage:(id)arg1 withFlag:(int)arg2 method:(id)arg3 responseCode:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100027674
- (id)createMessageForPostAndLogging:(id)arg1 prettyJsonString:(id *)arg2;	// IMP=0x0000000100026d88
- (void)prepareEventForMessage:(id)arg1 frameworkData:(id)arg2;	// IMP=0x0000000100026cf0
- (id)batchEvent:(id)arg1;	// IMP=0x00000001000269bc
- (id)newEventDictfromPayload:(id)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5;	// IMP=0x0000000100026580
- (void)dealloc;	// IMP=0x00000001000264c0
- (id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3;	// IMP=0x0000000100026080

@end

