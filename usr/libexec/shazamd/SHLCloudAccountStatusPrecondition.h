//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SHLTaskPrecondition-Protocol.h"

@class NSString, SHLCloudBackedContainer;

__attribute__((visibility("hidden")))
@interface SHLCloudAccountStatusPrecondition : NSObject <SHLTaskPrecondition>
{
    SHLCloudBackedContainer *_cloudContainer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100021700
@property(retain, nonatomic) SHLCloudBackedContainer *cloudContainer; // @synthesize cloudContainer=_cloudContainer;
- (void)evaluatePreconditionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100021324
- (id)initWithContainer:(id)arg1;	// IMP=0x00000001000212ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

