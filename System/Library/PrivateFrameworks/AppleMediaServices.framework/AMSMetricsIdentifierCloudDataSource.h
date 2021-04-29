/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AMSMetricsIdentifierCloudDataSourceDelegate;
@interface AMSMetricsIdentifierCloudDataSource : NSObject {

	id<AMSMetricsIdentifierCloudDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AMSMetricsIdentifierCloudDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_database;
+(id)_sharedQueue;
+(void)cleanupIdentifiers;
+(void)clearSyncState;
+(void)removeAllRecords;
-(id<AMSMetricsIdentifierCloudDataSourceDelegate>)delegate;
-(void)setDelegate:(id<AMSMetricsIdentifierCloudDataSourceDelegate>)arg1 ;
-(void)removeRecordWithIdentifier:(id)arg1 ;
-(id)_createRecordForIdentifierStore:(id)arg1 ;
-(id)_createRecordForIdentifier:(id)arg1 ;
-(id)_parseRecord:(id)arg1 error:(id*)arg2 ;
-(void)fetchModifiedRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)saveRecord:(id)arg1 isServerRecord:(BOOL)arg2 ;
@end

