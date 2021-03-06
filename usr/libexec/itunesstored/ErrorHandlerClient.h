//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "XPCClient.h"

@class NSMutableDictionary, NSSet;

@interface ErrorHandlerClient : XPCClient
{
    NSSet *_failureTypes;	// 48 = 0x30
    NSMutableDictionary *_sessions;	// 56 = 0x38
}

@property(copy) NSSet *failureTypes;
- (id)popSessionWithIdentifier:(long long)arg1;	// IMP=0x00000001001b7864
- (id)popAllSessions;	// IMP=0x00000001001b7738
- (void)addSession:(id)arg1;	// IMP=0x00000001001b7508
- (void)dealloc;	// IMP=0x00000001001b74a8

@end

