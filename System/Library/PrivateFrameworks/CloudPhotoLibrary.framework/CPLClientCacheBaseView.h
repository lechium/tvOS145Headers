/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLRecordStorageView.h>

@protocol CPLEngineIDMapping;
@class CPLEngineStore, CPLEngineCloudCache;

@interface CPLClientCacheBaseView : CPLRecordStorageView {

	CPLEngineStore* _store;
	CPLEngineCloudCache* _cloudCache;
	id<CPLEngineIDMapping> _idMapping;

}

@property (nonatomic,readonly) CPLEngineStore * store;                        //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) CPLEngineCloudCache * cloudCache;              //@synthesize cloudCache=_cloudCache - In the implementation block
@property (nonatomic,readonly) id<CPLEngineIDMapping> idMapping;              //@synthesize idMapping=_idMapping - In the implementation block
-(id)description;
-(id)initWithStore:(id)arg1 ;
-(CPLEngineStore *)store;
-(id<CPLEngineIDMapping>)idMapping;
-(CPLEngineCloudCache *)cloudCache;
-(BOOL)hasRecordWithScopedIdentifier:(id)arg1 ;
-(unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1 ;
-(id)recordViewWithScopedIdentifier:(id)arg1 ;
-(id)recordViewsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
@end

