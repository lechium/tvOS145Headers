//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServer.h>

@class NSMutableSet, geo_isolater;

@interface GEOTransitUpdateServer : GEOServer
{
    geo_isolater *_isolater;	// 16 = 0x10
    NSMutableSet *_originalRequests;	// 24 = 0x18
}

+ (id)identifier;	// IMP=0x0000000100013e3c
- (void).cxx_destruct;	// IMP=0x000000010001cbe0
- (void)cancelTransitRouteUpdateRequestWithRequest:(id)arg1;	// IMP=0x000000010001c93c
- (void)startTransitRouteUpdateRequestWithRequest:(id)arg1;	// IMP=0x000000010001c548
- (id)init;	// IMP=0x000000010001c4a8
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0000000100013e48

@end
