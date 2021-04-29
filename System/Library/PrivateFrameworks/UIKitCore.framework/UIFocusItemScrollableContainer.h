/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIFocusItemScrollableContainer <UIFocusItemContainer>
@property (assign,nonatomic) CGPoint contentOffset; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) CGSize visibleSize; 
@required
-(CGSize)contentSize;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1;
-(CGSize)visibleSize;

@end
