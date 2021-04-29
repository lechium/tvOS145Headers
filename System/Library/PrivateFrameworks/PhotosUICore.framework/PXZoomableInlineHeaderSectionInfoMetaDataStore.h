/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXAssetsDataSource;

@interface PXZoomableInlineHeaderSectionInfoMetaDataStore : NSObject {

	/*function pointer*/void** _sectionInfosByLevel[2];
	long long _sectionsCountByLevel[2];
	long long _sectionsCapacityByLevel[2];
	PXAssetsDataSource* _dataSource;

}

@property (nonatomic,readonly) PXAssetsDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id)description;
-(void)dealloc;
-(PXAssetsDataSource *)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(void)addSectionInfo:(SCD_Struct_PX98)arg1 forLevel:(unsigned long long)arg2 ;
-(void)resetSectionInfos;
-(const SCD_Struct_PX98*)sectionInfosForLevel:(unsigned long long)arg1 ;
-(long long)numberOfSectionInfosForLevel:(unsigned long long)arg1 ;
-(BOOL)updateWithDataSourceAfterChanges:(id)arg1 changeDetails:(id)arg2 ;
-(void)_resizeStorageIfNeededForNumberOfSections:(long long)arg1 level:(unsigned long long)arg2 ;
@end
