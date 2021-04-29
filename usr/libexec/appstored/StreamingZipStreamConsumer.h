//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "StreamDelegate-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue, SZExtractor, StreamReader;

@interface StreamingZipStreamConsumer : NSObject <StreamDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    id <SZExtractor> _extractor;	// 16 = 0x10
    id <StreamReader> _streamReader;	// 24 = 0x18
    CDUnknownBlockType _errorHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100170a58
@property(copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
- (void)_readAllAvailableData;	// IMP=0x0000000100170498
- (void)_finishExtractor;	// IMP=0x0000000100170290
- (void)_callErrorHandlerWithError:(id)arg1;	// IMP=0x000000010017022c
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;	// IMP=0x0000000100170144
- (id)initWithStreamReader:(id)arg1 extractor:(id)arg2;	// IMP=0x000000010016ffbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
