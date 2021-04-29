/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXMemoriesFeedLayoutMetrics.h>

@interface PXMemoriesFeedWidgetLayoutMetrics : PXMemoriesFeedLayoutMetrics {

	unsigned long long _numberOfColumns;
	unsigned long long _numberOfRows;
	long long _layoutAxis;
	CGSize _interitemSpacing;

}

@property (assign,nonatomic) unsigned long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRows;                 //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign,nonatomic) CGSize interitemSpacing;                         //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) long long layoutAxis;                            //@synthesize layoutAxis=_layoutAxis - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfRows;
-(void)setNumberOfRows:(unsigned long long)arg1 ;
-(CGSize)interitemSpacing;
-(void)setInteritemSpacing:(CGSize)arg1 ;
-(long long)layoutAxis;
-(void)setLayoutAxis:(long long)arg1 ;
@end

