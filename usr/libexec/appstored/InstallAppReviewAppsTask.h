//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSArray;

@interface InstallAppReviewAppsTask : Task
{
    NSArray *_installs;	// 8 = 0x8
    NSArray *_processedExternalIDs;	// 16 = 0x10
}

+ (id)_packageWithXPCMetadata:(id)arg1;	// IMP=0x00000001001e03dc
+ (id)_installWithXPCMetadata:(id)arg1;	// IMP=0x00000001001dff2c
+ (id)taskWithXPCAppMetadata:(id)arg1 requestToken:(id)arg2;	// IMP=0x00000001001dfb00
- (void).cxx_destruct;	// IMP=0x00000001001e0580
- (void)main;	// IMP=0x00000001001dfcb4
@property(readonly) NSArray *processedExternalIDs; // @synthesize processedExternalIDs=_processedExternalIDs;
- (id)initWithInstalls:(id)arg1;	// IMP=0x00000001001dfbd4

@end

