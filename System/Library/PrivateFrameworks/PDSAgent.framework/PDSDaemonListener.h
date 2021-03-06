/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PDSAgent/PDSRemote.h>

@class NSArray, PDSEntryStore, PDSUserTracker;

@interface PDSDaemonListener : NSObject <PDSRemote> {

	BOOL _bypassClientIDCheck;
	NSArray* _clientIDs;
	PDSEntryStore* _entryStore;
	PDSUserTracker* _userTracker;

}

@property (nonatomic,retain) NSArray * clientIDs;                       //@synthesize clientIDs=_clientIDs - In the implementation block
@property (nonatomic,retain) PDSEntryStore * entryStore;                //@synthesize entryStore=_entryStore - In the implementation block
@property (nonatomic,retain) PDSUserTracker * userTracker;              //@synthesize userTracker=_userTracker - In the implementation block
@property (nonatomic,readonly) BOOL bypassClientIDCheck;                //@synthesize bypassClientIDCheck=_bypassClientIDCheck - In the implementation block
-(void)storeEntries:(id)arg1 deleteEntries:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)batchUpdateEntries:(id)arg1 forClientID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)removeAllEntriesForUser:(id)arg1 withClientID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)entriesForUser:(id)arg1 clientID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)activeUsersWithClientID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)usersWithClientID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)entriesForClientID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setUserTracker:(PDSUserTracker *)arg1 ;
-(PDSUserTracker *)userTracker;
-(id)initWithClientIDs:(id)arg1 entryStore:(id)arg2 userTracker:(id)arg3 ;
-(id)initWithEntryStore:(id)arg1 userTracker:(id)arg2 ;
-(PDSEntryStore *)entryStore;
-(void)setEntryStore:(PDSEntryStore *)arg1 ;
-(BOOL)bypassClientIDCheck;
-(NSArray *)clientIDs;
-(void)setClientIDs:(NSArray *)arg1 ;
@end

