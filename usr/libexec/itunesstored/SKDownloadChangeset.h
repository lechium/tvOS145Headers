//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSError, NSNumber, NSURL;

@interface SKDownloadChangeset : NSObject <NSCopying>
{
    NSNumber *_contentLength;	// 8 = 0x8
    NSURL *_contentURL;	// 16 = 0x10
    NSNumber *_downloadID;	// 24 = 0x18
    NSNumber *_downloadState;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSNumber *_progress;	// 48 = 0x30
    NSNumber *_timeRemaining;	// 56 = 0x38
}

+ (id)changesetWithDownloadID:(id)arg1 state:(long long)arg2;	// IMP=0x00000001000149f0
- (void).cxx_destruct;	// IMP=0x0000000100014f6c
@property(copy, nonatomic) NSNumber *timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property(copy, nonatomic) NSNumber *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSNumber *downloadState; // @synthesize downloadState=_downloadState;
@property(copy, nonatomic) NSNumber *downloadID; // @synthesize downloadID=_downloadID;
@property(copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(copy, nonatomic) NSNumber *contentLength; // @synthesize contentLength=_contentLength;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100014da8
- (id)copyXPCEncoding;	// IMP=0x0000000100014cd4
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000100014a90

@end

