//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface VCPCPUMonitor : NSObject
{
    NSMutableDictionary *_requests;	// 8 = 0x8
    int _requestID;	// 16 = 0x10
}

+ (id)sharedCPUMonitor;	// IMP=0x00000001000089fc
- (void).cxx_destruct;	// IMP=0x0000000100009448
- (void)cancelRequest:(int)arg1;	// IMP=0x0000000100008f20
- (int)disableWithTimeoutSeconds:(int)arg1;	// IMP=0x0000000100008b3c
- (void)dealloc;	// IMP=0x0000000100008a68
- (id)init;	// IMP=0x0000000100008964

@end

