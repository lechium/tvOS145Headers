/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@interface PXZoomableInlineHeadersLayoutSpec : PXFeatureSpec {

	UIEdgeInsets _headerFloatMargins;
	UIEdgeInsets _headerFloatMarginsWithTallSafeAreaInsets;
	unsigned long long _style;
	double _headerOffsetY;

}

@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) double headerOffsetY;                  //@synthesize headerOffsetY=_headerOffsetY - In the implementation block
-(unsigned long long)style;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(UIEdgeInsets)headerFloatMarginsForSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(double)headerOffsetY;
@end

