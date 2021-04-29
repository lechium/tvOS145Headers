/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsSectionConfigurator.h>

@class PXCuratedLibraryCardSectionBodyLayoutSpec;

@interface PXCuratedLibraryCardSectionConfigurator : PXAssetsSectionConfigurator {

	PXCuratedLibraryCardSectionBodyLayoutSpec* _cardSpec;

}

@property (nonatomic,readonly) PXCuratedLibraryCardSectionBodyLayoutSpec * cardSpec;              //@synthesize cardSpec=_cardSpec - In the implementation block
-(void)configureAssetSectionLayout:(id)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2 ;
-(UIEdgeInsets)containerInsets;
-(id)createCardSpecWithExtendedTraitCollection:(id)arg1 ;
-(PXCuratedLibraryCardSectionBodyLayoutSpec *)cardSpec;
@end

