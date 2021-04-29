/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISwipeViewManipulator.h>

@class NSString;

@interface _UIDefaultSwipeViewManipulator : NSObject <_UISwipeViewManipulator> {

	double _swipedViewRestingOffset;

}

@property (assign,nonatomic) double swipedViewRestingOffset;              //@synthesize swipedViewRestingOffset=_swipedViewRestingOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeAnimationsFromSwipedView:(id)arg1 atIndexPath:(id)arg2 ;
-(CGRect)restingFrameForSwipedView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)moveSwipedView:(id)arg1 atIndexPath:(id)arg2 withSwipeInfo:(SCD_Struct_UI130)arg3 animator:(id)arg4 ;
-(void)setSwipedViewRestingOffset:(double)arg1 ;
-(double)swipedViewRestingOffset;
@end

