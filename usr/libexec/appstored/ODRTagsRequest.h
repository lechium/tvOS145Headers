//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSProgress, NSString;

@interface ODRTagsRequest : NSObject
{
    double _lastEnhancedProgressReport;	// 8 = 0x8
    double _startTime;	// 16 = 0x10
    NSMutableDictionary *_tagRequests;	// 24 = 0x18
    NSString *_logKey;	// 32 = 0x20
    NSProgress *_progress;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000af4e0
@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly) NSString *logKey; // @synthesize logKey=_logKey;
- (void)updateReportForRequestID:(id)arg1 withSecondsRemaining:(double)arg2 bytesDownloaded:(unsigned long long)arg3;	// IMP=0x00000001000af0ac
- (id)initWithProgress:(id)arg1;	// IMP=0x00000001000aefb4

@end

