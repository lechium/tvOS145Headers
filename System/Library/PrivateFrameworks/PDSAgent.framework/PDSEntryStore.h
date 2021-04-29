/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PDSEntryStoreDelegate, PDSCDCache;
@interface PDSEntryStore : NSObject {

	id<PDSEntryStoreDelegate> _delegate;
	id<PDSCDCache> _cache;

}

@property (nonatomic,retain) id<PDSCDCache> cache;                                   //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic,__weak) id<PDSEntryStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PDSEntryStoreDelegate>)delegate;
-(void)setDelegate:(id<PDSEntryStoreDelegate>)arg1 ;
-(id)entries;
-(id<PDSCDCache>)cache;
-(BOOL)hasPendingEntries;
-(void)setCache:(id<PDSCDCache>)arg1 ;
-(id)users;
-(id)initWithCache:(id)arg1 ;
-(id)activeUsers;
-(BOOL)hasActiveEntries;
-(BOOL)updateEntryState:(unsigned char)arg1 forUser:(id)arg2 clientID:(id)arg3 withError:(id*)arg4 ;
-(BOOL)deleteEntry:(id)arg1 withError:(id*)arg2 ;
-(id)entriesForUser:(id)arg1 withClientID:(id)arg2 ;
-(BOOL)updateAllEntriesWithState:(unsigned char)arg1 toState:(unsigned char)arg2 withError:(id*)arg3 ;
-(BOOL)deleteEntriesForUser:(id)arg1 withState:(unsigned char)arg2 withError:(id*)arg3 ;
-(BOOL)_permitTransitionFromState:(unsigned char)arg1 toState:(unsigned char)arg2 ;
-(BOOL)storeEntry:(id)arg1 withError:(id*)arg2 ;
-(BOOL)storeEntries:(id)arg1 deleteEntries:(id)arg2 withError:(id*)arg3 ;
-(id)entriesForUser:(id)arg1 ;
-(id)entriesWithClientID:(id)arg1 ;
-(id)usersWithClientID:(id)arg1 ;
-(id)activeUsersWithClientID:(id)arg1 ;
@end

