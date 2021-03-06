//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSURLProtocolDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class NSString, ThreadSafeDictionary;

@interface _ProtocolDelegate : NSObject <NSURLSessionDelegate, AMSURLProtocolDelegate>
{
    ThreadSafeDictionary *_tagEnvironment;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001001a5418
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001a5048
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001a4c78
- (id)environmentForTask:(id)arg1;	// IMP=0x00000001001a4be0
- (void)checkOutEnvironmentForTag:(id)arg1;	// IMP=0x00000001001a4bc0
- (void)checkInEnvironment:(id)arg1 forTag:(id)arg2;	// IMP=0x00000001001a4ba8
- (id)init;	// IMP=0x00000001001a4b44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

