/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDCloudGroup, HMDCloudChangeTree, NSMutableArray, HMDCloudManagerMetricsDispatcher, NSArray;

@interface HMDCloudGroupChange : HMFObject {

	BOOL _temporaryCache;
	BOOL _decryptionFailed;
	BOOL _encryptionFailed;
	BOOL _controllerIdentifierChanged;
	HMDCloudGroup* _cloudGroup;
	HMDCloudChangeTree* _cloudChangeTree;
	NSMutableArray* _cloudChanges;
	NSMutableArray* _processingCloudChanges;
	NSMutableArray* _processedCloudChanges;
	HMDCloudManagerMetricsDispatcher* _metricsDispatcher;

}

@property (nonatomic,__weak,readonly) HMDCloudGroup * cloudGroup;                                //@synthesize cloudGroup=_cloudGroup - In the implementation block
@property (assign,nonatomic) BOOL decryptionFailed;                                              //@synthesize decryptionFailed=_decryptionFailed - In the implementation block
@property (assign,nonatomic) BOOL encryptionFailed;                                              //@synthesize encryptionFailed=_encryptionFailed - In the implementation block
@property (assign,nonatomic) BOOL controllerIdentifierChanged;                                   //@synthesize controllerIdentifierChanged=_controllerIdentifierChanged - In the implementation block
@property (nonatomic,retain) HMDCloudChangeTree * cloudChangeTree;                               //@synthesize cloudChangeTree=_cloudChangeTree - In the implementation block
@property (nonatomic,retain) NSMutableArray * cloudChanges;                                      //@synthesize cloudChanges=_cloudChanges - In the implementation block
@property (nonatomic,retain) NSMutableArray * processingCloudChanges;                            //@synthesize processingCloudChanges=_processingCloudChanges - In the implementation block
@property (nonatomic,retain) NSMutableArray * processedCloudChanges;                             //@synthesize processedCloudChanges=_processedCloudChanges - In the implementation block
@property (getter=isRootRecordRequired,nonatomic,readonly) BOOL rootRecordRequired; 
@property (readonly) HMDCloudManagerMetricsDispatcher * metricsDispatcher;                       //@synthesize metricsDispatcher=_metricsDispatcher - In the implementation block
@property (nonatomic,readonly) NSArray * allTransactionStoreRowIDs; 
@property (nonatomic,readonly) NSArray * processedTransactionStoreRowIDs; 
@property (getter=isTemporaryCache,nonatomic,readonly) BOOL temporaryCache;                      //@synthesize temporaryCache=_temporaryCache - In the implementation block
@property (nonatomic,readonly) BOOL hasValidChanges; 
@property (readonly) BOOL doRecordsExistInCache; 
@property (nonatomic,readonly) NSArray * objectChanges; 
+(id)shortDescription;
-(id)description;
-(id)init;
-(id)shortDescription;
-(HMDCloudManagerMetricsDispatcher *)metricsDispatcher;
-(NSArray *)allTransactionStoreRowIDs;
-(NSMutableArray *)cloudChanges;
-(BOOL)hasValidChanges;
-(BOOL)decryptionFailed;
-(id)initWithGroup:(id)arg1 temporaryCache:(BOOL)arg2 metricsDispatcher:(id)arg3 ;
-(HMDCloudGroup *)cloudGroup;
-(NSMutableArray *)processingCloudChanges;
-(NSMutableArray *)processedCloudChanges;
-(HMDCloudChangeTree *)cloudChangeTree;
-(id)changeWithObjectID:(id)arg1 ;
-(id)cachedCloudRecordWithObjectID:(id)arg1 ;
-(id)cloudRecordWithObjectID:(id)arg1 ;
-(BOOL)doRecordsExistInCache;
-(id)changeWithRecordName:(id)arg1 ;
-(id)cloudRecordWithName:(id)arg1 ;
-(BOOL)isTemporaryCache;
-(BOOL)isRootRecord:(id)arg1 ;
-(void)setDecryptionFailed:(BOOL)arg1 ;
-(void)_addChangeWithDeletedCloudRecord:(id)arg1 ;
-(void)_loadTreeWithRecordMapping:(id)arg1 ;
-(void)setCloudChanges:(NSMutableArray *)arg1 ;
-(void)setProcessedCloudChanges:(NSMutableArray *)arg1 ;
-(void)_initializeCloudChanges;
-(void)loadCloudRecordsFromCache:(/*^block*/id)arg1 ;
-(void)loadCloudChangeTreeFromCache:(/*^block*/id)arg1 ;
-(id)rootRecordModelObject;
-(void)addChange:(id)arg1 setAsProcessing:(BOOL)arg2 ;
-(BOOL)isRootRecordRequired;
-(void)addRootRecordChange;
-(void)_removeChange:(id)arg1 ;
-(void)collectRecordsForBatch;
-(BOOL)encryptionFailed;
-(void)setEncryptionFailed:(BOOL)arg1 ;
-(void)setAsProcessedChange:(id)arg1 ;
-(BOOL)isRootRecordName:(id)arg1 ;
-(id)initWithGroup:(id)arg1 temporaryCache:(BOOL)arg2 ;
-(NSArray *)processedTransactionStoreRowIDs;
-(void)cachedCloudRecordWithObjectID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addChangeWithObjectChange:(id)arg1 ;
-(void)addChangeWithRecord:(id)arg1 ;
-(void)addChangeWithDeletedRecordID:(id)arg1 ;
-(void)loadCloudRecordsAndDetermineDeletesFromCache:(/*^block*/id)arg1 ;
-(BOOL)moreChangesToProcess;
-(void)setAllChangedAsProcessed;
-(void)removeChangeWithObjectID:(id)arg1 ;
-(void)fetchBatchToUpload:(/*^block*/id)arg1 ;
-(void)setSaveAsProcessedWithRecord:(id)arg1 ;
-(void)resetRecordWithRecordID:(id)arg1 ;
-(void)setDeleteAsProcessedWithRecordID:(id)arg1 ;
-(void)flushAllChangesToCache;
-(NSArray *)objectChanges;
-(BOOL)controllerIdentifierChanged;
-(void)setControllerIdentifierChanged:(BOOL)arg1 ;
-(void)setCloudChangeTree:(HMDCloudChangeTree *)arg1 ;
-(void)setProcessingCloudChanges:(NSMutableArray *)arg1 ;
@end

