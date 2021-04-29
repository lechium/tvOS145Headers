/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDDatabaseOperation.h>
#import <libobjc.A.dylib/CKDOperationPipelining.h>

@protocol OS_dispatch_group;
@class CKDRecordCache, NSObject, NSSet, NSArray, NSDictionary, CKDRecordFetchAggregator, NSMutableArray, NSString;

@interface CKDFetchBatchedRecordsOperation : CKDDatabaseOperation <CKDOperationPipelining> {

	BOOL _shouldFetchAssetContents;
	BOOL _fetchAllChanges;
	BOOL _forcePCSDecryptionAttempt;
	BOOL _shouldReportAllPerItemFailures;
	CKDRecordCache* _recordCache;
	NSObject*<OS_dispatch_group> _fetchRecordsGroup;
	NSSet* _desiredAssetKeys;
	NSArray* _recordZoneIDs;
	NSDictionary* _configurationsByRecordZoneID;
	unsigned long long _numRequestsSent;
	CKDRecordFetchAggregator* _recordFetcher;
	NSMutableArray* _requestInfos;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;

}

@property (nonatomic,retain) NSArray * recordZoneIDs;                                            //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * configurationsByRecordZoneID;                        //@synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID - In the implementation block
@property (assign,nonatomic) unsigned long long numRequestsSent;                                 //@synthesize numRequestsSent=_numRequestsSent - In the implementation block
@property (nonatomic,retain) CKDRecordFetchAggregator * recordFetcher;                           //@synthesize recordFetcher=_recordFetcher - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestInfos;                                      //@synthesize requestInfos=_requestInfos - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;              //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (assign,nonatomic) BOOL forcePCSDecryptionAttempt;                                     //@synthesize forcePCSDecryptionAttempt=_forcePCSDecryptionAttempt - In the implementation block
@property (assign,nonatomic) BOOL shouldReportAllPerItemFailures;                                //@synthesize shouldReportAllPerItemFailures=_shouldReportAllPerItemFailures - In the implementation block
@property (nonatomic,readonly) CKDRecordCache * recordCache;                                     //@synthesize recordCache=_recordCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchRecordsGroup;                     //@synthesize fetchRecordsGroup=_fetchRecordsGroup - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContents;                                      //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                               //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,retain) NSSet * desiredAssetKeys;                                           //@synthesize desiredAssetKeys=_desiredAssetKeys - In the implementation block
@property (nonatomic,readonly) NSString * pipeliningDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(id)relevantZoneIDs;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(BOOL)fetchAllChanges;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(NSDictionary *)configurationsByRecordZoneID;
-(void)setConfigurationsByRecordZoneID:(NSDictionary *)arg1 ;
-(BOOL)shouldFetchAssetContents;
-(void)setShouldFetchAssetContents:(BOOL)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(void)setShouldReportAllPerItemFailures:(BOOL)arg1 ;
-(BOOL)shouldReportAllPerItemFailures;
-(BOOL)forcePCSDecryptionAttempt;
-(void)setForcePCSDecryptionAttempt:(BOOL)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(NSString *)pipeliningDescription;
-(NSObject*<OS_dispatch_group>)fetchRecordsGroup;
-(CKDRecordFetchAggregator *)recordFetcher;
-(void)setDesiredAssetKeys:(NSSet *)arg1 ;
-(NSMutableArray *)requestInfos;
-(unsigned long long)numRequestsSent;
-(void)setNumRequestsSent:(unsigned long long)arg1 ;
-(void)setRecordFetcher:(CKDRecordFetchAggregator *)arg1 ;
-(void)setFetchRecordsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setRequestInfos:(NSMutableArray *)arg1 ;
-(NSSet *)desiredAssetKeys;
-(BOOL)supportsClearAssetEncryption;
-(CKDRecordCache *)recordCache;
-(void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2 ;
-(void)_noteChangedRecordWithID:(id)arg1 record:(id)arg2 error:(id)arg3 ;
-(id)_possiblyWrapError:(id)arg1 forRecordWithID:(id)arg2 withCode:(long long)arg3 format:(id)arg4 ;
-(void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2 ;
-(id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2 ;
-(id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1 ;
-(void)_sendFetchChangesRequestForZoneIDs:(id)arg1 withOptions:(id)arg2 previousRequestSchedulerInfo:(id)arg3 ;
-(void)_handleFetchChangesRequestFinishedWithSchedulerInfo:(id)arg1 ;
-(void)_noteOperationBeginning;
-(void)_noteOperationFinishedBlockEnd;
-(void)_handleChangedRecords:(id)arg1 perRequestSchedulerInfo:(id)arg2 ;
-(void)_handleRecordDelete:(id)arg1 recordType:(id)arg2 perRequestSchedulerInfo:(id)arg3 ;
-(void)_noteOperationEnding;
@end

