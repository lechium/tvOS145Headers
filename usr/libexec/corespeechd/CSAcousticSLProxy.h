//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SLProgressiveCheckerAnalyzerDelegate-Protocol.h"

@class CSAsset, CSAudioRecordContext, NSArray, NSString, SLProgressiveCheckerAnalyzer, SLProgressiveCheckerResult;
@protocol CSAcousticSLProxyDelegate, OS_dispatch_queue;

@interface CSAcousticSLProxy : NSObject <SLProgressiveCheckerAnalyzerDelegate>
{
    _Bool _sessionInProgress;	// 8 = 0x8
    _Bool _isShadowModeEnabled;	// 9 = 0x9
    id <CSAcousticSLProxyDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CSAsset *_currentAsset;	// 32 = 0x20
    SLProgressiveCheckerAnalyzer *_acousticAnalyzer;	// 40 = 0x28
    NSArray *_thresholds;	// 48 = 0x30
    unsigned long long _supportedRecordType;	// 56 = 0x38
    SLProgressiveCheckerResult *_latestResult;	// 64 = 0x40
    CSAudioRecordContext *_context;	// 72 = 0x48
    CDUnknownBlockType _reportResultBlock;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001000196f8
@property(copy, nonatomic) CDUnknownBlockType reportResultBlock; // @synthesize reportResultBlock=_reportResultBlock;
@property(retain, nonatomic) CSAudioRecordContext *context; // @synthesize context=_context;
@property(retain, nonatomic) SLProgressiveCheckerResult *latestResult; // @synthesize latestResult=_latestResult;
@property(nonatomic) _Bool isShadowModeEnabled; // @synthesize isShadowModeEnabled=_isShadowModeEnabled;
@property(nonatomic) _Bool sessionInProgress; // @synthesize sessionInProgress=_sessionInProgress;
@property(nonatomic) unsigned long long supportedRecordType; // @synthesize supportedRecordType=_supportedRecordType;
@property(retain, nonatomic) NSArray *thresholds; // @synthesize thresholds=_thresholds;
@property(retain, nonatomic) SLProgressiveCheckerAnalyzer *acousticAnalyzer; // @synthesize acousticAnalyzer=_acousticAnalyzer;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSAcousticSLProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)analyzer:(id)arg1 hasPartialResult:(id)arg2;	// IMP=0x00000001000193e0
- (void)analyzer:(id)arg1 hasFinalResult:(id)arg2;	// IMP=0x00000001000190c4
- (void)_reportResultToSiriDebugApp;	// IMP=0x0000000100019040
- (void)_reportResultToAnalytics;	// IMP=0x0000000100018f0c
- (id)_createResultDict;	// IMP=0x0000000100018c70
- (id)_timeStampString;	// IMP=0x0000000100018b90
- (void)_logResultToVTDirectory:(id)arg1;	// IMP=0x0000000100018838
- (_Bool)_isRequestMitigated:(id)arg1;	// IMP=0x000000010001864c
- (void)_reset;	// IMP=0x0000000100018590
- (void)_addAudio:(id)arg1;	// IMP=0x00000001000183b0
- (void)_startRequestWithContext:(id)arg1 withVtei:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100017e38
- (void)_setAsset:(id)arg1;	// IMP=0x0000000100017b2c
- (void)getLatestAcousticSLResult:(CDUnknownBlockType)arg1;	// IMP=0x0000000100017a50
- (void)addAudio:(id)arg1;	// IMP=0x00000001000179b8
- (void)stopRequest;	// IMP=0x0000000100017950
- (void)startRequestWithContext:(id)arg1 withVtei:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010001780c
- (void)setAsset:(id)arg1;	// IMP=0x00000001000176d0
- (id)init;	// IMP=0x0000000100017654

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

