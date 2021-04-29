/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXPhotosDragControllerDelegate;
@class UIView, PXSectionedSelectionManager, PXAssetCollectionActionManager, NSSet, PXAssetReference;

@interface PXPhotosDragController : NSObject {

	BOOL _isDragSessionActive;
	UIView* _contentView;
	PXSectionedSelectionManager* _selectionManager;
	PXAssetCollectionActionManager* _assetCollectionActionManager;
	id<PXPhotosDragControllerDelegate> _delegate;
	NSSet* _draggedAssetReferences;
	PXAssetReference* _dropTargetAssetReference;

}

@property (nonatomic,readonly) UIView * contentView;                                                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager;                             //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionActionManager * assetCollectionActionManager;              //@synthesize assetCollectionActionManager=_assetCollectionActionManager - In the implementation block
@property (nonatomic,__weak,readonly) id<PXPhotosDragControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * draggedAssetReferences;                                             //@synthesize draggedAssetReferences=_draggedAssetReferences - In the implementation block
@property (nonatomic,readonly) PXAssetReference * dropTargetAssetReference;                                //@synthesize dropTargetAssetReference=_dropTargetAssetReference - In the implementation block
@property (nonatomic,readonly) BOOL isDragSessionActive;                                                   //@synthesize isDragSessionActive=_isDragSessionActive - In the implementation block
-(id)init;
-(id<PXPhotosDragControllerDelegate>)delegate;
-(UIView *)contentView;
-(PXSectionedSelectionManager *)selectionManager;
-(PXAssetCollectionActionManager *)assetCollectionActionManager;
-(PXAssetReference *)dropTargetAssetReference;
-(NSSet *)draggedAssetReferences;
-(id)initWithContentView:(id)arg1 selectionManager:(id)arg2 assetCollectionActionManager:(id)arg3 delegate:(id)arg4 ;
-(BOOL)isDragSessionActive;
@end

