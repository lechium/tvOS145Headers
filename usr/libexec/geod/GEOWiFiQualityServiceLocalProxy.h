//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GEOWiFiQualityServiceProxy-Protocol.h"

@class NSMutableDictionary, NSString, geo_isolater;

@interface GEOWiFiQualityServiceLocalProxy : NSObject <GEOWiFiQualityServiceProxy>
{
    NSMutableDictionary *_inflightRequests;	// 8 = 0x8
    geo_isolater *_inflightIsolater;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001c114
- (void)cancelRequestId:(id)arg1;	// IMP=0x000000010001bf30
- (void)submitWiFiQualityTileLoadForKey:(id)arg1 eTag:(id)arg2 requestId:(id)arg3 auditToken:(id)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010001bbe4
- (void)submitWiFiQualityServiceRequest:(id)arg1 requestId:(id)arg2 auditToken:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010001b938
- (id)init;	// IMP=0x000000010001b8a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
