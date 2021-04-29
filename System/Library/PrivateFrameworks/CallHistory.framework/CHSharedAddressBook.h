/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable {

	NSMutableDictionary* _addressBookCache;

}

@property (retain) NSMutableDictionary * addressBookCache;              //@synthesize addressBookCache=_addressBookCache - In the implementation block
+(id)get;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)cachedCount;
-(void)insertAddressBookInfoDictionaryIntoCache:(id)arg1 ;
-(id)fetchAddressBookInfoFromCacheForKey:(id)arg1 ;
-(void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2 ;
-(void)registerForContactsNotifications;
-(void)revertAddressBook:(id)arg1 ;
-(NSMutableDictionary *)addressBookCache;
-(void)cleanUpAddressBookCache_sync;
-(void)sendABChangedNotificationSyncWithUserInfo:(id)arg1 ;
-(void)setAddressBookCache:(NSMutableDictionary *)arg1 ;
@end

