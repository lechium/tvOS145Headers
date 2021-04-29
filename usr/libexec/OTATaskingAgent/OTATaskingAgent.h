//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "OTAAgentServices-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface OTATaskingAgent : NSObject <NSXPCListenerDelegate, OTAAgentServices>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
}

+ (id)sharedListenerDelegate;	// IMP=0x0000000100001d64
- (void).cxx_destruct;	// IMP=0x0000000100002e2c
@property(retain) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (id)randomHashWithKey:(id)arg1;	// IMP=0x0000000100002c44
- (id)hexStringForSHA1Digest:(const char *)arg1;	// IMP=0x0000000100002b88
- (id)legacyCrashreporterKey;	// IMP=0x00000001000029cc
- (id)checkForExistenceAndCreateKey:(id)arg1;	// IMP=0x000000010000272c
- (void)awdKeyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000026a4
- (void)crashreporterKeyWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000261c
- (void)deletePreferenceForDomain:(id)arg1 preference:(id)arg2 UID:(unsigned int)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100002344
- (void)setPreferenceForDomain:(id)arg1 preference:(id)arg2 value:(id)arg3 UID:(unsigned int)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100001f40
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100001e50
- (id)init;	// IMP=0x0000000100001dd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
