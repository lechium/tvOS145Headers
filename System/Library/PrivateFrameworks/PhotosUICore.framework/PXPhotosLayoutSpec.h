/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXFeatureSpec.h>

@class PXAssetsSectionLayoutSpec, UIFont, UIColor, PXExtendedImageConfiguration, PXPhotosSectionHeaderLayoutSpec, NSString;

@interface PXPhotosLayoutSpec : PXFeatureSpec {

	PXAssetsSectionLayoutSpec* _assetsSpec;
	double _headerTitleLeadingSpacing;
	double _headerTitleButtonAlignmentSpacing;
	double _headerTitleTopSpacing;
	double _headerTitleBottomSpacing;
	UIFont* _headerTitleFont;
	UIColor* _headerTitleOverBackgroundColor;
	UIColor* _headerTitleOverContentColor;
	double _aspectFitContentVerticalPadding;
	double _squareContentVerticalPadding;
	PXExtendedImageConfiguration* _backgroundGradientImageConfiguration;
	PXExtendedImageConfiguration* _behindContentBackgroundGradientImageConfiguration;
	double _interSectionSpacing;
	double _interButtonSpacing;
	double _endButtonSpacing;

}

@property (nonatomic,readonly) PXAssetsSectionLayoutSpec * assetsSpec;                                                        //@synthesize assetsSpec=_assetsSpec - In the implementation block
@property (nonatomic,readonly) PXPhotosSectionHeaderLayoutSpec * sectionHeaderSpec; 
@property (nonatomic,readonly) double headerTitleLeadingSpacing;                                                              //@synthesize headerTitleLeadingSpacing=_headerTitleLeadingSpacing - In the implementation block
@property (nonatomic,readonly) double headerTitleButtonAlignmentSpacing;                                                      //@synthesize headerTitleButtonAlignmentSpacing=_headerTitleButtonAlignmentSpacing - In the implementation block
@property (nonatomic,readonly) double headerTitleTopSpacing;                                                                  //@synthesize headerTitleTopSpacing=_headerTitleTopSpacing - In the implementation block
@property (nonatomic,readonly) double headerTitleBottomSpacing;                                                               //@synthesize headerTitleBottomSpacing=_headerTitleBottomSpacing - In the implementation block
@property (nonatomic,readonly) UIFont * headerTitleFont;                                                                      //@synthesize headerTitleFont=_headerTitleFont - In the implementation block
@property (nonatomic,readonly) UIColor * headerTitleOverBackgroundColor;                                                      //@synthesize headerTitleOverBackgroundColor=_headerTitleOverBackgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * headerTitleOverContentColor;                                                         //@synthesize headerTitleOverContentColor=_headerTitleOverContentColor - In the implementation block
@property (nonatomic,readonly) double aspectFitContentVerticalPadding;                                                        //@synthesize aspectFitContentVerticalPadding=_aspectFitContentVerticalPadding - In the implementation block
@property (nonatomic,readonly) double squareContentVerticalPadding;                                                           //@synthesize squareContentVerticalPadding=_squareContentVerticalPadding - In the implementation block
@property (nonatomic,readonly) PXExtendedImageConfiguration * backgroundGradientImageConfiguration;                           //@synthesize backgroundGradientImageConfiguration=_backgroundGradientImageConfiguration - In the implementation block
@property (nonatomic,readonly) PXExtendedImageConfiguration * behindContentBackgroundGradientImageConfiguration;              //@synthesize behindContentBackgroundGradientImageConfiguration=_behindContentBackgroundGradientImageConfiguration - In the implementation block
@property (nonatomic,readonly) double interSectionSpacing;                                                                    //@synthesize interSectionSpacing=_interSectionSpacing - In the implementation block
@property (nonatomic,readonly) NSString * visualEffectViewGroupName; 
@property (nonatomic,readonly) double interButtonSpacing;                                                                     //@synthesize interButtonSpacing=_interButtonSpacing - In the implementation block
@property (nonatomic,readonly) double endButtonSpacing;                                                                       //@synthesize endButtonSpacing=_endButtonSpacing - In the implementation block
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(double)interSectionSpacing;
-(PXPhotosSectionHeaderLayoutSpec *)sectionHeaderSpec;
-(NSString *)visualEffectViewGroupName;
-(PXAssetsSectionLayoutSpec *)assetsSpec;
-(double)headerTitleLeadingSpacing;
-(double)headerTitleButtonAlignmentSpacing;
-(double)headerTitleTopSpacing;
-(double)headerTitleBottomSpacing;
-(UIFont *)headerTitleFont;
-(UIColor *)headerTitleOverBackgroundColor;
-(UIColor *)headerTitleOverContentColor;
-(double)aspectFitContentVerticalPadding;
-(double)squareContentVerticalPadding;
-(PXExtendedImageConfiguration *)backgroundGradientImageConfiguration;
-(PXExtendedImageConfiguration *)behindContentBackgroundGradientImageConfiguration;
-(double)interButtonSpacing;
-(double)endButtonSpacing;
@end

