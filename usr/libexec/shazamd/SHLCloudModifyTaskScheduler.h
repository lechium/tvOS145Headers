//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SHLCloudTaskScheduler.h"

#import "SHLModifyTaskScheduler-Protocol.h"

@class NSArray, NSString, SHLCloudModifyTaskTransformer;

__attribute__((visibility("hidden")))
@interface SHLCloudModifyTaskScheduler : SHLCloudTaskScheduler <SHLModifyTaskScheduler>
{
    SHLCloudModifyTaskTransformer *_taskTransformer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010002f0f4
@property(retain, nonatomic) SHLCloudModifyTaskTransformer *taskTransformer; // @synthesize taskTransformer=_taskTransformer;
- (void)scheduleModifyTask:(id)arg1;	// IMP=0x000000010002eaa8
@property(readonly, nonatomic) NSArray *preconditions;
- (id)initWithScope:(long long)arg1;	// IMP=0x000000010002e940

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

