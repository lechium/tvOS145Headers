//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ASDownloadConsumer.h"

@class NSString, NSURL, SZExtractor;

@interface ASStreamingZipDownloadConsumer : ASDownloadConsumer
{
    SZExtractor *_extractor;	// 24 = 0x18
    NSString *_expectedHash;	// 32 = 0x20
    long long _expectedSize;	// 40 = 0x28
    NSURL *_tmpPath;	// 48 = 0x30
}

- (void)finish;	// IMP=0x0000000100007e20
- (void)suspend;	// IMP=0x0000000100007ca0
- (_Bool)consumeData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000077d4
- (void)resumeAtOffset:(long long)arg1;	// IMP=0x0000000100007760
- (void)dealloc;	// IMP=0x0000000100007700
- (id)initWithURL:(id)arg1 downloadSize:(long long)arg2 expectedHash:(id)arg3;	// IMP=0x0000000100007668
- (void)_createExtractor;	// IMP=0x00000001000074dc
- (id)_hashToString:(id)arg1;	// IMP=0x0000000100007414

@end

