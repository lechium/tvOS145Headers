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

- (void)timerFlush:(id)arg1;	// IMP=0x00000001000771d8
- (void)unscheduleFlush;	// IMP=0x0000000100077128
- (void)scheduleFlush;	// IMP=0x0000000100077050
- (void)flush;	// IMP=0x000000010007701c
- (void)_flush;	// IMP=0x0000000100076dd0
- (void)createFilePath;	// IMP=0x0000000100076cd0
- (void)log:(id)arg1 data:(id)arg2;	// IMP=0x000000010007698c
- (void)log:(id)arg1;	// IMP=0x00000001000767ec
- (_Bool)_log:(id)arg1;	// IMP=0x0000000100076764
- (void)logRawData:(id)arg1;	// IMP=0x0000000100076620
- (void)dealloc;	// IMP=0x00000001000765c4
- (id)initFor:(id)arg1;	// IMP=0x00000001000765b4
- (id)initFor:(id)arg1 fileLabel:(id)arg2;	// IMP=0x0000000100076530

@end

