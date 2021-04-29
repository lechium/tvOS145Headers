/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSFetchedResultsController, SHPersistentContainer, NSManagedObjectContext, NSObject;

@interface SHLibraryDataStore : NSObject {

	NSFetchedResultsController* _libraryTracksFetchedResultsController;
	SHPersistentContainer* _persistentContainer;
	NSManagedObjectContext* _managedObjectContext;
	NSObject*<OS_dispatch_queue> _persistentStoreDispatchQueue;

}

@property (nonatomic,retain) SHPersistentContainer * persistentContainer;                                       //@synthesize persistentContainer=_persistentContainer - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                                     //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> persistentStoreDispatchQueue;                       //@synthesize persistentStoreDispatchQueue=_persistentStoreDispatchQueue - In the implementation block
@property (nonatomic,readonly) NSFetchedResultsController * libraryTracksFetchedResultsController;              //@synthesize libraryTracksFetchedResultsController=_libraryTracksFetchedResultsController - In the implementation block
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(BOOL)commitChangesWithError:(id*)arg1 ;
-(SHPersistentContainer *)persistentContainer;
-(void)setPersistentContainer:(SHPersistentContainer *)arg1 ;
-(void)persistLibraryTracks:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteItemsByIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)persistLibraryGroups:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithStoreType:(long long)arg1 ;
-(id)fetchRecentLibraryTracksWithLimit:(long long)arg1 ;
-(NSFetchedResultsController *)libraryTracksFetchedResultsController;
-(void)loadStoreWithType:(long long)arg1 ;
-(id)fetchRecentLibraryItemsWithRequest:(id)arg1 limit:(long long)arg2 ;
-(id)fetchManagedObjectForRequest:(id)arg1 withPredicate:(id)arg2 context:(id)arg3 ;
-(id)updateReportForLibraryTrack:(id)arg1 ;
-(id)createMetadataWithData:(id)arg1 track:(id)arg2 group:(id)arg3 context:(id)arg4 ;
-(void)associateTrack:(id)arg1 toGroupWithIdentifier:(id)arg2 context:(id)arg3 ;
-(id)updateReportForLibraryGroups:(id)arg1 ;
-(id)fetchRecentLibraryGroupsWithLimit:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)persistentStoreDispatchQueue;
@end
