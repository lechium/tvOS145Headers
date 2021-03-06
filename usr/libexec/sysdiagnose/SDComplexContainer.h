//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDContainer.h"

@class SDLogCollectionContainer, SDTaskContainer;

__attribute__((visibility("hidden")))
@interface SDComplexContainer : SDContainer
{
    SDTaskContainer *_taskContainer;	// 8 = 0x8
    SDLogCollectionContainer *_collectionContainer;	// 16 = 0x10
}

+ (id)complexContainerWithBlock:(CDUnknownBlockType)arg1 withTimeout:(double)arg2 atDestination:(id)arg3 withDelegate:(id)arg4;	// IMP=0x0000000100028f50
+ (id)complexContainerWithSPIConsoleUserTask:(unsigned long long)arg1 withTimeout:(double)arg2 atDestination:(id)arg3 withConnection:(id)arg4 withDelegate:(id)arg5;	// IMP=0x0000000100028e44
+ (id)complexContainerWithSPITask:(unsigned long long)arg1 withTimeout:(double)arg2 atDestination:(id)arg3 withConnection:(id)arg4 withDelegate:(id)arg5;	// IMP=0x0000000100028d38
+ (id)complexContainerWithSPITask:(unsigned long long)arg1 withTimeout:(double)arg2 atDestination:(id)arg3 withConnection:(id)arg4 withDelegate:(id)arg5 withIntermediateDirectory:(id)arg6;	// IMP=0x00000001000289cc
+ (id)complexContainerWithTasks:(id)arg1 withTimeout:(double)arg2 withRules:(id)arg3 atDestination:(id)arg4 withDelegate:(id)arg5;	// IMP=0x000000010002870c
- (void).cxx_destruct;	// IMP=0x0000000100029734
@property(retain, nonatomic) SDLogCollectionContainer *collectionContainer; // @synthesize collectionContainer=_collectionContainer;
@property(retain, nonatomic) SDTaskContainer *taskContainer; // @synthesize taskContainer=_taskContainer;
- (void)applyContainerOverride:(id)arg1;	// IMP=0x0000000100029574
- (_Bool)execute;	// IMP=0x000000010002940c
- (void)setName:(id)arg1;	// IMP=0x00000001000292d0

@end

