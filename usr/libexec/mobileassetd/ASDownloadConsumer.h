//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface ASDownloadConsumer : NSObject
{
    long long _bytesConsumed;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
}

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) long long bytesConsumed; // @synthesize bytesConsumed=_bytesConsumed;
- (void)finish;	// IMP=0x0000000100006d9c
- (void)suspend;	// IMP=0x0000000100006d40
- (_Bool)consumeData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100006ce0
- (void)resumeAtOffset:(long long)arg1;	// IMP=0x0000000100006c84
- (void)dealloc;	// IMP=0x0000000100006c3c
- (id)initWithURL:(id)arg1;	// IMP=0x0000000100006bdc

@end
