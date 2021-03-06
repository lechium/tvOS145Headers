/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_os_transaction;
@class NSString, NSObject, SUCoreFSM, SUCorePolicy, SUCoreDescriptor, SUCoreMobileAsset, MAAsset;

@interface SUCoreScan : NSObject {

	BOOL _cancelingOperation;
	BOOL _downloadDocumentation;
	BOOL _slowReleaseScanPerformed;
	int _operation;
	int _operationSPIType;
	int _pendingMobileAssetRequests;
	NSString* _scanUUID;
	NSObject*<OS_dispatch_queue> _clientCompletionQueue;
	SUCoreFSM* _scanFSM;
	SUCorePolicy* _scanPolicy;
	SUCoreDescriptor* _activeDescriptor;
	NSString* _alternateAssetAudienceUUID;
	SUCoreMobileAsset* _maDocumentationControl;
	MAAsset* _primaryUpdateAsset;
	MAAsset* _secondaryUpdateAsset;
	SUCoreDescriptor* _slowReleasePrimaryDescriptor;
	SUCoreDescriptor* _slowReleaseSecondaryDescriptor;
	/*^block*/id _checkCompletion;
	/*^block*/id _checkMajorMinorCompletion;
	/*^block*/id _checkSlowReleaseCompletion;
	/*^block*/id _verifyCompletion;
	/*^block*/id _collectCompletion;
	/*^block*/id _locateCompletion;
	/*^block*/id _cancelCompletion;
	NSObject*<OS_os_transaction> _scanCheckTransaction;
	NSObject*<OS_os_transaction> _scanVerifyTransaction;
	NSObject*<OS_os_transaction> _scanCollectTransaction;
	NSObject*<OS_os_transaction> _scanLocateTransaction;
	NSObject*<OS_os_transaction> _scanCancelTransaction;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientCompletionQueue;              //@synthesize clientCompletionQueue=_clientCompletionQueue - In the implementation block
@property (assign,nonatomic) int operation;                                                     //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) int operationSPIType;                                              //@synthesize operationSPIType=_operationSPIType - In the implementation block
@property (assign,nonatomic) BOOL cancelingOperation;                                           //@synthesize cancelingOperation=_cancelingOperation - In the implementation block
@property (nonatomic,retain) SUCorePolicy * scanPolicy;                                         //@synthesize scanPolicy=_scanPolicy - In the implementation block
@property (nonatomic,retain) SUCoreDescriptor * activeDescriptor;                               //@synthesize activeDescriptor=_activeDescriptor - In the implementation block
@property (assign,nonatomic) BOOL downloadDocumentation;                                        //@synthesize downloadDocumentation=_downloadDocumentation - In the implementation block
@property (assign,nonatomic) int pendingMobileAssetRequests;                                    //@synthesize pendingMobileAssetRequests=_pendingMobileAssetRequests - In the implementation block
@property (nonatomic,retain) NSString * alternateAssetAudienceUUID;                             //@synthesize alternateAssetAudienceUUID=_alternateAssetAudienceUUID - In the implementation block
@property (nonatomic,retain) SUCoreMobileAsset * maDocumentationControl;                        //@synthesize maDocumentationControl=_maDocumentationControl - In the implementation block
@property (nonatomic,retain) MAAsset * primaryUpdateAsset;                                      //@synthesize primaryUpdateAsset=_primaryUpdateAsset - In the implementation block
@property (nonatomic,retain) MAAsset * secondaryUpdateAsset;                                    //@synthesize secondaryUpdateAsset=_secondaryUpdateAsset - In the implementation block
@property (nonatomic,retain) SUCoreDescriptor * slowReleasePrimaryDescriptor;                   //@synthesize slowReleasePrimaryDescriptor=_slowReleasePrimaryDescriptor - In the implementation block
@property (nonatomic,retain) SUCoreDescriptor * slowReleaseSecondaryDescriptor;                 //@synthesize slowReleaseSecondaryDescriptor=_slowReleaseSecondaryDescriptor - In the implementation block
@property (assign,nonatomic) BOOL slowReleaseScanPerformed;                                     //@synthesize slowReleaseScanPerformed=_slowReleaseScanPerformed - In the implementation block
@property (nonatomic,copy) id checkCompletion;                                                  //@synthesize checkCompletion=_checkCompletion - In the implementation block
@property (nonatomic,copy) id checkMajorMinorCompletion;                                        //@synthesize checkMajorMinorCompletion=_checkMajorMinorCompletion - In the implementation block
@property (nonatomic,copy) id checkSlowReleaseCompletion;                                       //@synthesize checkSlowReleaseCompletion=_checkSlowReleaseCompletion - In the implementation block
@property (nonatomic,copy) id verifyCompletion;                                                 //@synthesize verifyCompletion=_verifyCompletion - In the implementation block
@property (nonatomic,copy) id collectCompletion;                                                //@synthesize collectCompletion=_collectCompletion - In the implementation block
@property (nonatomic,copy) id locateCompletion;                                                 //@synthesize locateCompletion=_locateCompletion - In the implementation block
@property (nonatomic,copy) id cancelCompletion;                                                 //@synthesize cancelCompletion=_cancelCompletion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> scanCheckTransaction;                 //@synthesize scanCheckTransaction=_scanCheckTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> scanVerifyTransaction;                //@synthesize scanVerifyTransaction=_scanVerifyTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> scanCollectTransaction;               //@synthesize scanCollectTransaction=_scanCollectTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> scanLocateTransaction;                //@synthesize scanLocateTransaction=_scanLocateTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> scanCancelTransaction;                //@synthesize scanCancelTransaction=_scanCancelTransaction - In the implementation block
@property (nonatomic,readonly) SUCoreFSM * scanFSM;                                             //@synthesize scanFSM=_scanFSM - In the implementation block
@property (nonatomic,readonly) NSString * scanUUID;                                             //@synthesize scanUUID=_scanUUID - In the implementation block
+(id)_generateStateTable;
-(id)description;
-(int)operation;
-(void)setOperation:(int)arg1 ;
-(id)_operationName;
-(id)initWithUUID:(id)arg1 ;
-(SUCoreFSM *)scanFSM;
-(long long)actionDownloadSUCatalog:(id*)arg1 ;
-(long long)actionQuerySUMetadata:(id*)arg1 ;
-(long long)actionDownloadDocCatalog:(id*)arg1 ;
-(long long)actionQueryDocMetadata:(id*)arg1 ;
-(long long)actionDownloadDocAsset:(id*)arg1 ;
-(long long)actionAlterDocDownloadConfig:(id*)arg1 ;
-(long long)actionRemoveDocAsset:(id*)arg1 ;
-(long long)actionScanCompleteNoUpdate:(id*)arg1 ;
-(long long)actionScanSuccess:(id)arg1 error:(id*)arg2 ;
-(long long)actionScanFailed:(id)arg1 error:(id*)arg2 ;
-(long long)actionCancelSUCatalogDownload:(id*)arg1 ;
-(long long)actionCancelDocCatalogDownload:(id*)arg1 ;
-(long long)actionCancelSuccess:(id*)arg1 ;
-(long long)actionAfterAvailCancelSuccess:(id)arg1 error:(id*)arg2 ;
-(long long)actionAfterFailCancelSuccess:(id)arg1 error:(id*)arg2 ;
-(long long)actionCancelRemoveFailed:(id)arg1 error:(id*)arg2 ;
-(long long)actionCheckCancelDone:(id*)arg1 ;
-(long long)actionAfterFailCheckCancelDone:(id)arg1 error:(id*)arg2 ;
-(long long)actionCancelDone:(id*)arg1 ;
-(long long)a_SimCatalogDownloadSuccess:(id*)arg1 ;
-(long long)a_SimQueryMetadataUpdateAvailable:(id*)arg1 ;
-(long long)actionUnknownAction:(id)arg1 error:(id*)arg2 ;
-(SUCorePolicy *)scanPolicy;
-(long long)_downloadCatalog:(id)arg1 withIdentifier:(id)arg2 ;
-(long long)_decrementMobileAssetPending:(id)arg1 ;
-(NSString *)alternateAssetAudienceUUID;
-(void)_incrementMobileAssetPending:(id)arg1 ;
-(void)_trackScanBegin:(id)arg1 withIdentifier:(id)arg2 ;
-(void)_trackScanEnd:(id)arg1 withIdentifier:(id)arg2 withResult:(long long)arg3 withError:(id)arg4 ;
-(void)_filterSUQueryResults:(id)arg1 ;
-(SUCoreDescriptor *)activeDescriptor;
-(void)_filterDocQueryResults:(id)arg1 ;
-(NSString *)scanUUID;
-(void)setMaDocumentationControl:(SUCoreMobileAsset *)arg1 ;
-(SUCoreMobileAsset *)maDocumentationControl;
-(void)_scanCompleteFoundPrimary:(id)arg1 foundSecondary:(id)arg2 majorPrimary:(id)arg3 majorSecondary:(id)arg4 minorPrimary:(id)arg5 minorSecondary:(id)arg6 clearingOperation:(BOOL)arg7 error:(id)arg8 ;
-(MAAsset *)secondaryUpdateAsset;
-(MAAsset *)primaryUpdateAsset;
-(void)_invalidOperation:(id)arg1 ;
-(BOOL)cancelingOperation;
-(void)_cancelCompleteWithError:(id)arg1 ;
-(int)pendingMobileAssetRequests;
-(id)_simDescriptorAttributes;
-(id)initWithUUID:(id)arg1 withCompletionQueue:(id)arg2 ;
-(void)_trackScanBegin:(id)arg1 ;
-(void)_checkEndComplete:(/*^block*/id)arg1 scanPolicy:(id)arg2 primary:(id)arg3 secondary:(id)arg4 error:(id)arg5 clearingTransaction:(BOOL)arg6 ;
-(NSObject*<OS_os_transaction>)scanCheckTransaction;
-(void)setScanCheckTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setScanPolicy:(SUCorePolicy *)arg1 ;
-(void)setCheckCompletion:(id)arg1 ;
-(void)setOperationSPIType:(int)arg1 ;
-(void)_checkMajorMinorEndComplete:(/*^block*/id)arg1 scanPolicy:(id)arg2 majorPrimary:(id)arg3 majorSecondary:(id)arg4 minorPrimary:(id)arg5 minorSecondary:(id)arg6 error:(id)arg7 clearingTransaction:(BOOL)arg8 ;
-(void)setCheckMajorMinorCompletion:(id)arg1 ;
-(void)_checkSlowReleaseEndComplete:(/*^block*/id)arg1 scanPolicy:(id)arg2 primary:(id)arg3 secondary:(id)arg4 error:(id)arg5 clearingTransaction:(BOOL)arg6 ;
-(void)setCheckSlowReleaseCompletion:(id)arg1 ;
-(void)_verifyEndComplete:(/*^block*/id)arg1 scanPolicy:(id)arg2 active:(id)arg3 primary:(id)arg4 secondary:(id)arg5 error:(id)arg6 clearingTransaction:(BOOL)arg7 ;
-(NSObject*<OS_os_transaction>)scanVerifyTransaction;
-(void)setScanVerifyTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setActiveDescriptor:(SUCoreDescriptor *)arg1 ;
-(void)setVerifyCompletion:(id)arg1 ;
-(void)_collectEndComplete:(/*^block*/id)arg1 scanPolicy:(id)arg2 active:(id)arg3 error:(id)arg4 clearingTransaction:(BOOL)arg5 ;
-(NSObject*<OS_os_transaction>)scanCollectTransaction;
-(void)setScanCollectTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setDownloadDocumentation:(BOOL)arg1 ;
-(void)setCollectCompletion:(id)arg1 ;
-(void)_locateEndComplete:(/*^block*/id)arg1 scanPolicy:(id)arg2 primary:(id)arg3 secondary:(id)arg4 error:(id)arg5 clearingTransaction:(BOOL)arg6 ;
-(NSObject*<OS_os_transaction>)scanLocateTransaction;
-(void)setScanLocateTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setLocateCompletion:(id)arg1 ;
-(void)_cancelEndComplete:(/*^block*/id)arg1 error:(id)arg2 clearingTransaction:(BOOL)arg3 ;
-(NSObject*<OS_os_transaction>)scanCancelTransaction;
-(void)setScanCancelTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setCancelingOperation:(BOOL)arg1 ;
-(void)setCancelCompletion:(id)arg1 ;
-(int)operationSPIType;
-(id)checkCompletion;
-(id)checkMajorMinorCompletion;
-(BOOL)_decideAndProcessSlowReleaseUpdateFoundPrimary:(id)arg1 foundSecondary:(id)arg2 error:(id)arg3 ;
-(id)verifyCompletion;
-(id)collectCompletion;
-(void)setPrimaryUpdateAsset:(MAAsset *)arg1 ;
-(void)setSecondaryUpdateAsset:(MAAsset *)arg1 ;
-(id)locateCompletion;
-(void)_clearCurrentOperation;
-(id)cancelCompletion;
-(void)_operationCompleting:(id)arg1 error:(id)arg2 clearingTransaction:(BOOL)arg3 ;
-(NSObject*<OS_dispatch_queue>)clientCompletionQueue;
-(void)_trackScanEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3 ;
-(BOOL)slowReleaseScanPerformed;
-(BOOL)_shouldPerformAlternateScanFromFoundDescriptor:(id)arg1 policy:(id)arg2 ;
-(void)setAlternateAssetAudienceUUID:(NSString *)arg1 ;
-(void)setSlowReleasePrimaryDescriptor:(SUCoreDescriptor *)arg1 ;
-(void)setSlowReleaseSecondaryDescriptor:(SUCoreDescriptor *)arg1 ;
-(void)setSlowReleaseScanPerformed:(BOOL)arg1 ;
-(id)checkSlowReleaseCompletion;
-(SUCoreDescriptor *)slowReleasePrimaryDescriptor;
-(SUCoreDescriptor *)slowReleaseSecondaryDescriptor;
-(void)setPendingMobileAssetRequests:(int)arg1 ;
-(void)_filterSUQueryResultsForSPITypeSingleFromQuery:(id)arg1 ;
-(void)_filterSUQueryResultsForSPITypeMajorMinorFromQuery:(id)arg1 ;
-(BOOL)downloadDocumentation;
-(long long)performAction:(id)arg1 onEvent:(id)arg2 inState:(id)arg3 withInfo:(id)arg4 nextState:(id)arg5 error:(id*)arg6 ;
-(void)checkForAvailableUpdateWithPolicy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkForAvailableMajorMinorUpdatesWithPolicy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkForAvailableSlowReleaseUpdatesWithPolicy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)verifyLatestAvailableWithPolicy:(id)arg1 descriptor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)collectDocumentationMetadataWithPolicy:(id)arg1 descriptor:(id)arg2 downloadDocumentation:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)locateAvailableUpdateWithPolicy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)alterCurrentPolicy:(id)arg1 ;
-(void)cancelCurrentScan:(/*^block*/id)arg1 ;
@end

