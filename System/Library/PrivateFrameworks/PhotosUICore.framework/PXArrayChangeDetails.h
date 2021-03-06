/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexSet, NSDictionary;

@interface PXArrayChangeDetails : NSObject <NSMutableCopying, NSCopying> {

	NSIndexSet* _removedIndexes;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _movesToIndexes;
	const CFArrayRef _movesFromIndexes;
	NSIndexSet* _changedIndexes;
	NSDictionary* _indexesWithChangesByProperty;

}

@property (nonatomic,retain) NSDictionary * indexesWithChangesByProperty;              //@synthesize indexesWithChangesByProperty=_indexesWithChangesByProperty - In the implementation block
@property (nonatomic,readonly) BOOL hasIncrementalChanges; 
@property (nonatomic,readonly) NSIndexSet * removedIndexes;                            //@synthesize removedIndexes=_removedIndexes - In the implementation block
@property (nonatomic,readonly) NSIndexSet * insertedIndexes;                           //@synthesize insertedIndexes=_insertedIndexes - In the implementation block
@property (nonatomic,readonly) BOOL hasMoves; 
@property (nonatomic,readonly) NSIndexSet * movesToIndexes;                            //@synthesize movesToIndexes=_movesToIndexes - In the implementation block
@property (nonatomic,readonly) const CFArrayRef movesFromIndexes;                      //@synthesize movesFromIndexes=_movesFromIndexes - In the implementation block
@property (nonatomic,readonly) NSIndexSet * changedIndexes;                            //@synthesize changedIndexes=_changedIndexes - In the implementation block
@property (nonatomic,readonly) BOOL hasAnyChanges; 
@property (nonatomic,readonly) BOOL hasAnyInsertionsRemovalsOrMoves; 
+(id)changeDetailsFromArray:(id)arg1 toArray:(id)arg2 changedObjects:(id)arg3 ;
+(id)changeDetailsFromArray:(id)arg1 toArray:(id)arg2 changedObjects:(id)arg3 objectComparator:(/*^block*/id)arg4 ;
+(id)changeDetailsFromFetchResultChangeDetails:(id)arg1 ;
+(id)changeDetailsFromFetchResultChangeDetails:(id)arg1 originatingChange:(id)arg2 ;
+(id)changeDetailsWithNoChanges;
+(id)changeDetailsWithNoIncrementalChanges;
+(id)changeDetailsWithInsertedIndexRange:(NSRange)arg1 ;
+(id)changeDetailsWithRemovedIndexRange:(NSRange)arg1 ;
+(id)changeDetailsWithChangedIndexRange:(NSRange)arg1 ;
+(id)changeDetailsWithChangedIndexes:(id)arg1 ;
+(id)changeDetailsWithMovedFromIndexRange:(NSRange)arg1 toIndexRange:(NSRange)arg2 ;
+(id)changeDetailsWithOldKeyItemIndex:(long long)arg1 oldCount:(long long)arg2 newKeyItemIndex:(long long)arg3 newCount:(long long)arg4 ;
+(unsigned long long)indexAfterApplyingChanges:(id)arg1 toIndex:(unsigned long long)arg2 objectChanged:(out BOOL*)arg3 ;
+(unsigned long long)indexAfterRevertingChanges:(id)arg1 fromIndex:(unsigned long long)arg2 objectChanged:(out BOOL*)arg3 ;
+(BOOL)_mutableCopyInputs;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSIndexSet *)changedIndexes;
-(NSIndexSet *)insertedIndexes;
-(BOOL)hasMoves;
-(BOOL)hasIncrementalChanges;
-(BOOL)hasAnyChanges;
-(NSIndexSet *)removedIndexes;
-(BOOL)hasAnyInsertionsRemovalsOrMoves;
-(void)enumerateMovedIndexesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)arg1 ;
-(id)initWithIncrementalChangeDetailsRemovedIndexes:(id)arg1 insertedIndexes:(id)arg2 movesToIndexes:(id)arg3 movesFromIndexes:(const CFArrayRef)arg4 changedIndexes:(id)arg5 ;
-(id)initWithIncrementalChangeDetailsRemovedIndexes:(id)arg1 insertedIndexes:(id)arg2 movesToIndexes:(id)arg3 movesFromIndexes:(const CFArrayRef)arg4 changedIndexes:(id)arg5 indexesWithChangesByProperty:(id)arg6 ;
-(id)changeDetailsShiftedBy:(long long)arg1 ;
-(id)changeDetailsByAddingChangedIndexes:(id)arg1 ;
-(void)enumerateMovedRangesUsingBlock:(/*^block*/id)arg1 ;
-(id)indexesWithChangesToProperty:(id)arg1 ;
-(id)changedPropertiesForIndex:(long long)arg1 ;
-(id)indexSetAfterApplyingChangesToIndexSet:(id)arg1 ;
-(id)indexSetAfterRevertingChangesToIndexSet:(id)arg1 ;
-(void)applyToIndexSet:(id)arg1 ;
-(void)applyToDictionary:(id)arg1 removalHandler:(/*^block*/id)arg2 moveHandler:(/*^block*/id)arg3 ;
-(BOOL)canPreserveIncrementalChangesWhenAddingChangeDetails:(id)arg1 ;
-(id)changeDetailsByAddingChangeDetails:(id)arg1 ;
-(BOOL)isOnlyInsertionAtEnd:(BOOL*)arg1 orRemovalAtEnd:(BOOL*)arg2 countBeforeChange:(long long)arg3 countAfterChange:(long long)arg4 ;
-(NSIndexSet *)movesToIndexes;
-(const CFArrayRef)movesFromIndexes;
-(NSDictionary *)indexesWithChangesByProperty;
-(void)setIndexesWithChangesByProperty:(NSDictionary *)arg1 ;
-(id)changeDetailsShiftedBy:(long long)arg1 scaledBy:(long long)arg2 ;
@end

