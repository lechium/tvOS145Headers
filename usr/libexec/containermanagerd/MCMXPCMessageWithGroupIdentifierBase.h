//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCMXPCMessageWithIdentifierBase.h"

#import "MCMXPCMessageWithGroupIdentifier-Protocol.h"

@class NSObject, NSString;
@protocol OS_xpc_object;

@interface MCMXPCMessageWithGroupIdentifierBase : MCMXPCMessageWithIdentifierBase <MCMXPCMessageWithGroupIdentifier>
{
    NSString *_groupIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100053bcc
@property(readonly, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (id)initWithXPCObject:(id)arg1 clientConnection:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x0000000100053b04

// Remaining properties
@property(readonly, nonatomic) _Bool canBeHandledLocally;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) unsigned int platform;
@property(readonly, nonatomic) struct container_client *proxy;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;

@end

