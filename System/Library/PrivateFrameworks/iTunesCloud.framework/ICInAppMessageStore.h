/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableArray, NSString;

@interface ICInAppMessageStore : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableDictionary* _messageEntryCache;
	NSMutableDictionary* _globalPropertyCache;
	NSMutableDictionary* _applicationPropertyCache;
	NSMutableDictionary* _messageMetadataCache;
	NSMutableArray* _pendingEvents;
	NSString* _filePath;

}
-(id)init;
-(void)_load;
-(void)addMessageEntry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateMessageEntry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAllMetadataForBundleIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateMetadata:(id)arg1 messageIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAllMetadataForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFilePath:(id)arg1 ;
-(void)updateStoreProperty:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getStorePropertyForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)allStorePropertiesWithCompletion:(/*^block*/id)arg1 ;
-(void)updateStoreProperty:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getStorePropertyForKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)allApplicationStorePropertiesWithCompletion:(/*^block*/id)arg1 ;
-(void)removeMessageEntry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getMessageEntryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAllMessageEntriesWithCompletion:(/*^block*/id)arg1 ;
-(void)getAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getAllMessageEntriesForBundleIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetStoreWithCompletion:(/*^block*/id)arg1 ;
-(void)addPendingMessageEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pendingMessageEventsWithCompletion:(/*^block*/id)arg1 ;
-(void)removePendingMessageEventWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllMetadataForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_defaultStoreFilePath;
-(void)_commit;
@end

