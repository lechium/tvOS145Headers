/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObject.h>

@class NSMutableOrderedSet, NSString, NSData;

@interface PLLimitedLibraryFetchFilter : PLManagedObject {

	NSMutableOrderedSet* _assetUUIDs;

}

@property (nonatomic,copy) NSString * applicationIdentifier; 
@property (nonatomic,copy) NSString * designatedRequirement; 
@property (nonatomic,retain) NSData * fetchFilterData; 
+(id)entityName;
+(id)fetchOrCreateLimitedLibraryFetchFilterWithApplicationIdentifier:(id)arg1 auditToken:(SCD_Struct_PL32)arg2 inManagedObjectContext:(id)arg3 ;
+(id)entityNameToPredicateMapFromFetchFilterData:(id)arg1 ;
+(id)fetchLimitedLibraryFetchFilterWithApplicationIdentifier:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)_assetUUIDStringsFromFetchFilterData:(id)arg1 ;
+(id)_decodeFetchFilterData:(id)arg1 withUUIDHandler:(/*^block*/id)arg2 resultHandler:(/*^block*/id)arg3 ;
+(id)disallowedAlbumKinds;
+(id)insertIntoManagedObjectContext:(id)arg1 forApplicationIdentifier:(id)arg2 ;
+(id)_fetchFiltersMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(long long)arg3 inManagedObjectContext:(id)arg4 ;
+(void)deleteLimitedLibraryFetchFilterWithApplicationIdentifier:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(void)deleteAllLimitedLibraryFetchFiltersInManagedObjectContext:(id)arg1 ;
+(id)fetchFilterIdentifierForApplicationIdentifier:(id)arg1 ;
+(id)debugDescriptionOfCurrentLimitedLibraryFetchFiltersInManagedObjectContext:(id)arg1 ;
-(id)debugDescription;
-(void)addAssetsWithUUIDs:(id)arg1 ;
-(BOOL)containsAssetWithUUID:(id)arg1 ;
-(void)removeAllAssets;
-(id)assetUUIDStrings;
-(id)predicateForEntityName:(id)arg1 ;
-(void)_loadAssetUUIDs;
@end

