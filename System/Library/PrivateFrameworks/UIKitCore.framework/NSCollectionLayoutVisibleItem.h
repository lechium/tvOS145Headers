/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/_NSCollectionLayoutVisibleItem.h>

@class UICollectionViewLayoutAttributes, NSCollectionLayoutItem, NSString, NSIndexPath, UIBezierPath;

@interface NSCollectionLayoutVisibleItem : NSObject <_NSCollectionLayoutVisibleItem> {

	BOOL _dirty;
	UICollectionViewLayoutAttributes* _layoutAttributes;
	NSCollectionLayoutItem* _layoutItem;

}

@property (nonatomic,retain) UICollectionViewLayoutAttributes * layoutAttributes;              //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,retain) NSCollectionLayoutItem * layoutItem;                              //@synthesize layoutItem=_layoutItem - In the implementation block
@property (assign,getter=isDirty,nonatomic) BOOL dirty;                                        //@synthesize dirty=_dirty - In the implementation block
@property (assign,nonatomic) double alpha; 
@property (assign,nonatomic) long long zIndex; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (assign,nonatomic) CATransform3D transform3D; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSIndexPath * indexPath; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) unsigned long long representedElementCategory; 
@property (nonatomic,readonly) NSString * representedElementKind; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
-(NSString *)name;
-(NSString *)description;
-(void)setDirty:(BOOL)arg1 ;
-(CGAffineTransform)transform;
-(NSIndexPath *)indexPath;
-(double)alpha;
-(CGRect)bounds;
-(CGRect)frame;
-(BOOL)isHidden;
-(BOOL)isDirty;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
-(unsigned long long)representedElementCategory;
-(void)setTransform3D:(CATransform3D)arg1 ;
-(NSString *)representedElementKind;
-(CATransform3D)transform3D;
-(void)setLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(UICollectionViewLayoutAttributes *)layoutAttributes;
-(id)initWithLayoutAttributes:(id)arg1 layoutItem:(id)arg2 ;
-(NSCollectionLayoutItem *)layoutItem;
-(void)setLayoutItem:(NSCollectionLayoutItem *)arg1 ;
@end

