/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray;

@interface CKDArchiveRecordsOperation : CKDDatabaseOperation {

	/*^block*/id _recordArchivedBlock;
	NSArray* _recordIDs;

}

@property (nonatomic,retain) NSArray * recordIDs;                                                              //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) id<CKArchiveRecordsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id recordArchivedBlock;                                                             //@synthesize recordArchivedBlock=_recordArchivedBlock - In the implementation block
-(void)main;
-(NSArray *)recordIDs;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(id)relevantZoneIDs;
-(id)recordArchivedBlock;
-(void)setRecordArchivedBlock:(id)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)_handleRecordArchived:(id)arg1 responseCode:(id)arg2 ;
@end

