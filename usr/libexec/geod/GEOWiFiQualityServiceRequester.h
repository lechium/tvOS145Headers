//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServiceRequester.h>

@class GEOApplicationAuditToken, GEOWiFiQualityServiceRequest;

@interface GEOWiFiQualityServiceRequester : GEOServiceRequester
{
    GEOWiFiQualityServiceRequest *_request;	// 8 = 0x8
    GEOApplicationAuditToken *_token;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100030654
- (id)_validateResponse:(id)arg1;	// IMP=0x00000001000305d4
- (void)cancel;	// IMP=0x00000001000305bc
- (void)startWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003036c
- (id)initWithRequest:(id)arg1 auditToken:(id)arg2;	// IMP=0x00000001000302b8

@end

