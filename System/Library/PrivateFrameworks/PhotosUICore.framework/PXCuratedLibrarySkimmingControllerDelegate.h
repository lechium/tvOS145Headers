/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXCuratedLibrarySkimmingControllerDelegate <NSObject>
@required
-(id)assetCollectionReferenceToShowSkimmingHints:(id)arg1;
-(id)assetCollectionReferenceForSkimmingSlideshow:(id)arg1;
-(void)skimmingController:(id)arg1 willShowSkimmingHintsForAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;
-(void)skimmingController:(id)arg1 willHideSkimmingHintsForAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;
-(void)skimmingController:(id)arg1 willStartSkimmingAssetCollectionReference:(id)arg2 animationDuration:(double)arg3;
-(void)skimmingControllerDidStopSkimming:(id)arg1 animationDuration:(double)arg2;

@end

