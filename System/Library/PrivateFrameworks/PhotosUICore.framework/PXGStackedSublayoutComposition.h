/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGSublayoutComposition.h>

@interface PXGStackedSublayoutComposition : PXGSublayoutComposition {

	long long _axis;
	double _interlayoutSpacing;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) long long axis;                         //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) double interlayoutSpacing;              //@synthesize interlayoutSpacing=_interlayoutSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                   //@synthesize padding=_padding - In the implementation block
-(id)init;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(CGRect)contentBounds;
-(long long)axis;
-(void)setAxis:(long long)arg1 ;
-(void)referenceSizeDidChange;
-(double)interlayoutSpacing;
-(void)setInterlayoutSpacing:(double)arg1 ;
-(void)updateEstimatedSublayoutGeometries;
-(void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(/*^block*/id)arg2 ;
@end

