/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXActionManager.h>

@class PXAssetCollectionReference, PXDisplayTitleInfo, PHFetchResult, PXAssetReference, PXAssetsDataSourceManager;

@interface PXAssetCollectionActionManager : PXActionManager {

	PXAssetCollectionReference* _initialAssetCollectionReference;
	PXDisplayTitleInfo* _displayTitleInfo;
	PHFetchResult* _people;
	PXAssetReference* _dropTargetAssetReference;
	PXAssetsDataSourceManager* _assetsDataSourceManager;
	PHFetchResult* _assetsFetchResult;

}

@property (nonatomic,retain) PHFetchResult * people;                                               //@synthesize people=_people - In the implementation block
@property (nonatomic,retain) PXAssetReference * dropTargetAssetReference;                          //@synthesize dropTargetAssetReference=_dropTargetAssetReference - In the implementation block
@property (nonatomic,retain) PXAssetsDataSourceManager * assetsDataSourceManager;                  //@synthesize assetsDataSourceManager=_assetsDataSourceManager - In the implementation block
@property (nonatomic,retain) PHFetchResult * assetsFetchResult;                                    //@synthesize assetsFetchResult=_assetsFetchResult - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionReference * assetCollectionReference; 
@property (nonatomic,readonly) PXDisplayTitleInfo * displayTitleInfo;                              //@synthesize displayTitleInfo=_displayTitleInfo - In the implementation block
-(id)init;
-(PHFetchResult *)people;
-(void)setPeople:(PHFetchResult *)arg1 ;
-(PXAssetCollectionReference *)assetCollectionReference;
-(PXAssetReference *)dropTargetAssetReference;
-(PHFetchResult *)assetsFetchResult;
-(PXAssetsDataSourceManager *)assetsDataSourceManager;
-(void)setDropTargetAssetReference:(PXAssetReference *)arg1 ;
-(id)initWithAssetCollectionReference:(id)arg1 displayTitleInfo:(id)arg2 ;
-(BOOL)canPerformActionType:(id)arg1 assetCollectionReference:(id)arg2 ;
-(id)actionPerformerForActionType:(id)arg1 assetCollectionReference:(id)arg2 ;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 assetCollectionReference:(id)arg3 ;
-(id)systemImageNameForActionType:(id)arg1 assetCollectionReference:(id)arg2 ;
-(id)actionPerformerForActionType:(id)arg1 ;
-(BOOL)canPerformActionType:(id)arg1 ;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 ;
-(id)systemImageNameForActionType:(id)arg1 ;
-(id)initWithAssetCollection:(id)arg1 displayTitleInfo:(id)arg2 ;
-(id)displayTitleInfoForAssetCollection:(id)arg1 ;
-(PXDisplayTitleInfo *)displayTitleInfo;
-(void)setAssetsDataSourceManager:(PXAssetsDataSourceManager *)arg1 ;
-(void)setAssetsFetchResult:(PHFetchResult *)arg1 ;
@end

