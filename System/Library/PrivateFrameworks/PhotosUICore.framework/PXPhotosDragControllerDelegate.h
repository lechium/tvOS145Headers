/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXPhotosDragControllerDelegate <NSObject>
@required
-(id)dragControllerAssetReferenceForBeginningSession:(id)arg1;
-(id)dragController:(id)arg1 draggableAssetReferenceAtLocation:(CGPoint)arg2;
-(id)dragController:(id)arg1 regionOfInterestForAssetReference:(id)arg2 image:(id*)arg3;
-(id)dragController:(id)arg1 dropTargetAssetReferenceForLocation:(CGPoint)arg2;
-(id)dragController:(id)arg1 scrollViewForAssetReference:(id)arg2;
-(id)dragControllerViewControllerForPresentation:(id)arg1;
-(BOOL)dragController:(id)arg1 shouldSelectRearrangedAssetReferences:(id)arg2;
-(BOOL)dragController:(id)arg1 shouldResizeCancelledPreviewForAssetReference:(id)arg2;
-(void)dragController:(id)arg1 draggedAssetReferencesDidChange:(id)arg2;
-(void)dragController:(id)arg1 dropTargetAssetReferenceDidChange:(id)arg2;
-(void)dragController:(id)arg1 isDragSessionActiveDidChange:(BOOL)arg2;

@end

