/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@class UIKeyCommandDiscoverabilityHUDColumnView, NSArray;

@interface UIKeyCommandDiscoverabilityHUDViewCell : UICollectionViewCell {

	BOOL _constraintsForTwoColumns;
	UIKeyCommandDiscoverabilityHUDColumnView* _leftColumnView;
	UIKeyCommandDiscoverabilityHUDColumnView* _rightColumnView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UIKeyCommandDiscoverabilityHUDColumnView * leftColumnView;               //@synthesize leftColumnView=_leftColumnView - In the implementation block
@property (nonatomic,retain) UIKeyCommandDiscoverabilityHUDColumnView * rightColumnView;              //@synthesize rightColumnView=_rightColumnView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                                   //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic) BOOL constraintsForTwoColumns;                                           //@synthesize constraintsForTwoColumns=_constraintsForTwoColumns - In the implementation block
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(UIKeyCommandDiscoverabilityHUDColumnView *)leftColumnView;
-(void)setLeftColumnView:(UIKeyCommandDiscoverabilityHUDColumnView *)arg1 ;
-(UIKeyCommandDiscoverabilityHUDColumnView *)rightColumnView;
-(void)setRightColumnView:(UIKeyCommandDiscoverabilityHUDColumnView *)arg1 ;
-(BOOL)constraintsForTwoColumns;
-(void)setConstraintsForTwoColumns:(BOOL)arg1 ;
@end

