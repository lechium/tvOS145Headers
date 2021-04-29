/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class UNSKeyedDataStoreRepository, UNSKeyedObservable, NSObject;

@interface UNSNotificationCategoryRepository : NSObject {

	UNSKeyedDataStoreRepository* _repository;
	UNSKeyedObservable* _observable;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)performMigration;
-(void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)allBundleIdentifiers;
-(void)_queue_notificationSourcesDidUninstall:(id)arg1 ;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg1 ;
-(void)notificationSourcesDidUninstall:(id)arg1 ;
-(void)_queue_performMigration;
-(id)categoryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3 ;
-(long long)_maxObjectsPerKey;
-(void)_queue_performMigrationForBundleIdentifier:(id)arg1 ;
-(id)categoriesForBundleIdentifier:(id)arg1 ;
-(id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2 ;
-(id)_queue_categoriesForBundleIdentifier:(id)arg1 ;
-(void)_queue_setCategories:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setCategories:(id)arg1 forBundleIdentifier:(id)arg2 ;
@end

