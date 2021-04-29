//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADAudioRoute;
@protocol OS_dispatch_queue;

@interface ADAudioSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADAudioRoute *_inputRoute;	// 16 = 0x10
    ADAudioRoute *_outputRoute;	// 24 = 0x18
}

+ (id)sharedSession;	// IMP=0x000000010004e110
- (void).cxx_destruct;	// IMP=0x000000010004ed4c
- (id)currentOutputRoute;	// IMP=0x000000010004e924
- (id)currentInputRoute;	// IMP=0x000000010004e1e0
- (id)init;	// IMP=0x000000010004e17c

@end

