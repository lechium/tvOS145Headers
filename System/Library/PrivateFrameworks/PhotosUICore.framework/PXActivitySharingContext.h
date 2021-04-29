/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXDisplayAsset;
@class PHFetchResult, PXPhotosDataSource, NSArray, NSString;

@interface PXActivitySharingContext : NSObject {

	BOOL _wantsActionSheet;
	BOOL _excludeShareActivity;
	PHFetchResult* _assetCollectionsFetchResult;
	PXPhotosDataSource* _photosDataSource;
	NSArray* _activities;
	NSString* _title;
	NSString* _subtitle;
	id<PXDisplayAsset> _keyAsset;
	long long _sourceOrigin;

}

@property (nonatomic,copy,readonly) PHFetchResult * assetCollectionsFetchResult;              //@synthesize assetCollectionsFetchResult=_assetCollectionsFetchResult - In the implementation block
@property (nonatomic,readonly) PXPhotosDataSource * photosDataSource;                         //@synthesize photosDataSource=_photosDataSource - In the implementation block
@property (nonatomic,copy) NSArray * activities;                                              //@synthesize activities=_activities - In the implementation block
@property (assign,nonatomic) BOOL wantsActionSheet;                                           //@synthesize wantsActionSheet=_wantsActionSheet - In the implementation block
@property (assign,nonatomic) BOOL excludeShareActivity;                                       //@synthesize excludeShareActivity=_excludeShareActivity - In the implementation block
@property (nonatomic,copy) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) id<PXDisplayAsset> keyAsset;                                     //@synthesize keyAsset=_keyAsset - In the implementation block
@property (assign,nonatomic) long long sourceOrigin;                                          //@synthesize sourceOrigin=_sourceOrigin - In the implementation block
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)activities;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setActivities:(NSArray *)arg1 ;
-(id<PXDisplayAsset>)keyAsset;
-(void)setKeyAsset:(id<PXDisplayAsset>)arg1 ;
-(PHFetchResult *)assetCollectionsFetchResult;
-(PXPhotosDataSource *)photosDataSource;
-(id)initWithAssetCollection:(id)arg1 photosDataSource:(id)arg2 ;
-(id)initWithAssetCollection:(id)arg1 assetsDataSource:(id)arg2 ;
-(BOOL)wantsActionSheet;
-(void)setWantsActionSheet:(BOOL)arg1 ;
-(BOOL)excludeShareActivity;
-(void)setExcludeShareActivity:(BOOL)arg1 ;
-(long long)sourceOrigin;
-(void)setSourceOrigin:(long long)arg1 ;
@end

