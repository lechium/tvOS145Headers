/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSMutableArray, AVxGroupList;

@interface AVxCollectionViewLayout : UICollectionViewLayout {

	BOOL _isLayoutClean;
	BOOL _isLayoutInProgress;
	NSMutableArray* _allLayoutAttributes;
	double _interitemSpacing;
	AVxGroupList* _groups;
	CGSize _itemSize;

}

@property (nonatomic,retain) AVxGroupList * groups;                //@synthesize groups=_groups - In the implementation block
@property (assign,nonatomic) double interitemSpacing;              //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                      //@synthesize itemSize=_itemSize - In the implementation block
-(id)init;
-(AVxGroupList *)groups;
-(void)setGroups:(AVxGroupList *)arg1 ;
-(void)setItemSize:(CGSize)arg1 ;
-(CGSize)itemSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(double)_availableWidth;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)_buildLayout;
-(id)controlItemForIndexPath:(id)arg1 ;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(void)_loadGroups;
-(double)_availableLeft;
-(double)_availableRight;
-(id)_visibleItemsForSection:(long long)arg1 ;
-(double)_calculateWidthForSection:(long long)arg1 maxWidthAllowed:(double)arg2 ;
-(void)_buildLayoutForSection:(long long)arg1 minX:(double)arg2 maxX:(double)arg3 ;
@end

