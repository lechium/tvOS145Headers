/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFLocalSessionTask.h>
#import <libobjc.A.dylib/NSURLSessionDownloadTaskSubclass.h>
#import <libobjc.A.dylib/__NSCFLocalDownloadFileOpener.h>

@protocol OS_dispatch_data;
@class __NSCFLocalDownloadFile, NSObject, NSDictionary, NSString;

@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener> {

	/*^block*/id _fileCompletion;
	__NSCFLocalDownloadFile* _downloadFile;
	NSObject*<OS_dispatch_data> _writeBuffer;
	unsigned long long _ioSuspend;
	long long _totalWrote;
	/*^block*/id _resumeCallback;
	long long _initialResumeSize;
	NSDictionary* _originalResumeInfo;
	unsigned long long _transientWriteProgress;
	/*^block*/id _afterDidReportProgressOnQueue;
	/*^block*/id _dataAckCompletion;
	int _seqNo;
	BOOL _canWrite;
	BOOL _suppressProgress;
	BOOL _needFinish;
	BOOL _didIssueNeedFinish;

}

@property (retain) __NSCFLocalDownloadFile * downloadFile;              //@synthesize downloadFile=_downloadFile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_expandResumeData:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)dealloc;
-(void)_onqueue_completeInitialization;
-(void)_onqueue_didReceiveResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_task_onqueue_didFinish;
-(void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(__NSCFLocalDownloadFile *)downloadFile;
-(int)openItemForPath:(id)arg1 mode:(int)arg2 ;
-(void)_onqueue_cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(const CFDictionaryRef)_copySocketStreamProperties;
-(void)cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)terminateExtractorWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)createResumeInformation:(id)arg1 ;
-(void)setDownloadFile:(__NSCFLocalDownloadFile *)arg1 ;
@end

