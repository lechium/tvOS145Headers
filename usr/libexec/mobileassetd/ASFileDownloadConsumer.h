//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ASDownloadConsumer.h"

@interface ASFileDownloadConsumer : ASDownloadConsumer
{
    int _fd;	// 24 = 0x18
}

- (void)finish;	// IMP=0x00000001000073dc
- (void)suspend;	// IMP=0x00000001000073d8
- (_Bool)consumeData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100007158
- (void)resumeAtOffset:(long long)arg1;	// IMP=0x0000000100007050
- (_Bool)_openOutputFile;	// IMP=0x0000000100006edc
- (void)dealloc;	// IMP=0x0000000100006e88
- (id)initWithURL:(id)arg1;	// IMP=0x0000000100006e10

@end

