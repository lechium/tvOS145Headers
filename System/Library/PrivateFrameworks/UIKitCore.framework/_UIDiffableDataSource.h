/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class __UIDiffableDataSource, NSArray;

@interface _UIDiffableDataSource : NSObject {

	__UIDiffableDataSource* _dsImpl;

}

@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) NSArray * sectionIdentifiers; 
@property (nonatomic,readonly) NSArray * itemIdentifiers; 
-(id)init;
-(id)_impl;
-(void)appendSectionsWithIdentifiers:(id)arg1 ;
-(void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2 ;
-(void)reloadItemsWithIdentifiers:(id)arg1 ;
-(id)snapshot;
-(long long)numberOfItems;
-(NSArray *)itemIdentifiers;
-(long long)numberOfSections;
-(void)deleteAllItems;
-(id)initWithCollectionView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(NSArray *)sectionIdentifiers;
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
-(id)initWithTableView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(void)setDefaultRowAnimation:(long long)arg1 ;
-(void)appendItemsWithIdentifiers:(id)arg1 ;
-(id)emptySnapshot;
-(void)appendSectionWithIdentifier:(id)arg1 ;
-(void)applyDifferencesFromSnapshot:(id)arg1 ;
-(void)applySnapshot:(id)arg1 ;
-(id)initWithViewUpdatesSink:(id)arg1 ;
-(long long)defaultRowAnimation;
-(void)reloadFromSnapshot:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)applyDifferencesFromSnapshot:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reloadFromSnapshot:(id)arg1 ;
-(id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(/*^block*/id)arg2 cellConfigurationHandler:(/*^block*/id)arg3 ;
-(id)initWithTableView:(id)arg1 reuseIdentifierProvider:(/*^block*/id)arg2 cellConfigurationHandler:(/*^block*/id)arg3 ;
-(void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(id)initWithDiffableDataSource:(id)arg1 ;
-(id)dsImpl;
@end

