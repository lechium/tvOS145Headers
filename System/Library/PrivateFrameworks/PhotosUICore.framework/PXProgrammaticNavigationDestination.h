/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXDisplayAsset, PXDisplayAssetCollection, PXDisplayCollectionList, PXDisplayCollection;
@class NSArray, NSString;

@interface PXProgrammaticNavigationDestination : NSObject {

	id<PXDisplayAsset> _asset;
	id<PXDisplayAssetCollection> _assetCollection;
	id<PXDisplayCollectionList> _collectionList;
	id<PXDisplayCollection> _collection;
	NSArray* _collectionHierarchy;
	long long _type;
	long long _revealMode;
	NSString* _assetUUID;
	NSString* _assetLocalIdentifier;
	NSString* _assetCollectionUUID;
	long long _assetCollectionType;
	long long _assetCollectionSubtype;
	NSString* _collectionListUUID;
	long long _collectionListType;
	long long _collectionListSubtype;
	NSString* _importSourceUUID;
	PXProgrammaticNavigationDestination* _sidebarBackNavigationRootDestination;
	NSString* _keyboardInput;

}

@property (nonatomic,readonly) long long type;                                                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long revealMode;                                                                         //@synthesize revealMode=_revealMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetUUID;                                                                    //@synthesize assetUUID=_assetUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetLocalIdentifier;                                                         //@synthesize assetLocalIdentifier=_assetLocalIdentifier - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> asset;                                                                     //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetCollectionUUID;                                                          //@synthesize assetCollectionUUID=_assetCollectionUUID - In the implementation block
@property (nonatomic,readonly) long long assetCollectionType;                                                                //@synthesize assetCollectionType=_assetCollectionType - In the implementation block
@property (nonatomic,readonly) long long assetCollectionSubtype;                                                             //@synthesize assetCollectionSubtype=_assetCollectionSubtype - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetCollection> assetCollection;                                                 //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,copy,readonly) NSString * collectionListUUID;                                                           //@synthesize collectionListUUID=_collectionListUUID - In the implementation block
@property (nonatomic,readonly) long long collectionListType;                                                                 //@synthesize collectionListType=_collectionListType - In the implementation block
@property (nonatomic,readonly) long long collectionListSubtype;                                                              //@synthesize collectionListSubtype=_collectionListSubtype - In the implementation block
@property (nonatomic,readonly) id<PXDisplayCollectionList> collectionList;                                                   //@synthesize collectionList=_collectionList - In the implementation block
@property (nonatomic,copy,readonly) NSString * importSourceUUID;                                                             //@synthesize importSourceUUID=_importSourceUUID - In the implementation block
@property (nonatomic,readonly) id<PXDisplayCollection> collection;                                                           //@synthesize collection=_collection - In the implementation block
@property (nonatomic,copy,readonly) NSArray * collectionHierarchy;                                                           //@synthesize collectionHierarchy=_collectionHierarchy - In the implementation block
@property (nonatomic,copy,readonly) PXProgrammaticNavigationDestination * sidebarBackNavigationRootDestination;              //@synthesize sidebarBackNavigationRootDestination=_sidebarBackNavigationRootDestination - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyboardInput;                                                                //@synthesize keyboardInput=_keyboardInput - In the implementation block
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(long long)type;
-(id<PXDisplayCollection>)collection;
-(id<PXDisplayAsset>)asset;
-(NSString *)assetUUID;
-(long long)collectionListType;
-(long long)assetCollectionType;
-(long long)assetCollectionSubtype;
-(long long)collectionListSubtype;
-(NSString *)assetLocalIdentifier;
-(id<PXDisplayCollectionList>)collectionList;
-(id<PXDisplayAssetCollection>)assetCollection;
-(id)initWithObject:(id)arg1 revealMode:(long long)arg2 ;
-(id)initWithObject:(id)arg1 revealMode:(long long)arg2 sidebarNavigationBackButtonRootDestination:(id)arg3 ;
-(id)initWithType:(long long)arg1 revealMode:(long long)arg2 keyboardInput:(id)arg3 ;
-(id)initWithType:(long long)arg1 revealMode:(long long)arg2 ;
-(id)initWithType:(long long)arg1 revealMode:(long long)arg2 assetUUID:(id)arg3 assetCollectionUUID:(id)arg4 ;
-(id)initWithType:(long long)arg1 revealMode:(long long)arg2 asset:(id)arg3 assetCollection:(id)arg4 ;
-(id)initWithImportSourceUUID:(id)arg1 revealMode:(long long)arg2 ;
-(NSArray *)collectionHierarchy;
-(long long)revealMode;
-(NSString *)assetCollectionUUID;
-(NSString *)collectionListUUID;
-(NSString *)importSourceUUID;
-(PXProgrammaticNavigationDestination *)sidebarBackNavigationRootDestination;
-(NSString *)keyboardInput;
@end

