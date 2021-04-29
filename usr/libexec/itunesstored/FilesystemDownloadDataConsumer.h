//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DownloadDataConsumer.h"

@class NSArray, NSString;

@interface FilesystemDownloadDataConsumer : DownloadDataConsumer
{
    long long _bytesWritten;	// 8 = 0x8
    int _fd;	// 16 = 0x10
    _Bool _hasConsumedData;	// 20 = 0x14
    NSArray *_hashes;	// 24 = 0x18
    struct CC_MD5state_st _md5Context;	// 32 = 0x20
    long long _numberOfBytesToHash;	// 128 = 0x80
    NSString *_path;	// 136 = 0x88
    unsigned long long _resumptionOffset;	// 144 = 0x90
    long long _verifiedBytes;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000001001160cc
- (unsigned long long)resumptionOffset;	// IMP=0x00000001001160bc
- (_Bool)hasConsumedData;	// IMP=0x00000001001160ac
- (void)_truncateToSize:(long long)arg1;	// IMP=0x0000000100116030
- (_Bool)_openFile;	// IMP=0x0000000100115e50
- (_Bool)_hashAndWriteData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100115c28
- (_Bool)_checkHashForByteCount:(long long)arg1;	// IMP=0x000000010011580c
- (void)truncate;	// IMP=0x00000001001157fc
- (void)suspend;	// IMP=0x00000001001157c0
- (void)reset;	// IMP=0x0000000100115768
- (_Bool)finish:(id *)arg1;	// IMP=0x000000010011565c
- (unsigned long long)diskUsage;	// IMP=0x000000010011564c
- (_Bool)consumeData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001154a4
- (void)dealloc;	// IMP=0x000000010011544c
- (id)initWithPath:(id)arg1 MD5Hashes:(id)arg2 numberOfBytesToHash:(long long)arg3;	// IMP=0x0000000100115334

@end

