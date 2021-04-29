/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKPublishAssetsOperationCallbacks.h>

@class NSDictionary, NSArray, NSMutableDictionary, CKPublishAssetsOperationInfo;

@interface CKPublishAssetsOperation : CKDatabaseOperation <CKPublishAssetsOperationCallbacks> {

	/*^block*/id _assetPublishedBlock;
	/*^block*/id _publishAssetCompletionBlock;
	NSDictionary* _fileNamesByAssetFieldNames;
	unsigned long long _requestedTTL;
	unsigned long long _URLOptions;
	NSArray* _recordIDs;
	NSMutableDictionary* _perItemErrorsByRecordID;

}

@property (nonatomic,retain) NSArray * recordIDs;                                                               //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * perItemErrorsByRecordID;                                     //@synthesize perItemErrorsByRecordID=_perItemErrorsByRecordID - In the implementation block
@property (nonatomic,readonly) id<CKPublishAssetsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKPublishAssetsOperationInfo * operationInfo; 
@property (nonatomic,copy) NSDictionary * fileNamesByAssetFieldNames;                                           //@synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames - In the implementation block
@property (assign,nonatomic) unsigned long long requestedTTL;                                                   //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) unsigned long long URLOptions;                                                     //@synthesize URLOptions=_URLOptions - In the implementation block
@property (nonatomic,copy) id assetPublishedBlock;                                                              //@synthesize assetPublishedBlock=_assetPublishedBlock - In the implementation block
@property (nonatomic,copy) id publishAssetCompletionBlock;                                                      //@synthesize publishAssetCompletionBlock=_publishAssetCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(NSArray *)recordIDs;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(NSMutableDictionary *)perItemErrorsByRecordID;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)setPerItemErrorsByRecordID:(NSMutableDictionary *)arg1 ;
-(id)initWithRecordIDs:(id)arg1 ;
-(NSDictionary *)fileNamesByAssetFieldNames;
-(void)setFileNamesByAssetFieldNames:(NSDictionary *)arg1 ;
-(unsigned long long)requestedTTL;
-(void)setRequestedTTL:(unsigned long long)arg1 ;
-(unsigned long long)URLOptions;
-(void)setURLOptions:(unsigned long long)arg1 ;
-(id)assetPublishedBlock;
-(id)publishAssetCompletionBlock;
-(void)setPublishAssetCompletionBlock:(id)arg1 ;
-(void)setAssetPublishedBlock:(id)arg1 ;
-(void)handleAssetPublishCompletionForRecordID:(id)arg1 publishedAsset:(id)arg2 recordKey:(id)arg3 error:(id)arg4 ;
@end

