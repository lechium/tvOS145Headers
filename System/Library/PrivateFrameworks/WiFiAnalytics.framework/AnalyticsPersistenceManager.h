/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSPersistentStoreCoordinator, NSManagedObjectModel, NSManagedObjectContext, NSXPCStoreServer;

@interface AnalyticsPersistenceManager : NSObject {

	NSPersistentStoreCoordinator* _persistenceCoordinator;
	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _persistenceContext;
	NSXPCStoreServer* _xpcStoreServer;

}

@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                          //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * persistenceContext;                        //@synthesize persistenceContext=_persistenceContext - In the implementation block
@property (nonatomic,retain) NSXPCStoreServer * xpcStoreServer;                                  //@synthesize xpcStoreServer=_xpcStoreServer - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistenceCoordinator;              //@synthesize persistenceCoordinator=_persistenceCoordinator - In the implementation block
+(BOOL)isStoreCompatibleAtURL:(id)arg1 withModel:(id)arg2 ;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSManagedObjectContext *)persistenceContext;
-(void)setXpcStoreServer:(NSXPCStoreServer *)arg1 ;
-(NSXPCStoreServer *)xpcStoreServer;
-(id)initWithManagedObjectModel:(id)arg1 storeDescriptor:(id)arg2 ;
-(NSPersistentStoreCoordinator *)persistenceCoordinator;
-(void)setPersistenceCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(void)setPersistenceContext:(NSManagedObjectContext *)arg1 ;
@end

