/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIDiffableDataSourceDiffer.h>
@class NSArray, _UIIdentifierDiffer, NSHashTable;


@protocol _UIDiffableDataSourceDiffer
@property (nonatomic,readonly) BOOL hasDifferences; 
@property (nonatomic,readonly) BOOL snapshotsAreRelated; 
@property (nonatomic,readonly) NSArray * updates; 
@property (nonatomic,readonly) id<_UIDiffableDataSourceState> beforeDataSourceState; 
@property (nonatomic,readonly) id<_UIDiffableDataSourceState> afterDataSourceState; 
@property (nonatomic,readonly) _UIIdentifierDiffer * itemIdentifierDiffer; 
@property (nonatomic,readonly) _UIIdentifierDiffer * sectionIdentifierDiffer; 
@property (nonatomic,readonly) NSHashTable * affectedSectionIdentifiers; 
@required
-(NSArray *)updates;
-(_UIIdentifierDiffer *)itemIdentifierDiffer;
-(id<_UIDiffableDataSourceState>)beforeDataSourceState;
-(id<_UIDiffableDataSourceState>)afterDataSourceState;
-(BOOL)hasDifferences;
-(BOOL)snapshotsAreRelated;
-(_UIIdentifierDiffer *)sectionIdentifierDiffer;
-(NSHashTable *)affectedSectionIdentifiers;

@end


@protocol _UIDiffableDataSourceState;
@class NSArray, _UIIdentifierDiffer, NSHashTable, NSIndexSet;

@interface _UIDiffableDataSourceDiffer : NSObject <_UIDiffableDataSourceDiffer> {

	id<_UIDiffableDataSourceState> _beforeDataSourceState;
	id<_UIDiffableDataSourceState> _afterDataSourceState;
	NSArray* _updates;
	_UIIdentifierDiffer* _itemIdentifierDiffer;
	_UIIdentifierDiffer* _sectionIdentifierDiffer;
	NSIndexSet* _deletedSections;
	NSIndexSet* _insertedSections;
	NSHashTable* _affectedSectionIdentifiers;

}

@property (nonatomic,retain) id<_UIDiffableDataSourceState> beforeDataSourceState;              //@synthesize beforeDataSourceState=_beforeDataSourceState - In the implementation block
@property (nonatomic,retain) id<_UIDiffableDataSourceState> afterDataSourceState;               //@synthesize afterDataSourceState=_afterDataSourceState - In the implementation block
@property (nonatomic,retain) NSArray * updates;                                                 //@synthesize updates=_updates - In the implementation block
@property (nonatomic,retain) _UIIdentifierDiffer * itemIdentifierDiffer;                        //@synthesize itemIdentifierDiffer=_itemIdentifierDiffer - In the implementation block
@property (nonatomic,retain) _UIIdentifierDiffer * sectionIdentifierDiffer;                     //@synthesize sectionIdentifierDiffer=_sectionIdentifierDiffer - In the implementation block
@property (nonatomic,retain) NSIndexSet * deletedSections;                                      //@synthesize deletedSections=_deletedSections - In the implementation block
@property (nonatomic,retain) NSIndexSet * insertedSections;                                     //@synthesize insertedSections=_insertedSections - In the implementation block
@property (nonatomic,retain) NSHashTable * affectedSectionIdentifiers;                          //@synthesize affectedSectionIdentifiers=_affectedSectionIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL hasDifferences; 
@property (nonatomic,readonly) BOOL snapshotsAreRelated; 
+(id)differWithBeforeDataSourceState:(id)arg1 afterDataSourceState:(id)arg2 ;
+(id)differWithBeforeDataSourceState:(id)arg1 afterDataSourceState:(id)arg2 itemIdentifierDiffer:(id)arg3 ;
-(id)description;
-(NSArray *)updates;
-(void)setUpdates:(NSArray *)arg1 ;
-(NSIndexSet *)insertedSections;
-(void)setInsertedSections:(NSIndexSet *)arg1 ;
-(NSIndexSet *)deletedSections;
-(void)setDeletedSections:(NSIndexSet *)arg1 ;
-(_UIIdentifierDiffer *)itemIdentifierDiffer;
-(id<_UIDiffableDataSourceState>)beforeDataSourceState;
-(id<_UIDiffableDataSourceState>)afterDataSourceState;
-(void)_computeUpdates;
-(id)initWithBeforeDataSource:(id)arg1 afterDataSource:(id)arg2 itemIdentifierDiffer:(id)arg3 ;
-(id)_computeUpdatesForIdentifierBasedDiff;
-(id)_computeSectionBoundaryMovesForItemDiffer:(id)arg1 ;
-(id)_sectionUpdatesForDiffResults:(id)arg1 deletedSections:(id)arg2 insertedSections:(id)arg3 ;
-(id)_itemUpdatesForDiffResults:(id)arg1 sectionBoundaryMoves:(id)arg2 deletedSections:(id)arg3 insertedSections:(id)arg4 ;
-(BOOL)hasDifferences;
-(BOOL)snapshotsAreRelated;
-(_UIIdentifierDiffer *)sectionIdentifierDiffer;
-(NSHashTable *)affectedSectionIdentifiers;
-(BOOL)_verifyForUpdates:(id)arg1 ;
-(void)setBeforeDataSourceState:(id<_UIDiffableDataSourceState>)arg1 ;
-(void)setAfterDataSourceState:(id<_UIDiffableDataSourceState>)arg1 ;
-(void)setItemIdentifierDiffer:(_UIIdentifierDiffer *)arg1 ;
-(void)setSectionIdentifierDiffer:(_UIIdentifierDiffer *)arg1 ;
-(void)setAffectedSectionIdentifiers:(NSHashTable *)arg1 ;
@end

