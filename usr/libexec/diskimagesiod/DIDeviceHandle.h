//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class DIClient2IODaemonXPCHandler, NSString, NSXPCListenerEndpoint;

@interface DIDeviceHandle : NSObject <NSSecureCoding, NSCoding>
{
    _Bool _handleRefCount;	// 8 = 0x8
    unsigned int _ioMedia;	// 12 = 0xc
    NSString *_BSDName;	// 16 = 0x10
    DIClient2IODaemonXPCHandler *_client2IOhandler;	// 24 = 0x18
    unsigned long long _regEntryID;	// 32 = 0x20
    NSXPCListenerEndpoint *_xpcEndpoint;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000576c
+ (id)copyBSDNameWithService:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000100004ef0
+ (unsigned int)copyIOMediaWithService:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000100004cec
- (void).cxx_destruct;	// IMP=0x0000000100005c30
@property(retain, nonatomic) NSXPCListenerEndpoint *xpcEndpoint; // @synthesize xpcEndpoint=_xpcEndpoint;
@property(readonly, nonatomic) unsigned long long regEntryID; // @synthesize regEntryID=_regEntryID;
@property(nonatomic) _Bool handleRefCount; // @synthesize handleRefCount=_handleRefCount;
@property(retain, nonatomic) DIClient2IODaemonXPCHandler *client2IOhandler; // @synthesize client2IOhandler=_client2IOhandler;
@property(nonatomic) unsigned int ioMedia; // @synthesize ioMedia=_ioMedia;
@property(retain, nonatomic) NSString *BSDName; // @synthesize BSDName=_BSDName;
- (id)description;	// IMP=0x0000000100005aec
- (_Bool)addToRefCountWithError:(id *)arg1;	// IMP=0x00000001000059c4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000058b4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100005774
- (_Bool)waitForDeviceWithError:(id *)arg1;	// IMP=0x0000000100005428
- (void)waitForQuietWithService:(unsigned int)arg1;	// IMP=0x00000001000051c4
- (_Bool)updateBSDNameWithError:(id *)arg1;	// IMP=0x0000000100004f80
- (unsigned int)copyKernelServiceWithError:(id *)arg1;	// IMP=0x0000000100004aac
- (void)dealloc;	// IMP=0x0000000100004934
- (id)initWithRegEntryID:(unsigned long long)arg1;	// IMP=0x0000000100004924
- (id)initWithRegEntryID:(unsigned long long)arg1 xpcEndpoint:(id)arg2;	// IMP=0x00000001000048a4

@end

