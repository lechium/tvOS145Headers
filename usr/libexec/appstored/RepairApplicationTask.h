//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

#import "ApplicationRepairDelegate-Protocol.h"

@class ASDRepairOptions, NSString, XPCRequestToken;
@protocol ApplicationRepair;

@interface RepairApplicationTask : Task <ApplicationRepairDelegate>
{
    id <ApplicationRepair> _applicationRepair;	// 8 = 0x8
    ASDRepairOptions *_options;	// 16 = 0x10
    XPCRequestToken *_requestToken;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100111f7c
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)repair:(id)arg1 needsToReleaseBlockingCallerWithReason:(id)arg2;	// IMP=0x0000000100111ebc
- (void)repair:(id)arg1 wantsToRelaunchApplication:(id)arg2;	// IMP=0x0000000100111c68
- (void)main;	// IMP=0x0000000100111680
- (id)initWithOptions:(id)arg1 requestToken:(id)arg2;	// IMP=0x00000001001115cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
