//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListenerEndpoint, TKHostToken;

@interface TKHostTokenConnection : NSObject
{
    TKHostToken *_token;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100002b48
@property(readonly, nonatomic) TKHostToken *token; // @synthesize token=_token;
- (void)dealloc;	// IMP=0x0000000100002998
@property(readonly, nonatomic) NSString *slotName;
@property(readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
- (id)initWithDriver:(id)arg1 slot:(id)arg2 AID:(id)arg3 registry:(id)arg4 error:(id *)arg5;	// IMP=0x00000001000026a0
- (id)initWithToken:(id)arg1;	// IMP=0x0000000100002604

@end

