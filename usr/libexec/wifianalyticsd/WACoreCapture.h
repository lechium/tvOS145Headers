//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface WACoreCapture : NSObject
{
    NSObject<OS_dispatch_queue> *_ccQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100038190
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ccQueue; // @synthesize ccQueue=_ccQueue;
- (void)__dumpCoreCaptureLogsWithReason:(id)arg1;	// IMP=0x0000000100037e8c
- (id)init;	// IMP=0x0000000100037d7c

@end

