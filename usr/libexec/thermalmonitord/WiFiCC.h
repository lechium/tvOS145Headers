//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@interface WiFiCC : ComponentControl <tGraphDataSource>
{
    struct __WiFiManagerClient *manager;	// 128 = 0x80
}

- (void)refreshTGraphTelemetry;	// IMP=0x000000010000e540
- (void)defaultAction;	// IMP=0x000000010000e43c
- (id)initWithParams:(struct __CFDictionary *)arg1;	// IMP=0x000000010000e2f4

@end

