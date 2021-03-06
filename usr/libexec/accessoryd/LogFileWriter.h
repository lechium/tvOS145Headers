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

- (void).cxx_destruct;	// IMP=0x000000010000c794
- (void)timerFlush:(id)arg1;	// IMP=0x000000010000c67c
- (void)unscheduleFlush;	// IMP=0x000000010000c5c8
- (void)scheduleFlush;	// IMP=0x000000010000c4e0
- (void)flush;	// IMP=0x000000010000c4ac
- (void)_flush;	// IMP=0x000000010000c230
- (void)createFilePath;	// IMP=0x000000010000c0bc
- (void)log:(id)arg1 data:(id)arg2;	// IMP=0x000000010000bce4
- (void)log:(id)arg1;	// IMP=0x000000010000badc
- (_Bool)_log:(id)arg1;	// IMP=0x000000010000ba3c
- (void)logRawData:(id)arg1;	// IMP=0x000000010000b85c
- (void)dealloc;	// IMP=0x000000010000b7d4
- (id)initFor:(id)arg1;	// IMP=0x000000010000b7c4
- (id)initFor:(id)arg1 fileLabel:(id)arg2;	// IMP=0x000000010000b6e4

@end

