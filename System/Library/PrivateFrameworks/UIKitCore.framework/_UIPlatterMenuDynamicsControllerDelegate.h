/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIPlatterMenuDynamicsControllerDelegate <NSObject>
@optional
-(void)translationDidUpdateForPlatterMenuDynamicsController:(id)arg1;

@required
-(CGPoint*)centerForPlatterWithMenuViewDismissed;
-(CGPoint*)centerForMenuDismissed;
-(CGPoint*)centerForPlatterWithMenuViewPresented;
-(double)minimumSpacingBetweenPlatterAndMenu;
-(CGPoint*)centerForMenuPresented;
-(void)platterMenuDynamicsControllerDidDismissWithController:(id)arg1;
-(id)leadingSwipeActionView;
-(id)trailingSwipeActionView;
-(CGPoint*)initialCenterForLeadingSwipeActionView;
-(CGPoint*)initialCenterForTrailingSwipeActionView;
-(void)platterMenuDynamicsController:(id)arg1 didMoveSwipeView:(id)arg2 toPosition:(CGPoint)arg3;

@end

