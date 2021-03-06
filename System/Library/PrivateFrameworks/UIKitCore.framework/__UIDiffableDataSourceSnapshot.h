/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/__UIDiffableDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UIDiffableDataSourceState;
@class NSMutableArray;

@interface __UIDiffableDataSourceSnapshot : __UIDiffableDataSource <NSCopying> {

	id<_UIDiffableDataSourceState> _state;
	NSMutableArray* _pendingSnapshotUpdates;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)state;
-(void)appendSectionsWithIdentifiers:(id)arg1 ;
-(void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2 ;
-(void)reloadItemsWithIdentifiers:(id)arg1 ;
-(id)initWithState:(id)arg1 ;
-(long long)numberOfItems;
-(id)itemIdentifiers;
-(long long)numberOfSections;
-(void)deleteAllItems;
-(id)sectionIdentifiers;
-(id)itemIdentifierForIndexPath:(id)arg1 ;
-(long long)numberOfItemsInSection:(id)arg1 ;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg1 ;
-(void)deleteItemsWithIdentifiers:(id)arg1 ;
-(void)reloadSectionsWithIdentifiers:(id)arg1 ;
-(id)indexPathForItemIdentifier:(id)arg1 ;
-(void)deleteSectionsWithIdentifiers:(id)arg1 ;
-(id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1 ;
-(long long)indexOfItemIdentifier:(id)arg1 ;
-(long long)indexOfSectionIdentifier:(id)arg1 ;
-(void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2 ;
-(void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2 ;
-(void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2 ;
-(void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2 ;
-(void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(void)appendItemsWithIdentifiers:(id)arg1 ;
-(void)appendSectionWithIdentifier:(id)arg1 ;
-(id)pendingSnapshotUpdates;
-(void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(void)_commitUpdateAtomic:(id)arg1 ;
-(void)_validateReloadUpdateThrowingIfNeeded:(id)arg1 ;
@end

