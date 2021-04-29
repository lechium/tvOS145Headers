//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSArray, NSDictionary, XPCRequestToken;

@interface InstallEnterpriseAppsTask : Task
{
    NSDictionary *_apps;	// 8 = 0x8
    _Bool _isXDCRequest;	// 16 = 0x10
    XPCRequestToken *_requestToken;	// 24 = 0x18
    NSArray *_processedExternalIDs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010023bc38
- (void)main;	// IMP=0x000000010023b350
- (void)_setProcessedExternalIDs:(id)arg1;	// IMP=0x000000010023b2d0
@property(readonly) NSArray *processedExternalIDs; // @synthesize processedExternalIDs=_processedExternalIDs;
- (id)initWithEnterpriseApps:(id)arg1 isXDCRequest:(_Bool)arg2 requestToken:(id)arg3;	// IMP=0x000000010023b1b4

@end

