//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOutputStream.h>

@class MISSING_TYPE, NSError, NSString;

@interface _TtC11FlusherUtil22CompressedOutputStream : NSOutputStream
{
    MISSING_TYPE *outputStream;	// 8 = 0x8
    MISSING_TYPE *stream;	// 16 = 0x10
    MISSING_TYPE *status;	// 56 = 0x38
    MISSING_TYPE *destBuffer;	// 64 = 0x40
    MISSING_TYPE *shaContext;	// 72 = 0x48
    MISSING_TYPE *digest;	// 280 = 0x118
    MISSING_TYPE *_uncompressedBytesWritten;	// 288 = 0x120
    MISSING_TYPE *_compressedBytesWritten;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x000000010001d8d0
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;	// IMP=0x000000010001d858
- (id)initToBuffer:(char *)arg1 capacity:(long long)arg2;	// IMP=0x000000010001d7ac
- (id)initToMemory;	// IMP=0x000000010001d73c
- (void)close;	// IMP=0x000000010001d6c0
- (void)open;	// IMP=0x000000010001d3c8
@property(nonatomic, readonly) NSError *streamError;
@property(nonatomic, readonly) unsigned long long streamStatus;
@property(nonatomic, readonly) _Bool hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(long long)arg2;	// IMP=0x000000010001d1fc
@property(nonatomic, readonly) NSString *dataDigestForStream;
- (id)initWithOutputStream:(id)arg1;	// IMP=0x000000010001cd1c
- (id)init;	// IMP=0x000000010001caa0
@property(nonatomic, readonly) long long compressedBytesWritten;
@property(nonatomic, readonly) long long uncompressedBytesWritten;
@property(nonatomic, readonly) NSOutputStream *outputStream; // @synthesize outputStream;

@end

