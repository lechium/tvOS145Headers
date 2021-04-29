/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSMutableDictionary, NSMutableArray, NSObject, ICPlayActivityTable, NSXPCConnection, NSString;

@interface ICPlayActivityController : NSObject {

	NSOperationQueue* _debugLogOperationQueue;
	NSMutableDictionary* _endpointIdentifierToEndpointRevisionInformation;
	int _endpointRevisionInformationDidChangeNotifyToken;
	BOOL _hasAttemptedTableCreation;
	BOOL _hasLoadedEndpointRevisionInformation;
	BOOL _hasSetupEndpointRevisionInformationDidChangeNotifyToken;
	BOOL _hasValidEndpointRevisionInformationDidChangeNotifyToken;
	NSMutableArray* _pendingFlushingSessions;
	NSObject*<OS_dispatch_queue> _serialQueue;
	ICPlayActivityTable* _table;
	NSXPCConnection* _daemonPlayActivityControllerConnection;
	NSString* _databasePath;
	unsigned long long _writingStyle;

}

@property (nonatomic,readonly) unsigned long long writingStyle;              //@synthesize writingStyle=_writingStyle - In the implementation block
+(id)_requiredEndpointIdentifiers;
-(id)init;
-(void)dealloc;
-(id)_table;
-(id)initWithWritingStyle:(unsigned long long)arg1 ;
-(void)_acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 shouldFilterStoreAccountID:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_revisionsIndexSetForPlayActivityEvents:(id)arg1 ;
-(void)_completePendingPlayEventsWithRevisionIndexSet:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_daemonPlayActivityControllerConnection;
-(id)_revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1 ;
-(void)_getFlushSessionInformationForEndpointIdentifier:(id)arg1 shouldAcquire:(BOOL)arg2 storeAccountID:(unsigned long long)arg3 shouldFilterStoreAccountID:(BOOL)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)_loadEndpointIdentifierInformationIfNeeded;
-(void)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)_setEndpointRevisionInformation:(id)arg1 forEndpointIdentifier:(id)arg2 ;
-(id)_sessionInformationForSessionToken:(unsigned long long)arg1 ;
-(id)_copyEndpointRevisionInformationForEndpointIdentifier:(id)arg1 ;
-(void)getRevisionInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setupNotifyTokenIfNeeded;
-(void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)completePendingPlayActivityEventPersistentIDs:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)flushPendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getHasPendingPlayEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getPlayActivityEventsFromRevision:(unsigned long long)arg1 toRevision:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)recordPlayActivityEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeFlushedPlayActivityEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCurrentRevision:(unsigned long long)arg1 revisionVersionToken:(id)arg2 forEndpointIdentifier:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)writingStyle;
-(id)initWithWritingStyle:(unsigned long long)arg1 databasePath:(id)arg2 ;
@end

