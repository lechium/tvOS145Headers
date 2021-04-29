/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PHMediaFormatConversionImplementation, OS_dispatch_queue;
@class NSURL, NSObject, NSMutableArray, PHMediaFormatConversionJob;

@interface PHMediaFormatConversionManager : NSObject {

	/*^block*/id _transferBehaviorUserPreferenceOverride;
	NSURL* _directoryForTemporaryFiles;
	unsigned long long _state;
	NSObject*<PHMediaFormatConversionImplementation> _conversionImplementation;
	NSMutableArray* _queuedJobs;
	PHMediaFormatConversionJob* _currentlyProcessingJob;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _preflightQueue;

}

@property (assign) unsigned long long state;                                                               //@synthesize state=_state - In the implementation block
@property (retain) NSObject*<PHMediaFormatConversionImplementation> conversionImplementation;              //@synthesize conversionImplementation=_conversionImplementation - In the implementation block
@property (retain) NSMutableArray * queuedJobs;                                                            //@synthesize queuedJobs=_queuedJobs - In the implementation block
@property (retain) PHMediaFormatConversionJob * currentlyProcessingJob;                                    //@synthesize currentlyProcessingJob=_currentlyProcessingJob - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> stateQueue;                                                //@synthesize stateQueue=_stateQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callbackQueue;                                             //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> preflightQueue;                                            //@synthesize preflightQueue=_preflightQueue - In the implementation block
@property (nonatomic,retain) NSURL * directoryForTemporaryFiles;                                           //@synthesize directoryForTemporaryFiles=_directoryForTemporaryFiles - In the implementation block
-(id)init;
-(void)invalidate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(void)setStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)preflightConversionRequest:(id)arg1 ;
-(void)enqueueConversionRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDirectoryForTemporaryFiles:(NSURL *)arg1 ;
-(NSURL *)directoryForTemporaryFiles;
-(void)setupConversionImplementation;
-(void)preflightConversionRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)configureTransferBehaviorUserPreferenceForRequest:(id)arg1 ;
-(void)setTransferBehaviorUserPreferenceOverride:(/*^block*/id)arg1 ;
-(void)processQueuedJobs;
-(void)performConversionRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)validateLivePhotoPairingIdentifierConfigurationForRequest:(id)arg1 ;
-(void)preflightAllRelatedRequestsForCurrentJob;
-(id)rootAncestorRequestForRequest:(id)arg1 ;
-(id)jobForConversionRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancellationRequestedForJob:(id)arg1 ;
-(id)ut_objectsToBeDeallocatedWithReceiver;
-(NSObject*<PHMediaFormatConversionImplementation>)conversionImplementation;
-(void)setConversionImplementation:(NSObject*<PHMediaFormatConversionImplementation>)arg1 ;
-(NSMutableArray *)queuedJobs;
-(void)setQueuedJobs:(NSMutableArray *)arg1 ;
-(PHMediaFormatConversionJob *)currentlyProcessingJob;
-(void)setCurrentlyProcessingJob:(PHMediaFormatConversionJob *)arg1 ;
-(NSObject*<OS_dispatch_queue>)preflightQueue;
-(void)setPreflightQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

