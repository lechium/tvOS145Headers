//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSCredHelperClient-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface GSSCredXPCHelperClient : NSObject <GSSCredHelperClient>
{
}

+ (int)refreshForCred:(struct HeimCred_s *)arg1 expireTime:(long long *)arg2;	// IMP=0x000000010001217c
+ (int)acquireForCred:(struct HeimCred_s *)arg1 expireTime:(long long *)arg2;	// IMP=0x0000000100011c90
+ (void)sendWakeup:(id)arg1;	// IMP=0x0000000100011bd4
+ (id)createXPCConnection:(unsigned int)arg1;	// IMP=0x000000010001184c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

