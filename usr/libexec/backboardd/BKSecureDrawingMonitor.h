//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface BKSecureDrawingMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_reportingQueue;	// 8 = 0x8
    _Bool _secureModeEnabled;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010003f880
- (void).cxx_destruct;	// IMP=0x000000010003f314
@property(getter=isSecureModeEnabled) _Bool secureModeEnabled; // @synthesize secureModeEnabled=_secureModeEnabled;
- (void)reportAndKillInsecureProcesses;	// IMP=0x000000010003efec
- (void)startMonitoringSecureDrawing;	// IMP=0x000000010003ef8c
- (id)init;	// IMP=0x000000010003eed0

@end
