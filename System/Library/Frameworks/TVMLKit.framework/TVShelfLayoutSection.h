/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVMLKit/TVMLKit-Structs.h>
@interface TVShelfLayoutSection : NSObject {

	long long _numberOfItems;
	CGRect* _itemFrames;
	double _sectionHeaderHorizontalOffset;
	double _sectionHeaderVerticalBump;
	CGRect _itemsBoundingFrame;
	CGRect _sectionHeaderFrame;
	UIEdgeInsets _sectionInset;

}

@property (assign,nonatomic) long long numberOfItems;                           //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) CGRect itemsBoundingFrame;                         //@synthesize itemsBoundingFrame=_itemsBoundingFrame - In the implementation block
@property (assign,nonatomic) CGRect sectionHeaderFrame;                         //@synthesize sectionHeaderFrame=_sectionHeaderFrame - In the implementation block
@property (assign,nonatomic) double sectionHeaderHorizontalOffset;              //@synthesize sectionHeaderHorizontalOffset=_sectionHeaderHorizontalOffset - In the implementation block
@property (assign,nonatomic) double sectionHeaderVerticalBump;                  //@synthesize sectionHeaderVerticalBump=_sectionHeaderVerticalBump - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;                         //@synthesize sectionInset=_sectionInset - In the implementation block
-(void)dealloc;
-(long long)numberOfItems;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)sectionInset;
-(void)setNumberOfItems:(long long)arg1 ;
-(CGRect)itemFrameAtIndex:(long long)arg1 ;
-(void)setItemFrame:(CGRect)arg1 atIndex:(long long)arg2 ;
-(CGRect)firstItemFrame;
-(CGRect)lastItemFrame;
-(CGRect)itemsBoundingFrame;
-(void)setItemsBoundingFrame:(CGRect)arg1 ;
-(CGRect)sectionHeaderFrame;
-(void)setSectionHeaderFrame:(CGRect)arg1 ;
-(double)sectionHeaderHorizontalOffset;
-(void)setSectionHeaderHorizontalOffset:(double)arg1 ;
-(double)sectionHeaderVerticalBump;
-(void)setSectionHeaderVerticalBump:(double)arg1 ;
@end

