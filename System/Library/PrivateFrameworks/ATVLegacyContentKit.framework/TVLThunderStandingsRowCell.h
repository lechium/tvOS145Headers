/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@class NSArray;

@interface TVLThunderStandingsRowCell : UICollectionViewCell {

	NSArray* _columnDefinitions;
	NSArray* _rowViewComponents;

}

@property (nonatomic,retain) NSArray * columnDefinitions;              //@synthesize columnDefinitions=_columnDefinitions - In the implementation block
@property (nonatomic,retain) NSArray * rowViewComponents;              //@synthesize rowViewComponents=_rowViewComponents - In the implementation block
-(void)prepareForReuse;
-(NSArray *)columnDefinitions;
-(void)layoutSubviews;
-(id)_labelColor;
-(id)_labelFont;
-(void)setColumnDefinitions:(NSArray *)arg1 ;
-(NSArray *)rowViewComponents;
-(void)setRowViewComponents:(NSArray *)arg1 ;
-(id)_imageViewForRowComponentValue:(id)arg1 fromColumnDefinition:(id)arg2 ;
-(id)_labelForRowComponentValue:(id)arg1 fromColumnDefinition:(id)arg2 ;
-(id)_emptyView;
-(void)configureRow:(id)arg1 withColumnDefinitions:(id)arg2 ;
@end
