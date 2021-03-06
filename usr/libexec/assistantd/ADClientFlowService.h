//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADService.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface ADClientFlowService : ADService
{
    NSObject<OS_dispatch_queue> *_clientFlowServiceQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010008d9d4
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010008d84c
- (void)resetExternalResources;	// IMP=0x000000010008d848
- (void)cancelOperationsForRequestID:(id)arg1;	// IMP=0x000000010008d7b4
- (void)preheatDomain:(id)arg1;	// IMP=0x000000010008d7b0
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x000000010008d7a8
- (id)commandsForDomain:(id)arg1;	// IMP=0x000000010008d708
- (id)domains;	// IMP=0x000000010008d690
- (id)handle;	// IMP=0x000000010008d68c
- (id)init;	// IMP=0x000000010008d5e8

@end

