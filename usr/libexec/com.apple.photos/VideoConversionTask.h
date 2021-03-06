//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, MediaConversionRequestTracker, NSDate, NSError, NSMutableDictionary, NSString, NSURL, PAMediaConversionServiceResourceURLCollection;
@protocol OS_dispatch_source, VideoConversionTaskProgressUpdateObserver;

__attribute__((visibility("hidden")))
@interface VideoConversionTask : NSObject
{
    _Bool _didCallCompletionHandler;	// 8 = 0x8
    _Bool _didDetectHang;	// 9 = 0x9
    NSString *_identifier;	// 16 = 0x10
    NSMutableDictionary *_options;	// 24 = 0x18
    PAMediaConversionServiceResourceURLCollection *_sourceURLCollection;	// 32 = 0x20
    PAMediaConversionServiceResourceURLCollection *_outputURLCollection;	// 40 = 0x28
    NSMutableDictionary *_resultInformation;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
    AVAsset *_asset;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_progressUpdateTimerSource;	// 72 = 0x48
    CDUnknownBlockType _completionHandler;	// 80 = 0x50
    NSDate *_enqueueTime;	// 88 = 0x58
    NSDate *_conversionStartTime;	// 96 = 0x60
    NSDate *_conversionEndTime;	// 104 = 0x68
    long long _status;	// 112 = 0x70
    MediaConversionRequestTracker *_requestTracker;	// 120 = 0x78
    NSObject<VideoConversionTaskProgressUpdateObserver> *_progressObserver;	// 128 = 0x80
}

+ (id)temporaryFileURLWithNameComponent:(id)arg1 pathExtension:(id)arg2;	// IMP=0x0000000100016760
+ (_Bool)supportsDeduplication;	// IMP=0x0000000100016758
- (void).cxx_destruct;	// IMP=0x000000010001669c
@property __weak NSObject<VideoConversionTaskProgressUpdateObserver> *progressObserver; // @synthesize progressObserver=_progressObserver;
@property(retain) MediaConversionRequestTracker *requestTracker; // @synthesize requestTracker=_requestTracker;
@property(readonly) _Bool didDetectHang; // @synthesize didDetectHang=_didDetectHang;
@property _Bool didCallCompletionHandler; // @synthesize didCallCompletionHandler=_didCallCompletionHandler;
@property long long status; // @synthesize status=_status;
@property(retain) NSDate *conversionEndTime; // @synthesize conversionEndTime=_conversionEndTime;
@property(retain) NSDate *conversionStartTime; // @synthesize conversionStartTime=_conversionStartTime;
@property(retain) NSDate *enqueueTime; // @synthesize enqueueTime=_enqueueTime;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) NSObject<OS_dispatch_source> *progressUpdateTimerSource; // @synthesize progressUpdateTimerSource=_progressUpdateTimerSource;
@property(retain) AVAsset *asset; // @synthesize asset=_asset;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSMutableDictionary *resultInformation; // @synthesize resultInformation=_resultInformation;
@property(retain) PAMediaConversionServiceResourceURLCollection *outputURLCollection; // @synthesize outputURLCollection=_outputURLCollection;
@property(retain) PAMediaConversionServiceResourceURLCollection *sourceURLCollection; // @synthesize sourceURLCollection=_sourceURLCollection;
@property(retain) NSMutableDictionary *options; // @synthesize options=_options;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)requiresPhotosAdjustmentRendering;	// IMP=0x00000001000164e0
- (_Bool)isMetadataTrackExtractionConversion;	// IMP=0x0000000100016464
- (_Bool)isPassthroughConversion;	// IMP=0x00000001000163e8
- (void)startProgressUpdateTimer;	// IMP=0x00000001000163e4
- (void)cancel;	// IMP=0x00000001000163e0
- (void)performConversion;	// IMP=0x0000000100016364
- (void)didEnqueue;	// IMP=0x0000000100016300
- (CDStruct_3c1748cc)trimTimeRange;	// IMP=0x0000000100016248
- (_Bool)hasTrimTimeRange;	// IMP=0x00000001000161e4
- (_Bool)wantsResultAsData;	// IMP=0x0000000100016168
- (void)updateResultTracker;	// IMP=0x0000000100016014
- (void)callCompletionHandler;	// IMP=0x0000000100015cec
- (void)loadAsset;	// IMP=0x0000000100015b4c
@property(readonly) NSURL *outputMainResourceURL;
@property(readonly) NSURL *sourceMainResourceURL;
- (void)resolveSourceBookmarkDictionary:(id)arg1;	// IMP=0x0000000100015898
- (id)initWithSourceBookmarkDictionary:(id)arg1 outputURLCollection:(id)arg2 options:(id)arg3 requestTracker:(id)arg4;	// IMP=0x0000000100015724

@end

