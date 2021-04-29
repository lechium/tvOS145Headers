/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableAssetsDataSourceCountsController.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PXAssetsDataSourceManager, NSString;

@interface PXAssetsDataSourceCountsController : PXObservable <PXMutableAssetsDataSourceCountsController, PXAssetsDataSourceManagerObserver> {

	NSObject*<OS_dispatch_queue> _prepareCountsQueue;
	BOOL _isPreparingAssetTypeCounts;
	BOOL _hasUsableCounts;
	BOOL _waitingToPrepare;
	PXAssetsDataSourceManager* _assetsDataSourceManager;
	SCD_Struct_PX143 _counts;

}

@property (assign,nonatomic) BOOL isPreparingAssetTypeCounts;                                    //@synthesize isPreparingAssetTypeCounts=_isPreparingAssetTypeCounts - In the implementation block
@property (assign,nonatomic) BOOL hasUsableCounts;                                               //@synthesize hasUsableCounts=_hasUsableCounts - In the implementation block
@property (assign,nonatomic) BOOL waitingToPrepare;                                              //@synthesize waitingToPrepare=_waitingToPrepare - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSourceManager * assetsDataSourceManager;              //@synthesize assetsDataSourceManager=_assetsDataSourceManager - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX143 counts;                                          //@synthesize counts=_counts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(SCD_Struct_PX143)counts;
-(void)setCounts:(SCD_Struct_PX143)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXAssetsDataSourceManager *)assetsDataSourceManager;
-(void)assetsDataSourceManagerDidFinishBackgroundFetching:(id)arg1 ;
-(id)initWithAssetsDataSourceManager:(id)arg1 ;
-(void)_dataSourceManagerDidChange;
-(void)_updateCounts;
-(void)prepareCountsIfNeeded;
-(void)_prepareCounts;
-(void)_prepareFetchResults:(id)arg1 ;
-(void)_handlePreparationCompletion;
-(BOOL)isPreparingAssetTypeCounts;
-(void)setIsPreparingAssetTypeCounts:(BOOL)arg1 ;
-(BOOL)hasUsableCounts;
-(void)setHasUsableCounts:(BOOL)arg1 ;
-(BOOL)waitingToPrepare;
-(void)setWaitingToPrepare:(BOOL)arg1 ;
@end

