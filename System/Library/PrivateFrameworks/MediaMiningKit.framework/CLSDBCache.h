/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString, NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface CLSDBCache : NSObject {

	BOOL _supportsVersioning;
	NSURL* _diskCacheURL;
	NSString* _dataModelName;
	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;

}

@property (nonatomic,readonly) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,copy,readonly) NSURL * diskCacheURL;                                              //@synthesize diskCacheURL=_diskCacheURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataModelName;                                          //@synthesize dataModelName=_dataModelName - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (assign,nonatomic) BOOL supportsVersioning;                                                  //@synthesize supportsVersioning=_supportsVersioning - In the implementation block
+(void)initialize;
+(id)defaultCache;
+(id)applicationDataUrlQueueWithURL:(id)arg1 ;
+(id)defaultCacheName;
+(id)currentApplicationDataUrlQueue;
+(BOOL)locationIsValidForDatabaseAtURL:(id)arg1 ;
+(id)urlForGraphApplicationData;
+(id)diskCacheWithName:(id)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(NSManagedObjectModel *)managedObjectModel;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)save;
-(id)formatVersion;
-(BOOL)_save;
-(void)invalidateMemoryCaches;
-(void)invalidateDiskCaches;
-(void)_resetCoreDataStack;
-(NSURL *)diskCacheURL;
-(id)initWithDiskCacheName:(id)arg1 ;
-(NSString *)dataModelName;
-(BOOL)supportsVersioning;
-(id)initWithDiskCacheName:(id)arg1 dataModelName:(id)arg2 ;
-(id)initAtURL:(id)arg1 ;
-(void)_saveAsync;
-(void)setSupportsVersioning:(BOOL)arg1 ;
@end

