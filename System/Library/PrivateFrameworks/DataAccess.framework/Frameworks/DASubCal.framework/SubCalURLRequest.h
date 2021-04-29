/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol SubCalURLRequestDelegate;
@class NSURL, NSString, DAStatusReport, NSURLSession, NSURLSessionDataTask, NSMutableData, NSFileHandle, NSDate, NSTimer;

@interface SubCalURLRequest : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	BOOL _useFileCache;
	BOOL _wasUserRequested;
	BOOL _useShortTimeoutInterval;
	BOOL _sendDataUpdateCallback;
	BOOL _finished;
	NSURL* _url;
	id<SubCalURLRequestDelegate> _delegate;
	NSString* _username;
	NSString* _password;
	double _timestamp;
	NSString* _filePath;
	DAStatusReport* _statusReport;
	long long _expectedDataSize;
	long long _receivedDataSize;
	NSURLSession* _session;
	NSURLSessionDataTask* _task;
	NSMutableData* _connectionData;
	NSFileHandle* _fileHandle;
	NSDate* _startTime;
	NSTimer* _idleTimer;
	NSString* _startRunloopDescriptionString;

}

@property (nonatomic,copy) NSURL * url;                                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * task;                               //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSMutableData * connectionData;                            //@synthesize connectionData=_connectionData - In the implementation block
@property (nonatomic,retain) NSString * filePath;                                       //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain) NSFileHandle * fileHandle;                                 //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign,nonatomic) BOOL sendDataUpdateCallback;                               //@synthesize sendDataUpdateCallback=_sendDataUpdateCallback - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                        //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSTimer * idleTimer;                                       //@synthesize idleTimer=_idleTimer - In the implementation block
@property (nonatomic,retain) NSString * startRunloopDescriptionString;                  //@synthesize startRunloopDescriptionString=_startRunloopDescriptionString - In the implementation block
@property (assign,nonatomic) BOOL finished;                                             //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic,__weak) id<SubCalURLRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * username;                                         //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                         //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) double timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL useFileCache;                                         //@synthesize useFileCache=_useFileCache - In the implementation block
@property (nonatomic,retain) DAStatusReport * statusReport;                             //@synthesize statusReport=_statusReport - In the implementation block
@property (assign,nonatomic) BOOL wasUserRequested;                                     //@synthesize wasUserRequested=_wasUserRequested - In the implementation block
@property (nonatomic,readonly) long long expectedDataSize;                              //@synthesize expectedDataSize=_expectedDataSize - In the implementation block
@property (nonatomic,readonly) long long receivedDataSize;                              //@synthesize receivedDataSize=_receivedDataSize - In the implementation block
@property (assign,nonatomic) BOOL useShortTimeoutInterval;                              //@synthesize useShortTimeoutInterval=_useShortTimeoutInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_initializeFileCache;
+(id)_cachedICSFilesDirectory;
-(id<SubCalURLRequestDelegate>)delegate;
-(void)setDelegate:(id<SubCalURLRequestDelegate>)arg1 ;
-(NSString *)password;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)cancel;
-(NSURLSession *)session;
-(NSDate *)startTime;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(NSString *)username;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(void)setPassword:(NSString *)arg1 ;
-(double)timestamp;
-(NSFileHandle *)fileHandle;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSURLSessionDataTask *)task;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(void)_idleTimerFired;
-(void)startConnection;
-(DAStatusReport *)statusReport;
-(void)setStatusReport:(DAStatusReport *)arg1 ;
-(NSMutableData *)connectionData;
-(NSString *)startRunloopDescriptionString;
-(void)setIdleTimer:(NSTimer *)arg1 ;
-(NSTimer *)idleTimer;
-(void)_setHeadersOnRequest:(id)arg1 ;
-(BOOL)useShortTimeoutInterval;
-(BOOL)wasUserRequested;
-(void)_markStartTime;
-(void)setConnectionData:(NSMutableData *)arg1 ;
-(void)_markEndTime;
-(void)_cancelIdleTimer;
-(void)setSendDataUpdateCallback:(BOOL)arg1 ;
-(void)_handleAuthenticationChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)useFileCache;
-(void)_receivedDataForFile:(id)arg1 ;
-(BOOL)sendDataUpdateCallback;
-(void)_extendIdleTimer;
-(BOOL)_canAuthenticateAgainstProtectionSpace:(id)arg1 ;
-(void)_respondToChallenge:(id)arg1 withCredential:(id)arg2 noCredentialBehavior:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_openFileHandle;
-(void)setUseFileCache:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 wasUserRequested:(BOOL)arg2 ;
-(void)_createIdleTimer;
-(void)setWasUserRequested:(BOOL)arg1 ;
-(long long)expectedDataSize;
-(long long)receivedDataSize;
-(void)setUseShortTimeoutInterval:(BOOL)arg1 ;
-(void)setStartRunloopDescriptionString:(NSString *)arg1 ;
@end

