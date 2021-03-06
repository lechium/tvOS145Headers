/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class TVImageStackView, TVImageProxy, UIMotionEffectGroup, TVLImageAssetElementType;

@interface _TVLMediaBrowserCell : UICollectionViewCell {

	TVImageStackView* _imageStackView;
	TVImageProxy* _imageProxy;
	UIMotionEffectGroup* _motionEffectGroup;
	TVLImageAssetElementType* _assetElement;

}

@property (nonatomic,retain) TVLImageAssetElementType * assetElement;              //@synthesize assetElement=_assetElement - In the implementation block
-(void)prepareForReuse;
-(BOOL)canBecomeFocused;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_attachMotionEffects;
-(void)_detachMotionEffects;
-(BOOL)_unapplyMotionEffect:(id)arg1 ;
-(void)setAssetElement:(TVLImageAssetElementType *)arg1 ;
-(void)_setImageFromURL:(id)arg1 forStackSize:(CGSize)arg2 ;
-(TVLImageAssetElementType *)assetElement;
@end

