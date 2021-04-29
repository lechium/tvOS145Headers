/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDynamicItem.h>

@class UIView, UIBezierPath, NSString;

@interface _UIPlatterItem : NSObject <UIDynamicItem> {

	UIView* _heldView;

}

@property (__weak,readonly) UIView * heldView;                                      //@synthesize heldView=_heldView - In the implementation block
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGAffineTransform)transform;
-(CGRect)bounds;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(id)initWithView:(id)arg1 ;
-(UIView *)heldView;
@end
