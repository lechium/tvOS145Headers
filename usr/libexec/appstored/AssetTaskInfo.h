//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AssetPromise, AssetRequestProperties, NSError, NSProgress, NSString, NSURLRequest, NSURLSession, NSURLSessionTask, NSURLSessionTaskMetrics;

@interface AssetTaskInfo : NSObject
{
    _Bool _ignoreAssetCache;	// 8 = 0x8
    long long _action;	// 16 = 0x10
    unsigned long long _bytesReceived;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    NSString *_logKey;	// 40 = 0x28
    NSURLSessionTaskMetrics *_metrics;	// 48 = 0x30
    NSProgress *_progress;	// 56 = 0x38
    AssetPromise *_promise;	// 64 = 0x40
    AssetRequestProperties *_properties;	// 72 = 0x48
    NSURLRequest *_request;	// 80 = 0x50
    unsigned long long _requestOffset;	// 88 = 0x58
    NSURLSession *_session;	// 96 = 0x60
    unsigned long long _signpostId;	// 104 = 0x68
    NSURLSessionTask *_task;	// 112 = 0x70
}

+ (id)taskInfoForTask:(id)arg1;	// IMP=0x000000010009e648
+ (void)removeTaskInfo:(id)arg1;	// IMP=0x000000010009e5bc
+ (void)removeAllTaskInfo;	// IMP=0x000000010009e584
+ (void)recordTaskInfo:(id)arg1 forTask:(id)arg2;	// IMP=0x000000010009e42c
+ (void)exchangeTaskForTaskInfo:(id)arg1 withTask:(id)arg2;	// IMP=0x000000010009e420
+ (id)newTaskInfoForTask:(id)arg1;	// IMP=0x000000010009e308
- (void).cxx_destruct;	// IMP=0x000000010009e7e0
@property(readonly) NSURLSessionTask *task; // @synthesize task=_task;
@property unsigned long long signpostId; // @synthesize signpostId=_signpostId;
@property __weak NSURLSession *session; // @synthesize session=_session;
@property unsigned long long requestOffset; // @synthesize requestOffset=_requestOffset;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
@property(retain) AssetRequestProperties *properties; // @synthesize properties=_properties;
@property __weak AssetPromise *promise; // @synthesize promise=_promise;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property(retain) NSURLSessionTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
@property _Bool ignoreAssetCache; // @synthesize ignoreAssetCache=_ignoreAssetCache;
@property(retain) NSError *error; // @synthesize error=_error;
@property unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property long long action; // @synthesize action=_action;
- (id)initWithTask:(id)arg1;	// IMP=0x000000010009e380

@end

