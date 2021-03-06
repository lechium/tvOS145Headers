/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UICollectionViewController.h>

@class PMDurationProvider, NSLayoutConstraint;

@interface DurationsInfoPanel : UICollectionViewController {

	PMDurationProvider* _durationProvider;
	NSLayoutConstraint* _widthConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * widthConstraint;               //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (nonatomic,retain) PMDurationProvider * durationProvider;              //@synthesize durationProvider=_durationProvider - In the implementation block
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(id)initWithCollectionViewLayout:(id)arg1 andDurationProvider:(id)arg2 ;
-(PMDurationProvider *)durationProvider;
-(double)_estimatedWidth;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)widthConstraint;
-(void)setDurationProvider:(PMDurationProvider *)arg1 ;
@end

