/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, PHAsset;


@protocol PXPhotoKitAdjustedDisplayAsset <PXDisplayAsset>
@property (nonatomic,readonly) BOOL wantsAdjustments; 
@property (nonatomic,readonly) NSString * adjustedContentIdentifier; 
@property (nonatomic,readonly) PHAsset * photoKitAsset; 
@required
-(id)applyAdjustmentsToCompositionController:(id)arg1 renderer:(id)arg2;
-(BOOL)wantsAdjustments;
-(NSString *)adjustedContentIdentifier;
-(PHAsset *)photoKitAsset;

@end
