/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleServiceToolkit/AppleServiceToolkit-Structs.h>
#import <libobjc.A.dylib/ASTConnectionManagerDelegate.h>

@protocol ASTSessionDelegate, ASTConnectionManager, OS_dispatch_queue, OS_dispatch_semaphore;
@class ASTContext, NSString, NSObject, NSMutableDictionary, ASTProfileResult, ASTRequest, ASTAuthInfoResult, NSError;

@interface ASTSession : NSObject <ASTConnectionManagerDelegate> {

	BOOL _shouldContinueRequestLoop;
	BOOL _shouldUnenroll;
	BOOL _shouldAbort;
	id<ASTSessionDelegate> _delegate;
	unsigned long long _allowCellularSizeThreshold;
	ASTContext* _context;
	NSString* _sessionId;
	id<ASTConnectionManager> _connectionManager;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _clientStatusQueue;
	long long _retryCounter;
	long long _backoffCounter;
	NSObject*<OS_dispatch_semaphore> _backoffTimer;
	NSMutableDictionary* _runningTests;
	NSMutableDictionary* _pendingTestResults;
	ASTProfileResult* _pendingProfileResult;
	NSObject*<OS_dispatch_semaphore> _pendingProfileSemaphore;
	ASTRequest* _pendingPropertiesResult;
	NSObject*<OS_dispatch_semaphore> _pendingPropertiesSemaphore;
	ASTAuthInfoResult* _pendingAuthInfoResult;
	NSObject*<OS_dispatch_semaphore> _pendingAuthInfoSemaphore;
	long long _phase;
	/*^block*/id _sessionTeardownCompletion;
	NSError* _clientStatusLoopError;
	/*^block*/id _payloadSigner;
	/*^block*/id _fileSigner;

}

