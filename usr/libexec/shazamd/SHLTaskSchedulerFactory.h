//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SHLSyncSessionConfiguration;
@protocol SHLFetchTaskScheduler, SHLModifyTaskScheduler;

__attribute__((visibility("hidden")))
@interface SHLTaskSchedulerFactory : NSObject
{
    SHLSyncSessionConfiguration *_configuration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010001cc44
@property(retain, nonatomic) SHLSyncSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)createTransaction;	// IMP=0x000000010001cb78
@property(readonly, nonatomic) id <SHLFetchTaskScheduler> fetchTaskScheduler;
@property(readonly, nonatomic) id <SHLModifyTaskScheduler> modifyTaskScheduler;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000010001c998

@end

