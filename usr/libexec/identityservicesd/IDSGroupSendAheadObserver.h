//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ENGroupContextObserverMiddleware-Protocol.h"

@class NSString;

@interface IDSGroupSendAheadObserver : NSObject <ENGroupContextObserverMiddleware>
{
    NSString *_topic;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100399e24
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void)groupContext:(id)arg1 didUpdateGroup:(id)arg2 withNewGroup:(id)arg3;	// IMP=0x0000000100399b04
- (void)_sendAheadGroup:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000100398e48
- (id)initWithProtectionSpace:(long long)arg1;	// IMP=0x0000000100398d2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