@property (nonatomic,retain) NSString * sessionId;                                                     //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,retain) id<ASTConnectionManager> connectionManager;                               //@synthesize connectionManager=_connectionManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                               //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientStatusQueue;                           //@synthesize clientStatusQueue=_clientStatusQueue - In the implementation block
@property (assign,nonatomic) long long retryCounter;                                                   //@synthesize retryCounter=_retryCounter - In the implementation block
@property (assign,nonatomic) long long backoffCounter;                                                 //@synthesize backoffCounter=_backoffCounter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> backoffTimer;                            //@synthesize backoffTimer=_backoffTimer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * runningTests;                                       //@synthesize runningTests=_runningTests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingTestResults;                                 //@synthesize pendingTestResults=_pendingTestResults - In the implementation block
@property (nonatomic,retain) ASTProfileResult * pendingProfileResult;                                  //@synthesize pendingProfileResult=_pendingProfileResult - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> pendingProfileSemaphore;                 //@synthesize pendingProfileSemaphore=_pendingProfileSemaphore - In the implementation block
@property (nonatomic,retain) ASTRequest * pendingPropertiesResult;                                     //@synthesize pendingPropertiesResult=_pendingPropertiesResult - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> pendingPropertiesSemaphore;              //@synthesize pendingPropertiesSemaphore=_pendingPropertiesSemaphore - In the implementation block
@property (nonatomic,retain) ASTAuthInfoResult * pendingAuthInfoResult;                                //@synthesize pendingAuthInfoResult=_pendingAuthInfoResult - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> pendingAuthInfoSemaphore;                //@synthesize pendingAuthInfoSemaphore=_pendingAuthInfoSemaphore - In the implementation block
@property (assign,nonatomic) long long phase;                                                          //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) BOOL shouldContinueRequestLoop;                                           //@synthesize shouldContinueRequestLoop=_shouldContinueRequestLoop - In the implementation block
@property (assign,nonatomic) BOOL shouldUnenroll;                                                      //@synthesize shouldUnenroll=_shouldUnenroll - In the implementation block
@property (assign,nonatomic) BOOL shouldAbort;                                                         //@synthesize shouldAbort=_shouldAbort - In the implementation block
@property (nonatomic,copy) id sessionTeardownCompletion;                                               //@synthesize sessionTeardownCompletion=_sessionTeardownCompletion - In the implementation block
@property (nonatomic,retain) NSError * clientStatusLoopError;                                          //@synthesize clientStatusLoopError=_clientStatusLoopError - In the implementation block
@property (nonatomic,readonly) id payloadSigner;                                                       //@synthesize payloadSigner=_payloadSigner - In the implementation block
@property (nonatomic,readonly) id fileSigner;                                                          //@synthesize fileSigner=_fileSigner - In the implementation block
@property (assign,nonatomic,__weak) id<ASTSessionDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long allowCellularSizeThreshold;                            //@synthesize allowCellularSizeThreshold=_allowCellularSizeThreshold - In the implementation block
@property (nonatomic,copy,readonly) ASTContext * context;                                              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)auditToken:(SCD_Struct_AS1*)arg1 hasEntitlement:(id)arg2 ;
+(void)sessionExistsForSerialNumbers:(id)arg1 ticketNumber:(id)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)sessionExistsForIdentities:(id)arg1 ticketNumber:(id)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
+(BOOL)currentProcessHasEntitlement;
+(void)requestAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_fetchAsset:(id)arg1 sessionId:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)_destinationURLForAsset:(id)arg1 sessionId:(id)arg2 ;
+(BOOL)shouldEvictCachedAssetForName:(id)arg1 ;
+(id)_readContentsOfFileHandle:(id)arg1 error:(id*)arg2 ;
+(void)_downloadAsset:(id)arg1 sessionId:(id)arg2 fileHandle:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)_destinationAssetDirectoryForSessionId:(id)arg1 ;
+(id)sessionWithSerialNumber:(id)arg1 ;
+(id)sessionWithIdentity:(id)arg1 ;
+(id)sessionWithContext:(id)arg1 ;
+(void)sessionExistsForSerialNumbers:(id)arg1 ticketNumber:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)sessionExistsForIdentities:(id)arg1 ticketNumber:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(id<ASTSessionDelegate>)delegate;
-(void)setDelegate:(id<ASTSessionDelegate>)arg1 ;
-(void)start;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)_setup;
-(ASTContext *)context;
-(void)end;
-(id)initWithIdentity:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id<ASTConnectionManager>)connectionManager;
-(BOOL)_profile;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(void)_teardown;
-(id)_sendRequest:(id)arg1 ;
-(long long)phase;
-(void)setPhase:(long long)arg1 ;
-(void)setRunningTests:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)runningTests;
-(void)_archive;
-(id)_abort;
-(id)_idle;
-(void)_updateProgress:(id)arg1 ;
-(void)idle;
-(void)setConnectionManager:(id<ASTConnectionManager>)arg1 ;
-(void)updateAction:(id)arg1 ;
-(long long)backoffCounter;
-(void)setBackoffCounter:(long long)arg1 ;
-(void)setBackoffTimer:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)backoffTimer;
-(id)initWithSerialNumber:(id)arg1 ;
-(unsigned long long)allowCellularSizeThreshold;
-(id)_signPayload:(id)arg1 error:(id*)arg2 ;
-(id)_signFile:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)clientStatusQueue;
-(void)setClientStatusLoopError:(NSError *)arg1 ;
-(NSError *)clientStatusLoopError;
-(BOOL)_authInfoIfNecessary;
-(void)_startClientStatusLoop;
-(void)setShouldAbort:(BOOL)arg1 ;
-(void)_endAndUnenrollIfNecessary:(BOOL)arg1 ;
-(void)setSessionTeardownCompletion:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)pendingProfileSemaphore;
-(void)setPendingProfileResult:(ASTProfileResult *)arg1 ;
-(void)setPendingProfileSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)pendingPropertiesSemaphore;
-(void)setPendingPropertiesResult:(ASTRequest *)arg1 ;
-(void)setPendingPropertiesSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)pendingAuthInfoSemaphore;
-(void)setPendingAuthInfoResult:(ASTAuthInfoResult *)arg1 ;
-(void)setPendingAuthInfoSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setShouldUnenroll:(BOOL)arg1 ;
-(void)setShouldContinueRequestLoop:(BOOL)arg1 ;
-(void)_cancelRunningTests;
-(BOOL)shouldContinueRequestLoop;
-(BOOL)shouldAbort;
-(id)_clientAbort;
-(id)_retryRequest;
-(BOOL)_validateCommand:(long long)arg1 clientStatus:(long long)arg2 ;
-(void)setRetryCounter:(long long)arg1 ;
-(id)_updateUIWithData:(id)arg1 ;
-(id)_startNewTest:(id)arg1 data:(id)arg2 ;
-(id)_sendTestResults:(id)arg1 ;
-(id)_updateSessionSettingsWithData:(id)arg1 ;
-(id)_sendPropertiesWithData:(id)arg1 ;
-(id)_continueWithLastRequest:(id)arg1 ;
-(void)_reboot;
-(void)_protocolError;
-(BOOL)shouldUnenroll;
-(id)payloadSigner;
-(BOOL)_shouldAllowCellularForSealedSealablePayload:(id)arg1 ;
-(void)setPendingTestResults:(NSMutableDictionary *)arg1 ;
-(void)_cancelControlExecution;
-(void)_removeDownloadedAssets;
-(id)sessionTeardownCompletion;
-(ASTAuthInfoResult *)pendingAuthInfoResult;
-(ASTProfileResult *)pendingProfileResult;
-(NSMutableDictionary *)pendingTestResults;
-(void)_backoff;
-(void)requestAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_shouldAllowCellularForSealedTestResult:(id)arg1 ;
-(ASTRequest *)pendingPropertiesResult;
-(void)_abortRunningProcedures;
-(void)_cancelSendingTestResults;
-(id)fileSigner;
-(long long)retryCounter;
-(void)connectionManagerRequestPaused:(id)arg1 ;
-(void)connectionManagerRequestResumed:(id)arg1 ;
-(void)connectionManager:(id)arg1 pausedSendingResultForTest:(id)arg2 reason:(long long)arg3 ;
-(void)connectionManager:(id)arg1 resumedSendingResultForTest:(id)arg2 ;
-(BOOL)sendAuthInfoResult:(id)arg1 error:(id*)arg2 ;
-(BOOL)sendProfileResult:(id)arg1 error:(id*)arg2 ;
-(BOOL)sendTestResult:(id)arg1 error:(id*)arg2 ;
-(void)setAllowCellularSizeThreshold:(unsigned long long)arg1 ;
-(void)setClientStatusQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

