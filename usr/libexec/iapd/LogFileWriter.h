//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface LogFileWriter : NSObject
{
    NSMutableArray *_logData;	// 8 = 0x8
    NSString *_filenamePrefix;	// 16 = 0x10
    NSString *_filePath;	// 24 = 0x18
    NSString *_fileLabel;	// 32 = 0x20
    unsigned long long _logDataSize;	// 40 = 0x28
    NSTimer *_flushTimer;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_logQueue;	// 56 = 0x38
}

- (void)timerFlush:(id)arg1;	// IMP=0x00000001000e9fe4
- (void)unscheduleFlush;	// IMP=0x00000001000e9ee8
- (void)scheduleFlush;	// IMP=0x00000001000e9dd0
- (void)flush;	// IMP=0x00000001000e9d9c
- (void)_flush;	// IMP=0x00000001000e9aec
- (void)createFilePath;	// IMP=0x00000001000e99bc
- (void)log:(id)arg1 data:(id)arg2;	// IMP=0x00000001000e9620
- (void)log:(id)arg1;	// IMP=0x00000001000e945c
- (_Bool)_log:(id)arg1;	// IMP=0x00000001000e93a8
- (void)logRawData:(id)arg1;	// IMP=0x00000001000e9208
- (void)dealloc;	// IMP=0x00000001000e9168
- (id)initFor:(id)arg1;	// IMP=0x00000001000e9158
- (id)initFor:(id)arg1 fileLabel:(id)arg2;	// IMP=0x00000001000e90a0

@end

