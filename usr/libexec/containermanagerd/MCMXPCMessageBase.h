//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCMXPCMessage-Protocol.h"

@class NSString;
@protocol OS_xpc_object;

@interface MCMXPCMessageBase : NSObject <MCMXPCMessage>
{
    unsigned int _platform;	// 8 = 0x8
    struct container_client *_proxy;	// 16 = 0x10
    NSObject<OS_xpc_object> *_xpcObject;	// 24 = 0x18
}

+ (id)xpcMessageFromXPCObject:(id)arg1 clientConnection:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000010008a6c0
+ (_Bool)canLocallyHandleContainerClass:(unsigned long long)arg1;	// IMP=0x000000010008a67c
- (void).cxx_destruct;	// IMP=0x000000010008a5f8
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject; // @synthesize xpcObject=_xpcObject;
@property(readonly, nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) struct container_client *proxy; // @synthesize proxy=_proxy;
@property(readonly, nonatomic) _Bool canBeHandledLocally;
- (void)dealloc;	// IMP=0x000000010008a550
- (id)initWithXPCObject:(id)arg1 clientConnection:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000010008a480
- (id)concreteContainerIdentityFromXPCObject:(id)arg1 identifierKey:(const char *)arg2 clientConnection:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x000000010008b6d0
- (id)concreteContainerIdentityFromXPCObject:(id)arg1 identifierKey:(const char *)arg2 classKey:(const char *)arg3 UUIDKey:(const char *)arg4 personaUniqueStringKey:(const char *)arg5 clientConnection:(id)arg6 error:(unsigned long long *)arg7;	// IMP=0x000000010008b498
- (id)containerIdentityFromXPCObject:(id)arg1 identifierKey:(const char *)arg2 classKey:(const char *)arg3 transientKey:(const char *)arg4 clientConnection:(id)arg5 error:(unsigned long long *)arg6;	// IMP=0x000000010008b280
- (id)userIdentityForContainerIdentifier:(id)arg1 clientConnection:(id)arg2 containerClass:(unsigned long long)arg3 error:(unsigned long long *)arg4;	// IMP=0x000000010008ad48
- (id)userIdentityFromXPCObject:(id)arg1 key:(const char *)arg2 containerClass:(unsigned long long)arg3 clientConnection:(id)arg4 error:(unsigned long long *)arg5;	// IMP=0x000000010008ac48
- (id)userIdentityFromClientPersonaUniqueString:(id)arg1 clientConnection:(id)arg2 error:(unsigned long long *)arg3;	// IMP=0x000000010008a89c
- (id)nsObjectFromXPCObject:(id)arg1 key:(const char *)arg2;	// IMP=0x000000010008a848
- (id)nsUUIDValueFromXPCObject:(id)arg1 key:(const char *)arg2;	// IMP=0x000000010008a800
- (id)identifierFromXPCObject:(id)arg1 elseClientIdentifier:(id)arg2;	// IMP=0x000000010008a77c
- (id)nsStringValueFromXPCObject:(id)arg1 key:(const char *)arg2;	// IMP=0x000000010008a73c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

