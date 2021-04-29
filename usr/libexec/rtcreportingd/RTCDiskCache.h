//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RTCActivitySchedulerOptions, RTCSelfReporter;
@protocol OS_dispatch_queue, RTCDiskCacheDelegate;

@interface RTCDiskCache : NSObject
{
    RTCActivitySchedulerOptions *_options;	// 8 = 0x8
    RTCSelfReporter *_selfReporter;	// 16 = 0x10
    NSString *_rootPath;	// 24 = 0x18
    NSString *_oldestCacheFile;	// 32 = 0x20
    NSString *_newestCacheFile;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_stateQueue;	// 48 = 0x30
    id <RTCDiskCacheDelegate> _delegate;	// 56 = 0x38
}

@property(readonly) RTCActivitySchedulerOptions *options; // @synthesize options=_options;
@property(readonly) NSString *newestCacheFile; // @synthesize newestCacheFile=_newestCacheFile;
@property(readonly) NSString *oldestCacheFile; // @synthesize oldestCacheFile=_oldestCacheFile;
- (void)removeFromCacheDispatched:(id)arg1;	// IMP=0x0000000100004e3c
- (id)copyFirstEvent;	// IMP=0x0000000100004d14
- (void)addEvent:(id)arg1;	// IMP=0x0000000100004940
- (id)getOldestEventDispatched;	// IMP=0x0000000100004180
- (_Bool)searchForCacheFileWithOrder:(int)arg1;	// IMP=0x0000000100004044
- (_Bool)searchForCacheFileWithOrderDispatched:(int)arg1;	// IMP=0x0000000100003d60
- (_Bool)isSizeORTimeLimitationExceededForFile:(id)arg1;	// IMP=0x0000000100003c90
- (_Bool)isSizeORTimeLimitationExceededForFileDispatched:(id)arg1;	// IMP=0x0000000100003b68
- (id)pruneFileIfExpired:(id)arg1;	// IMP=0x00000001000039e0
- (id)pruneFileIfExpiredDispatched:(id)arg1;	// IMP=0x000000010000389c
- (void)deleteAllCacheFiles;	// IMP=0x00000001000037d8
- (void)deleteCurrentNewestCacheFile;	// IMP=0x000000010000376c
- (void)deleteCurrentOldestCacheFile;	// IMP=0x00000001000036e4
- (void)deleteCurrentCacheFileWithOrderDispatched:(int)arg1;	// IMP=0x0000000100003640
- (id)cacheFileExtention;	// IMP=0x0000000100003634
- (id)diskCacheRootPath;	// IMP=0x000000010000362c
- (void)writeInitialHeaderToFile:(id)arg1;	// IMP=0x00000001000035c0
- (_Bool)secureWriteDataForHandle:(id)arg1 data:(id)arg2;	// IMP=0x000000010000357c
- (void)syncUp;	// IMP=0x0000000100003568
- (void)setSelfReporter:(id)arg1;	// IMP=0x0000000100003540
- (id)delegate;	// IMP=0x0000000100003538
- (void)dealloc;	// IMP=0x0000000100003488
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;	// IMP=0x00000001000032e0

@end
