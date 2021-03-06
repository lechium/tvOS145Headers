/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>

@protocol PXGItemsLayoutDelegate, PXGLayoutContentSource, PXGItemsGeometry;
@class PXGLayout;

@interface PXGItemsLayout : PXGLayout {

	BOOL _loadedItemsNeedUpdate;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	unsigned long long _delegateRespondsTo;
	long long _applyingItemChangesCount;
	long long* _currentStylableItems;
	long long* _pendingStylableItems;
	BOOL* _pendingAnimations;
	long long* _styleableAnimations;
	double* _stylablePaddings;
	BOOL _accessoryItemsNeedUpdate;
	PXGLayout* _accessoryItemsContainerLayout;
	BOOL _lazy;
	id<PXGItemsLayoutDelegate> _delegate;
	long long _numberOfAccessoryItems;
	id<PXGLayoutContentSource> _accessoryItemContentSource;
	id _dropTargetObjectReference;
	unsigned long long _dropTargetStyle;
	id<PXGItemsGeometry> _itemsGeometry;
	long long __numberOfItems;
	NSRange _loadedItems;

}

@property (assign,nonatomic) NSRange loadedItems;                                                       //@synthesize loadedItems=_loadedItems - In the implementation block
@property (assign,nonatomic) long long _numberOfItems;                                                  //@synthesize _numberOfItems=__numberOfItems - In the implementation block
@property (assign,getter=isLazy,nonatomic) BOOL lazy;                                                   //@synthesize lazy=_lazy - In the implementation block
@property (assign,nonatomic,__weak) id<PXGItemsLayoutDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long numberOfItems; 
@property (assign,nonatomic) long long numberOfAccessoryItems;                                          //@synthesize numberOfAccessoryItems=_numberOfAccessoryItems - In the implementation block
@property (assign,nonatomic,__weak) id<PXGLayoutContentSource> accessoryItemContentSource;              //@synthesize accessoryItemContentSource=_accessoryItemContentSource - In the implementation block
@property (nonatomic,readonly) BOOL isApplyingItemChanges; 
@property (nonatomic,retain) id dropTargetObjectReference;                                              //@synthesize dropTargetObjectReference=_dropTargetObjectReference - In the implementation block
@property (assign,nonatomic) unsigned long long dropTargetStyle;                                        //@synthesize dropTargetStyle=_dropTargetStyle - In the implementation block
@property (nonatomic,readonly) id<PXGItemsGeometry> itemsGeometry;                                      //@synthesize itemsGeometry=_itemsGeometry - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(id<PXGItemsLayoutDelegate>)delegate;
-(void)setDelegate:(id<PXGItemsLayoutDelegate>)arg1 ;
-(void)update;
-(long long)numberOfItems;
-(NSRange)loadedItems;
-(void)setLoadedItems:(NSRange)arg1 ;
-(CGSize)sizeForItem:(long long)arg1 ;
-(id)objectReferenceForSpriteIndex:(unsigned)arg1 ;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(id)axSpriteIndexes;
-(id)axSpriteIndexesInRect:(CGRect)arg1 ;
-(unsigned)axSpriteIndexClosestToSpriteIndex:(unsigned)arg1 inDirection:(unsigned long long)arg2 ;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(/*^block*/id)arg1 ;
-(id<PXGItemsGeometry>)itemsGeometry;
-(void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(id)layoutForItemChanges;
-(long long)_numberOfItems;
-(void)setNumberOfItems:(long long)arg1 ;
-(id)axVisibleSpriteIndexes;
-(void)loadedItemsDidChange;
-(void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 ;
-(void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 changeMediaVersionHandler:(/*^block*/id)arg3 ;
-(void)setItem:(long long)arg1 forStylableType:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setAnimationParameters:(SCD_Struct_PX57)arg1 forStylableType:(long long)arg2 ;
-(void)setNumberOfAccessoryItems:(long long)arg1 ;
-(void)numberOfAccessoryItemsDidChange;
-(void)accessoryItemsDidChange;
-(void)setAccessoryItemContentSource:(id<PXGLayoutContentSource>)arg1 ;
-(long long)itemForSpriteIndex:(unsigned)arg1 ;
-(unsigned)spriteIndexForItem:(long long)arg1 ;
-(id)itemsForSpriteIndexes:(id)arg1 ;
-(id)spriteIndexesForItems:(id)arg1 ;
-(id)loadedItemsForItems:(id)arg1 ;
-(BOOL)spriteIndexIsItem:(unsigned)arg1 ;
-(BOOL)spriteIndexIsAccessoryItem:(unsigned)arg1 ;
-(long long)accessoryItemForSpriteIndex:(unsigned)arg1 ;
-(unsigned)spriteIndexForAccessoryItem:(long long)arg1 ;
-(id)itemsLayout;
-(BOOL)shouldInvalidateDecorationForModifiedSprites;
-(void)setDropTargetStyle:(unsigned long long)arg1 ;
-(void)setDropTargetObjectReference:(id)arg1 ;
-(void)invalidateLoadedItems;
-(void)updateLoadedItemsIfNeeded;
-(void)_updateLoadedItems;
-(void)invalidateStylableType:(long long)arg1 ;
-(void)_updateFocusedItemIfNeeded;
-(void)_updateHoveredItemIfNeeded;
-(void)_updateStylableType:(long long)arg1 ;
-(void)_invalidateAccessoryItems;
-(void)updateAccessoryItemsIfNeeded;
-(void)_updateAccessoryItems;
-(BOOL)isApplyingItemChanges;
-(void)beginApplyingItemChanges;
-(void)endApplyingItemChanges;
-(BOOL)delegateRespondsTo:(unsigned long long)arg1 ;
-(long long)itemForObjectReference:(id)arg1 ;
-(long long)itemForObjectReference:(id)arg1 options:(unsigned long long)arg2 ;
-(id)objectReferenceForItem:(long long)arg1 ;
-(void)setLazy:(BOOL)arg1 ;
-(NSRange)itemsToLoad;
-(void)dropTargetObjectReferenceDidChange;
-(void)modifyAccessoryItemSpritesInRange:(PXGSpriteIndexRange)arg1 state:(/*^block*/id)arg2 ;
-(void)_handleFocusChangeWithUserInfo:(id)arg1 ;
-(void)_handleSelectionChangeWithUserInfo:(id)arg1 ;
-(long long)numberOfAccessoryItems;
-(id<PXGLayoutContentSource>)accessoryItemContentSource;
-(id)dropTargetObjectReference;
-(unsigned long long)dropTargetStyle;
-(void)set_numberOfItems:(long long)arg1 ;
-(BOOL)isLazy;
@end

