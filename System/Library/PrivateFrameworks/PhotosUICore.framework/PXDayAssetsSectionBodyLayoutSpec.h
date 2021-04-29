/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@interface PXDayAssetsSectionBodyLayoutSpec : PXFeatureSpec {

	long long _numberOfColumns;
	double _interitemSpacing;
	SCD_Struct_PX81 _bodyCornerRadius;

}

@property (nonatomic,readonly) long long numberOfColumns;                     //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,readonly) double interitemSpacing;                       //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX82 bodyCornerRadius;              //@synthesize bodyCornerRadius=_bodyCornerRadius - In the implementation block
-(long long)numberOfColumns;
-(double)interitemSpacing;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(SCD_Struct_PX82)bodyCornerRadius;
@end

