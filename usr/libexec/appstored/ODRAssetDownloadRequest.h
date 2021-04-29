//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SZExtractorDelegate-Protocol.h"

@class AMSPromise, AssetPromise, IXPromisedOutOfBandTransfer, KeepAlive, NSDate, NSDictionary, NSError, NSLock, NSMutableArray, NSProgress, NSString, NSURL, NSUUID, ODRApplication, ODRTagsRequest;
@protocol OS_dispatch_source;

@interface ODRAssetDownloadRequest : NSObject <SZExtractorDelegate>
{
    _Bool _completed;	// 8 = 0x8
    NSMutableArray *_duplicateDownloads;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    NSLock *_lock;	// 32 = 0x20
    unsigned long long _newPins;	// 40 = 0x28
    IXPromisedOutOfBandTransfer *_outOfBandTransferPromise;	// 48 = 0x30
    unsigned long long _simulatedDownloadTickCount;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_simulatedDownloadTimer;	// 64 = 0x40
    _Bool _discretionary;	// 72 = 0x48
    _Bool _hasRefreshed;	// 73 = 0x49
    _Bool _shouldPin;	// 74 = 0x4a
    _Bool _streamable;	// 75 = 0x4b
    _Bool _useLocalCache;	// 76 = 0x4c
    _Bool _storeBased;	// 77 = 0x4d
    unsigned int _qosClass;	// 80 = 0x50
    AssetPromise *_assetPromise;	// 88 = 0x58
    NSString *_bundleID;	// 96 = 0x60
    NSString *_bundleKey;	// 104 = 0x68
    NSDictionary *_contentHashDictionary;	// 112 = 0x70
    NSUUID *_coordinatorID;	// 120 = 0x78
    NSString *_destinationPath;	// 128 = 0x80
    long long _downloadSize;	// 136 = 0x88
    long long _expectedDiskUsage;	// 144 = 0x90
    NSDictionary *_hashingData;	// 152 = 0x98
    double _loadingPriority;	// 160 = 0xa0
    NSString *_logKey;	// 168 = 0xa8
    long long _pinCount;	// 176 = 0xb0
    NSProgress *_progress;	// 184 = 0xb8
    NSDate *_requestStartDate;	// 192 = 0xc0
    NSURL *_sourceURL;	// 200 = 0xc8
    ODRTagsRequest *_tagsRequest;	// 208 = 0xd0
    long long _type;	// 216 = 0xd8
    NSString *_uniqueKey;	// 224 = 0xe0
    ODRApplication *_application;	// 232 = 0xe8
    AMSPromise *_completionPromise;	// 240 = 0xf0
    KeepAlive *_keepAlive;	// 248 = 0xf8
}

+ (id)_logPrefixForPriority:(double)arg1;	// IMP=0x00000001001778a8
+ (id)downloadWithAssetPack:(id)arg1 andManifest:(id)arg2 forApplication:(id)arg3 originatingLogKey:(id)arg4;	// IMP=0x0000000100175bec
- (void).cxx_destruct;	// IMP=0x0000000100178068
@property _Bool storeBased; // @synthesize storeBased=_storeBased;
@property(retain) KeepAlive *keepAlive; // @synthesize keepAlive=_keepAlive;
@property(retain) AMSPromise *completionPromise; // @synthesize completionPromise=_completionPromise;
@property(copy) ODRApplication *application; // @synthesize application=_application;
@property unsigned int qosClass; // @synthesize qosClass=_qosClass;
@property(retain) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
@property _Bool useLocalCache; // @synthesize useLocalCache=_useLocalCache;
@property long long type; // @synthesize type=_type;
@property(retain) ODRTagsRequest *tagsRequest; // @synthesize tagsRequest=_tagsRequest;
@property _Bool streamable; // @synthesize streamable=_streamable;
@property(copy) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property _Bool shouldPin; // @synthesize shouldPin=_shouldPin;
@property(retain) NSDate *requestStartDate; // @synthesize requestStartDate=_requestStartDate;
@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
@property long long pinCount; // @synthesize pinCount=_pinCount;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
@property double loadingPriority; // @synthesize loadingPriority=_loadingPriority;
@property _Bool hasRefreshed; // @synthesize hasRefreshed=_hasRefreshed;
@property(copy) NSDictionary *hashingData; // @synthesize hashingData=_hashingData;
@property long long expectedDiskUsage; // @synthesize expectedDiskUsage=_expectedDiskUsage;
@property long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(getter=isDiscretionary) _Bool discretionary; // @synthesize discretionary=_discretionary;
@property(copy) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(copy) NSUUID *coordinatorID; // @synthesize coordinatorID=_coordinatorID;
@property(copy) NSDictionary *contentHashDictionary; // @synthesize contentHashDictionary=_contentHashDictionary;
@property(copy) NSString *bundleKey; // @synthesize bundleKey=_bundleKey;
@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) AssetPromise *assetPromise; // @synthesize assetPromise=_assetPromise;
- (void)_validateSourceURL;	// IMP=0x0000000100177c90
- (void)_unlock;	// IMP=0x0000000100177c80
- (id)_streamingZipOptions;	// IMP=0x0000000100177a40
- (id)_simulatedDownloadTimerWithInterval:(double)arg1 dispatchBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100177978
- (double)_simulatedDownloadTime;	// IMP=0x00000001001778d8
- (void)_lock;	// IMP=0x0000000100177898
- (unsigned long long)_getFileSizeAtURL:(id)arg1;	// IMP=0x0000000100177580
- (void)_completeCoordinatorPromise:(id)arg1;	// IMP=0x0000000100177440
- (void)_cancelSimulatedDownloadTimer;	// IMP=0x0000000100177404
- (id)_calculateLocalURLForEmbeddedAssetPackWithKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001772f8
@property(readonly) unsigned long long totalNewPins;
- (void)simulateDownloadForEmbeddedAssetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100176d60
- (void)setExtractionProgress:(double)arg1;	// IMP=0x0000000100176d08
- (id)requestProperties;	// IMP=0x0000000100176b7c
@property(readonly) IXPromisedOutOfBandTransfer *outOfBandTransferPromise;
- (id)extractor;	// IMP=0x0000000100176a84
@property(readonly) long long duplicateDownloadCount;
@property(readonly) NSString *downloadPath;
- (void)completeWithSuccess;	// IMP=0x00000001001767dc
- (void)completeWithError:(id)arg1;	// IMP=0x0000000100176648
- (_Bool)allowCellularAccess;	// IMP=0x0000000100176640
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100176630
- (void)addErrorBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100176620
- (void)addDuplicateDownload:(id)arg1;	// IMP=0x0000000100176534
- (id)init;	// IMP=0x0000000100176240

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

