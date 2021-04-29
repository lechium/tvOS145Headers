/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreData/CoreData-Structs.h>
@class NSFetchRequest, NSManagedObjectContext, NSString, NSPredicate, NSMutableDictionary, NSMutableArray, NSArray;

@interface NSFetchedResultsController : NSObject {

	NSFetchRequest* _fetchRequest;
	NSManagedObjectContext* _managedObjectContext;
	NSString* _sectionNameKeyPath;
	NSString* _sectionNameKey;
	NSString* _cacheName;
	NSPredicate* _remappedPredicate;
	NSPredicate* _originalPredicate;
	id _cachePath;
	struct {
		unsigned _changedResultsSinceLastSave : 1;
		unsigned _hasBatchedArrayResults : 1;
		unsigned _hasMutableFetchedResults : 1;
		unsigned _hasSections : 1;
		unsigned _includesSubentities : 1;
		unsigned _sendDidChangeContentDiffNotifications : 1;
		unsigned _sendDidChangeContentNotifications : 1;
		unsigned _sendDidChangeContentSnapshotNotifications : 1;
		unsigned _sendObjectChangeNotifications : 1;
		unsigned _sendSectionChangeNotifications : 1;
		unsigned _sendSectionIndexTitleForSectionName : 1;
		unsigned _sendWillChangeContentNotifications : 1;
		unsigned _usesNonpersistedProperties : 1;
		unsigned _reservedFlags : 19;
	}  _flags;
	id _delegate;
	id _sortKeys;
	id _fetchedObjects;
	id _sections;
	id _sectionsByName;
	id _sectionIndexTitles;
	id _sectionIndexTitlesSections;
	NSMutableDictionary* _indexCache;
	NSMutableArray* _indexCacheOffsets;

}

@property (nonatomic,readonly) NSFetchRequest * fetchRequest;                              //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSString * sectionNameKeyPath;                              //@synthesize sectionNameKeyPath=_sectionNameKeyPath - In the implementation block
@property (nonatomic,readonly) NSString * cacheName;                                       //@synthesize cacheName=_cacheName - In the implementation block
@property (assign,nonatomic) id<NSFetchedResultsControllerDelegate> delegate; 
@property (nonatomic,readonly) NSArray * fetchedObjects; 
@property (nonatomic,readonly) NSArray * sectionIndexTitles; 
@property (nonatomic,readonly) NSArray * sections; 
+(void)initialize;
+(void)deleteCacheWithName:(id)arg1 ;
-(void)dealloc;
-(id<NSFetchedResultsControllerDelegate>)delegate;
-(void)setDelegate:(id<NSFetchedResultsControllerDelegate>)arg1 ;
-(NSFetchRequest *)fetchRequest;
-(NSManagedObjectContext *)managedObjectContext;
-(void)_managedObjectContextDidSave:(id)arg1 ;
-(void)_managedObjectContextDidChange:(id)arg1 ;
-(void)_managedObjectContextDidChangeObjectIDs:(id)arg1 ;
-(void)_managedObjectContextDidMutateObjectIDs:(id)arg1 ;
-(NSArray *)sectionIndexTitles;
-(id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4 ;
-(BOOL)performFetch:(id*)arg1 ;
-(id)_fetchedObjects;
-(NSArray *)fetchedObjects;
-(id)objectAtIndexPath:(id)arg1 ;
-(id)indexPathForObject:(id)arg1 ;
-(id)sectionIndexTitleForSectionName:(id)arg1 ;
-(NSArray *)sections;
-(long long)sectionForSectionIndexTitle:(id)arg1 atIndex:(long long)arg2 ;
-(NSString *)sectionNameKeyPath;
-(NSString *)cacheName;
@end

