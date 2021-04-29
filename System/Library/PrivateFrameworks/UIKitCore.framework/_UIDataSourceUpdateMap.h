/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _UIDataSourceSnapshotter, NSArray, _UIDataSourceBatchUpdateMapHelper;

@interface _UIDataSourceUpdateMap : NSObject {

	_UIDataSourceSnapshotter* _initialSnapshot;
	_UIDataSourceSnapshotter* _finalSnapshot;
	NSArray* _originalUpdateItems;
	NSArray* _updateItems;
	NSArray* _reverseUpdateItems;
	_UIDataSourceBatchUpdateMapHelper* _batchUpdateMapHelper;

}

@property (nonatomic,retain) _UIDataSourceSnapshotter * initialSnapshot;                            //@synthesize initialSnapshot=_initialSnapshot - In the implementation block
@property (nonatomic,copy) NSArray * originalUpdateItems;                                           //@synthesize originalUpdateItems=_originalUpdateItems - In the implementation block
@property (nonatomic,retain) NSArray * updateItems;                                                 //@synthesize updateItems=_updateItems - In the implementation block
@property (nonatomic,retain) NSArray * reverseUpdateItems;                                          //@synthesize reverseUpdateItems=_reverseUpdateItems - In the implementation block
@property (nonatomic,retain) _UIDataSourceSnapshotter * finalSnapshot;                              //@synthesize finalSnapshot=_finalSnapshot - In the implementation block
@property (nonatomic,retain) _UIDataSourceBatchUpdateMapHelper * batchUpdateMapHelper;              //@synthesize batchUpdateMapHelper=_batchUpdateMapHelper - In the implementation block
@property (nonatomic,readonly) BOOL isBatchUpdateMap; 
+(id)mapForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 batchUpdateItems:(id)arg3 ;
+(id)mapForInitialSnapshot:(id)arg1 orderedUpdateItems:(id)arg2 ;
-(id)description;
-(id)updates;
-(NSArray *)updateItems;
-(_UIDataSourceSnapshotter *)initialSnapshot;
-(_UIDataSourceSnapshotter *)finalSnapshot;
-(long long)finalSectionIndexForInitialSectionIndex:(long long)arg1 ;
-(id)finalIndexPathForInitialIndexPath:(id)arg1 ;
-(id)initialIndexPathForFinalIndexPath:(id)arg1 ;
-(long long)initialSectionIndexForFinalSectionIndex:(long long)arg1 ;
-(id)finalIndexPathForIndexPath:(id)arg1 startingAtUpdateWithIdentifier:(id)arg2 ;
-(void)setInitialSnapshot:(_UIDataSourceSnapshotter *)arg1 ;
-(id)rebasedMapFromNewBaseMap:(id)arg1 ;
-(void)_performAppendingInsertsFixups;
-(id)updateMapByRevertingUpdateWithIdentifier:(id)arg1 ;
-(void)_computeFinalSnapshotAndReverseUpdateItemsForCollectionViewUpdateItems:(id)arg1 ;
-(id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 updateItems:(id)arg3 ;
-(BOOL)_isSectionOnlyIndexPath:(id)arg1 ;
-(id)_sectionIndexPathForSection:(long long)arg1 ;
-(id)_transformIndexPath:(id)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3 ;
-(void)_updateSnapshot:(id)arg1 forUpdateItem:(id)arg2 ;
-(NSArray *)reverseUpdateItems;
-(long long)_transformSectionIndex:(long long)arg1 applyingUpdateItem:(id)arg2 withSnapshot:(id)arg3 ;
-(BOOL)isBatchUpdateMap;
-(BOOL)_mapIsSimpleInsertMoveSequence;
-(id)finalUpdateForInitialUpdate:(id)arg1 ;
-(id)initialUpdateForUpdateIdentifier:(id)arg1 ;
-(id)_rebasedUpdatesForUpdate:(id)arg1 ;
-(id)_findUpdateForIdentifier:(id)arg1 ;
-(id)_updateMapByRevertingAllUpdatesExceptUpdateWithIdentifier:(id)arg1 ;
-(id)submapAfterUpdate:(id)arg1 ;
-(id)submapBeforeUpdate:(id)arg1 ;
-(NSArray *)originalUpdateItems;
-(id)_mapUpdateForCollectionUpdateItem:(id)arg1 snapshot:(id)arg2 ;
-(void)setFinalSnapshot:(_UIDataSourceSnapshotter *)arg1 ;
-(void)setUpdateItems:(NSArray *)arg1 ;
-(void)setReverseUpdateItems:(NSArray *)arg1 ;
-(id)initialIndexPathForIndexPath:(id)arg1 beforeUpdateWithIdentifier:(id)arg2 ;
-(id)initialUpdateForFinalUpdate:(id)arg1 ;
-(void)setOriginalUpdateItems:(NSArray *)arg1 ;
-(_UIDataSourceBatchUpdateMapHelper *)batchUpdateMapHelper;
-(void)setBatchUpdateMapHelper:(_UIDataSourceBatchUpdateMapHelper *)arg1 ;
@end

