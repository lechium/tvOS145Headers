/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_group;
@class CKDDecryptRecordsOperation, NSArray, NSString, NSObject;

@interface CKDFetchRecordVersionsOperation : CKDDatabaseOperation {

	CKDDecryptRecordsOperation* _decryptOperation;
	BOOL _isDeleted;
	BOOL _shouldFetchAssetContent;
	/*^block*/id _recordVersionFetchedBlock;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	NSString* _minimumVersionETag;
	NSObject*<OS_dispatch_group> _fetchVersionsGroup;

}

@property (nonatomic,retain) NSArray * recordIDs;                                                                   //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSArray * desiredKeys;                                                                 //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSString * minimumVersionETag;                                                         //@synthesize minimumVersionETag=_minimumVersionETag - In the implementation block
@property (assign,nonatomic) BOOL isDeleted;                                                                        //@synthesize isDeleted=_isDeleted - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                                                          //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchVersionsGroup;                                       //@synthesize fetchVersionsGroup=_fetchVersionsGroup - In the implementation block
@property (nonatomic,readonly) CKDDecryptRecordsOperation * recordDecryptOperation; 
@property (nonatomic,retain) id<CKFetchRecordVersionsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id recordVersionFetchedBlock;                                                            //@synthesize recordVersionFetchedBlock=_recordVersionFetchedBlock - In the implementation block
-(void)main;
-(BOOL)isDeleted;
-(NSArray *)recordIDs;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(id)relevantZoneIDs;
-(BOOL)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(NSArray *)desiredKeys;
-(NSString *)minimumVersionETag;
-(void)setMinimumVersionETag:(NSString *)arg1 ;
-(void)setIsDeleted:(BOOL)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setRecordVersionFetchedBlock:(id)arg1 ;
-(CKDDecryptRecordsOperation *)recordDecryptOperation;
-(BOOL)hasDecryptOperation;
-(void)setFetchVersionsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)fetchVersionsGroup;
-(id)recordVersionFetchedBlock;
-(void)_handleRecordVersionsFetchedForID:(id)arg1 isDeleted:(BOOL)arg2 versions:(id)arg3 responseCode:(id)arg4 ;
@end

