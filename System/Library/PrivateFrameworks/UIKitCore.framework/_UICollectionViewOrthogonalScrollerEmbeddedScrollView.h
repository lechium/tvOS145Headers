/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIFocusContainerGuide, UICollectionView;

@interface _UICollectionViewOrthogonalScrollerEmbeddedScrollView : UIScrollView {

	UIFocusContainerGuide* _sectionFocusContainerGuide;
	UICollectionView* _collectionView;
	long long _section;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) long long section;                                     //@synthesize section=_section - In the implementation block
-(long long)section;
-(void)setSection:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UICollectionView *)collectionView;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)_childFocusRegionsInRect:(CGRect)arg1 inCoordinateSpace:(id)arg2 ;
-(void)_focusedItem:(id)arg1 isMinX:(BOOL*)arg2 isMaxX:(BOOL*)arg3 isMinY:(BOOL*)arg4 isMaxY:(BOOL*)arg5 ;
-(void)_configureSectionFocusContainerGuide;
@end

