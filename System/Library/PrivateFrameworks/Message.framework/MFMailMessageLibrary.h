/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Message/Message-Structs.h>
#import <Message/MFMessageLibrary.h>
#import <libobjc.A.dylib/MFLibrarySearchableIndexDataSource.h>
#import <libobjc.A.dylib/MFSQLiteConnectionPoolDelegate.h>
#import <libobjc.A.dylib/MFContentProtectionObserver.h>

@protocol OS_dispatch_queue, MFMailboxPathProvider, OS_dispatch_source, MFMailMessageLibraryDelegate;
@class MFSQLiteConnectionPool, MFWeakObjectCache, NSObject, MFMailMessageLibraryMigrator, NSString, NSMutableSet, MFWeakSet, MFLibrarySearchableIndex;

@interface MFMailMessageLibrary : MFMessageLibrary <MFLibrarySearchableIndexDataSource, MFSQLiteConnectionPoolDelegate, MFContentProtectionObserver> {

	MFSQLiteConnectionPool* _connectionPool;
	MFWeakObjectCache* _libraryMessageCache;
	CFDictionaryRef _mailboxCache;
	NSObject*<OS_dispatch_queue> _queue;
	id<MFMailboxPathProvider> _mailboxPathProvider;
	MFMailMessageLibraryMigrator* _migrator;
	NSString* _threadLocalHandleKey;
	NSString* _threadLocalJournalKey;
	NSString* _activeAccountClause;
	NSString* _nonLocalAccountClause;
	int _protectedDataAvailability;
	NSObject*<OS_dispatch_queue> _keyBagQueue;
	NSMutableSet* _messagesToThreadAtUnlock;
	MFWeakSet* _middleware;
	NSObject*<OS_dispatch_source> _suspendTimer;
	id<MFMailMessageLibraryDelegate> _delegate;
	MFLibrarySearchableIndex* _searchableIndex;

}

@property (nonatomic,retain) MFLibrarySearchableIndex * searchableIndex;                  //@synthesize searchableIndex=_searchableIndex - In the implementation block
@property (assign,nonatomic) id<MFMailMessageLibraryDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long protectedDataAvailability; 
@property (nonatomic,readonly) unsigned long long pendingIndexItemsCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultInstance;
+(id)defaultPath;
+(void)_removeLibrary:(BOOL)arg1 atPath:(id)arg2 ;
+(void)setDefaultInstance:(id)arg1 ;
+(void)removeLibraryAtPath:(id)arg1 ;
-(void)dealloc;
-(id<MFMailMessageLibraryDelegate>)delegate;
-(void)setDelegate:(id<MFMailMessageLibraryDelegate>)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(BOOL)migrate;
-(void)removeMiddleware:(id)arg1 ;
-(id)_newConnection;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4 ;
-(BOOL)hasCompleteDataForMimePart:(id)arg1 ;
-(void)deleteAccount:(id)arg1 ;
-(MFLibrarySearchableIndex *)searchableIndex;
-(void)setSearchableIndex:(MFLibrarySearchableIndex *)arg1 ;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(BOOL)shouldCancel;
-(id)loadMeetingExternalIDForMessage:(id)arg1 ;
-(id)loadMeetingDataForMessage:(id)arg1 ;
-(id)loadMeetingMetadataForMessage:(id)arg1 ;
-(unsigned long long)protectedDataAvailability;
-(id)messagesWithMessageIDHeader:(id)arg1 ;
-(void)setFlags:(unsigned long long)arg1 forMessage:(id)arg2 ;
-(void)invalidateAccount:(id)arg1 ;
-(void)deleteMailboxes:(id)arg1 account:(id)arg2 ;
-(BOOL)renameMailboxes:(id)arg1 to:(id)arg2 ;
-(long long)libraryIDForAccount:(id)arg1 ;
-(long long)createLibraryIDForAccount:(id)arg1 ;
-(unsigned long long)serverUnreadOnlyOnServerCountForMailbox:(id)arg1 ;
-(unsigned)unreadCountForMailbox:(id)arg1 ;
-(unsigned)unreadCountForMailbox:(id)arg1 matchingCriterion:(id)arg2 ;
-(unsigned)nonDeletedCountForMailbox:(id)arg1 ;
-(long long)statusCountDeltaForMailbox:(id)arg1 ;
-(unsigned long long)mostRecentStatusCountForMailbox:(id)arg1 ;
-(void)setMostRecentStatusCount:(unsigned long long)arg1 forMailbox:(id)arg2 ;
-(unsigned)mailboxIDForURLString:(id)arg1 ;
-(id)urlForMailboxID:(unsigned)arg1 ;
-(id)mailboxUidForMessage:(id)arg1 ;
-(void)setMessage:(id)arg1 isPartial:(BOOL)arg2 ;
-(BOOL)isMessageContentsLocallyAvailable:(id)arg1 ;
-(void)setSummary:(id)arg1 forMessage:(id)arg2 ;
-(id)dataPathForMessage:(id)arg1 ;
-(id)dataPathForMessage:(id)arg1 part:(id)arg2 ;
-(id)accountForMessage:(id)arg1 ;
-(void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(BOOL)arg3 ;
-(id)dataConsumerForMessage:(id)arg1 part:(id)arg2 ;
-(void)updateMessage:(id)arg1 withMetadata:(/*^block*/id)arg2 ;
-(id)metadataForMessage:(id)arg1 key:(id)arg2 ;
-(id)messageWithLibraryID:(unsigned)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(unsigned)totalCountForMailbox:(id)arg1 ;
-(unsigned)nonDeletedCountForMailbox:(id)arg1 includeServerSearchResults:(BOOL)arg2 includeThreadSearchResults:(BOOL)arg3 ;
-(unsigned)allNonDeleteCountForMailbox:(id)arg1 includeServerSearchResults:(BOOL)arg2 includeThreadSearchResults:(BOOL)arg3 ;
-(id)messagesWithSummariesForMailbox:(id)arg1 range:(NSRange)arg2 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(id)copyMessageInfosForMailbox:(id)arg1 ;
-(id)copyMessageInfosMatchingCriterion:(id)arg1 ;
-(id)copyMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 forMailbox:(id)arg2 ;
-(id)messagesWithoutSummariesForMailbox:(id)arg1 fromRowID:(unsigned)arg2 limit:(unsigned)arg3 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 ;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 inRemoteMailbox:(id)arg3 ;
-(CFDictionaryRef)copySendersByLibraryIDForConversation:(long long)arg1 mailbox:(id)arg2 limit:(long long)arg3 ;
-(long long)oldestKnownConversationInMailbox:(id)arg1 ;
-(id)oldestKnownMessageInMailbox:(id)arg1 ;
-(id)serverSearchResultMessagesForMailbox:(id)arg1 ;
-(id)dateOfOldestNonIndexedNonSearchResultMessageInMailbox:(id)arg1 ;
-(id)dateOfNewestNonSearchResultMessageInMailbox:(id)arg1 ;
-(id)dateOfOldestNonSearchResultMessageInMailbox:(id)arg1 ;
-(id)filterContiguousMessages:(id)arg1 forCriterion:(id)arg2 options:(unsigned)arg3 ;
-(id)messageWithMessageID:(id)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(id)headerDataForMessage:(id)arg1 ;
-(id)dataForMimePart:(id)arg1 isComplete:(BOOL*)arg2 ;
-(id)dataConsumerForMessage:(id)arg1 part:(id)arg2 incomplete:(BOOL)arg3 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 ;
-(id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 ;
-(void)deleteDataForMessage:(id)arg1 ;
-(id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(int)arg2 ;
-(void)setFlagsFromDictionary:(id)arg1 forMessagesInMailboxURLString:(id)arg2 ;
-(id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(BOOL)arg3 newMessagesByOldMessage:(id)arg4 remoteIDs:(id)arg5 setFlags:(unsigned long long)arg6 clearFlags:(unsigned long long)arg7 messageFlagsForMessages:(id)arg8 copyFiles:(BOOL)arg9 addPOPUIDs:(BOOL)arg10 dataSectionsByMessage:(id)arg11 ;
-(void)compactMailbox:(id)arg1 ;
-(unsigned long long)countMessagesMatchingCriterion:(id)arg1 ;
-(id)countMessagesMatchingCriterion:(id)arg1 groupBy:(unsigned long long)arg2 ;
-(sqlite3_stmtRef)preparedStatement:(sqlite3Ref)arg1 pattern:(id)arg2 ;
-(void)performReadTransaction:(/*^block*/id)arg1 ;
-(void)performWriteTransaction:(/*^block*/id)arg1 ;
-(void)compactMessages:(id)arg1 permanently:(BOOL)arg2 ;
-(void)setFlagsForMessages:(id)arg1 mask:(unsigned long long)arg2 ;
-(void)updateThreadingInfoForMessage:(id)arg1 fromHeaders:(id)arg2 ;
-(void)updateAdditionalThreadingInfoForSentMessageWithHeaders:(id)arg1 externalConversationID:(long long)arg2 ;
-(id)messagesNeedingSyncConfirmationForMailbox:(id)arg1 ;
-(id)messagesWithoutSummariesForMailbox:(id)arg1 ;
-(id)messagesWithSummariesForMailbox:(id)arg1 fromRowID:(unsigned)arg2 limit:(unsigned)arg3 ;
-(id)orderedBatchOfMessagesEndingAtRowId:(unsigned)arg1 limit:(unsigned)arg2 success:(BOOL*)arg3 ;
-(unsigned)unreadCountForAggregatedMailboxes:(id)arg1 ;
-(unsigned)unreadCountForAggregatedMailboxes:(id)arg1 matchingCriterion:(id)arg2 ;
-(unsigned)attachmentCountForMailboxes:(id)arg1 ;
-(unsigned)deletedCountForMailbox:(id)arg1 ;
-(unsigned)nonDeletedCountForAggregatedMailboxes:(id)arg1 ;
-(unsigned)nonDeletedCountForAggregatedMailboxes:(id)arg1 includeServerSearchResults:(BOOL)arg2 includeThreadSearchResults:(BOOL)arg3 ;
-(void)setServerUnreadOnlyOnServerCount:(unsigned long long)arg1 forMailbox:(id)arg2 ;
-(void)setLastSyncAndMostRecentStatusCount:(unsigned long long)arg1 forMailbox:(id)arg2 ;
-(id)oldestMessageInMailbox:(id)arg1 ;
-(id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2 ;
-(unsigned)maximumRemoteIDForMailbox:(id)arg1 ;
-(unsigned)minimumRemoteIDForMailbox:(id)arg1 ;
-(BOOL)canProvideMinimumRemoteID;
-(id)sequenceIdentifierForMailbox:(id)arg1 ;
-(void)setSequenceIdentifier:(id)arg1 forMailbox:(id)arg2 ;
-(id)sequenceIdentifierForMessagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2 ;
-(void)setSequenceIdentifier:(id)arg1 forMessageWithLibraryID:(unsigned)arg2 ;
-(void)setSequenceIdentifier:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 inMailbox:(id)arg3 ;
-(id)getDetailsForMessagesWithRemoteIDInRange:(NSRange)arg1 fromMailbox:(id)arg2 ;
-(id)getDetailsForAllMessagesFromMailbox:(id)arg1 ;
-(id)getDetailsForMessages:(unsigned long long)arg1 absoluteBottom:(unsigned long long)arg2 topOfDesiredRange:(unsigned long long)arg3 range:(NSRange*)arg4 fromMailbox:(id)arg5 ;
-(void)removeAllMessagesFromMailbox:(id)arg1 removeMailbox:(BOOL)arg2 andNotify:(BOOL)arg3 ;
-(id)messageWithMessageID:(id)arg1 inMailbox:(id)arg2 ;
-(id)dataConsumerForMessage:(id)arg1 isPartial:(BOOL)arg2 ;
-(id)dataConsumerForMessage:(id)arg1 ;
-(id)metadataForMessage:(id)arg1 ;
-(id)bodyDataForMessage:(id)arg1 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 range:(NSRange)arg4 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 success:(BOOL*)arg3 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 success:(BOOL*)arg4 ;
-(void)closeDatabaseConnections;
-(void)deletePOPUID:(id)arg1 inMailbox:(id)arg2 ;
-(id)UIDsToDeleteInMailbox:(id)arg1 ;
-(id)deletedUIDsInMailbox:(id)arg1 ;
-(id)allUIDsInMailbox:(id)arg1 ;
-(id)hiddenPOPUIDsInMailbox:(id)arg1 ;
-(void)appendOfflineCacheOperation:(id)arg1 forAccount:(long long)arg2 lastTemporaryID:(unsigned)arg3 ;
-(void)markOfflineCacheOperationAsComplete:(id)arg1 ;
-(id)offlineCacheOperationsForAccount:(long long)arg1 lastTemporaryID:(unsigned*)arg2 ;
-(void)appendOfflineCacheReplayData:(id)arg1 forAccountID:(long long)arg2 ;
-(void)consumeOfflineCacheReplayDataForAccount:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)deleteOfflineCacheDataForAccount:(long long)arg1 ;
-(void)updateFlagsForMessagesInPlace:(id)arg1 success:(BOOL*)arg2 ;
-(id)remoteStoreForMessage:(id)arg1 ;
-(id)storedIntegerPropertyWithName:(id)arg1 ;
-(void)setStoredIntegerPropertyWithName:(id)arg1 value:(id)arg2 ;
-(void)_setProtectedDataAvailabilityState:(unsigned long long)arg1 ;
-(void)cancelSuspendTimer;
-(void)startSuspendTimer;
-(void)applicationWillSuspend;
-(void)applicationWillResume;
-(unsigned long long)pendingIndexItemsCount;
-(sqlite3Ref)getWriterDB;
-(void)unlockDB:(sqlite3Ref)arg1 ;
-(int)beginTransaction:(sqlite3Ref)arg1 withType:(long long)arg2 ;
-(void)removeSearchableItemsForMessages:(id)arg1 ;
-(id)updateFlagsForMessages:(id)arg1 changes:(id)arg2 transformer:(/*^block*/id)arg3 ;
-(BOOL)_insertThreadReferences:(id)arg1 toMessageWithLibraryID:(unsigned)arg2 usingDatabase:(sqlite3Ref)arg3 ;
-(BOOL)isProtectedDataAvailable:(sqlite3Ref)arg1 ;
-(void)_addMessageToThreadAtUnlock:(unsigned)arg1 ;
-(id)_addThreadingInfoWithContext:(id)arg1 usingDatabase:(sqlite3Ref)arg2 ;
-(id)conversationIDsOfMessagesInSameThreadAsMessageWithLibraryID:(unsigned)arg1 messageIDHash:(long long)arg2 ;
-(long long)conversationIdForMessageIds:(id)arg1 ;
-(unsigned long long)flagsForConversationId:(long long)arg1 ;
-(void)setFlags:(unsigned long long)arg1 forConversationId:(long long)arg2 ;
-(void)addMiddleware:(id)arg1 ;
-(int)beginTransaction:(sqlite3Ref)arg1 withType:(long long)arg2 forMailbox:(id)arg3 ;
-(id)_tellMiddlewareWillAddMessage:(id)arg1 ;
-(int)handleSqliteError:(sqlite3Ref)arg1 format:(id)arg2 ;
-(id)referencesFromHeaders:(id)arg1 ;
-(BOOL)appendToJournal:(const char*)arg1 ;
-(void)notifyConversation:(long long)arg1 hasMergedIntoConversation:(long long)arg2 ;
-(long long)addReferenceForContext:(id)arg1 usingDatabase:(sqlite3Ref)arg2 mergeHandler:(/*^block*/id)arg3 ;
-(BOOL)_writeEmlxFile:(id)arg1 withBodyData:(id)arg2 protectionClass:(int)arg3 ;
-(id)_libraryMessageWithLibraryID:(unsigned)arg1 wasCached:(BOOL*)arg2 ;
-(int)rollbackTransaction:(sqlite3Ref)arg1 ;
-(int)commitTransaction:(sqlite3Ref)arg1 ;
-(void)_tellMiddlewareDidAddMessages:(id)arg1 ;
-(void)iterateStatement:(sqlite3_stmtRef)arg1 db:(sqlite3Ref)arg2 withProgressMonitor:(id)arg3 andRowHandler:(/*function pointer*/void*)arg4 context:(void*)arg5 ;
-(void)sendMessagesForStatement:(sqlite3_stmtRef)arg1 db:(sqlite3Ref)arg2 to:(id)arg3 options:(unsigned)arg4 timestamp:(unsigned long long)arg5 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 baseTable:(unsigned)arg4 ;
-(sqlite3Ref)getReaderDB;
-(id)_firstDateForQuery:(id)arg1 inMailbox:(id)arg2 ;
-(id)queryForCriterion:(id)arg1 db:(sqlite3Ref)arg2 options:(unsigned)arg3 ;
-(id)queryForCriterion:(id)arg1 db:(sqlite3Ref)arg2 options:(unsigned)arg3 baseTable:(unsigned)arg4 ;
-(int)_integerForQuery:(id)arg1 withTextArgument:(id)arg2 ;
-(id)queryForCriterion:(id)arg1 db:(sqlite3Ref)arg2 options:(unsigned)arg3 baseTable:(unsigned)arg4 isSubquery:(BOOL)arg5 ;
-(unsigned)_libraryIDForOldestKnownMessageInMailbox:(id)arg1 ;
-(unsigned)_computeUnreadCountForMailboxes:(id)arg1 ;
-(unsigned)_flaggedCountForAggregatedMailboxes:(id)arg1 ;
-(unsigned)_attachmentCountForAggregatedMailboxes:(id)arg1 ;
-(unsigned)_includesMeCountForAggregatedMailboxes:(id)arg1 ;
-(unsigned)countOfRelatedMessagesMatchingCriterion:(id)arg1 forConversationsContainingMessagesMatchingCriterion:(id)arg2 forMailboxCriterion:(id)arg3 ;
-(id)_queryForMailboxesIDsFromMailboxes:(id)arg1 ;
-(unsigned)flaggedCountForMailbox:(id)arg1 ;
-(unsigned)attachmentCountForMailbox:(id)arg1 ;
-(unsigned)includesMeCountForMailbox:(id)arg1 ;
-(id)_messageForStatement:(sqlite3_stmtRef)arg1 options:(unsigned)arg2 timestamp:(unsigned long long)arg3 isProtectedDataAvailable:(BOOL)arg4 ;
-(BOOL)_canSelectMessagesWithOptions:(unsigned)arg1 db:(sqlite3Ref)arg2 ;
-(CFDictionaryRef)_copyReferenceHashesWithoutMessagesForMessageWithConversation:(id)arg1 ;
-(id)_getReferencesForHashesWithOwners:(CFDictionaryRef)arg1 ;
-(id)stringForQuery:(id)arg1 monitor:(id)arg2 ;
-(id)pathForMailboxURL:(id)arg1 ;
-(id)mailboxURLForMessage:(id)arg1 ;
-(id)_quotedPrefixLikeSubclauseForColumn:(id)arg1 value:(id)arg2 ;
-(void)_notifyDidCompact:(BOOL)arg1 messages:(id)arg2 mailboxes:(id)arg3 ;
-(BOOL)cleanupProtectedTables;
-(void)removeSearchableItemsForAccount:(id)arg1 mailboxID:(unsigned)arg2 ;
-(void)removeSearchableItemsForMailbox:(id)arg1 ;
-(id)dataPathForMessage:(id)arg1 type:(int)arg2 ;
-(BOOL)_setMessageData:(id)arg1 libraryID:(unsigned)arg2 part:(id)arg3 partial:(BOOL)arg4 complete:(BOOL)arg5 ;
-(void)_setMessageDataString:(id)arg1 forKey:(id)arg2 forMessage:(id)arg3 ;
-(id)loadData:(id)arg1 forMessage:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)bodyDataAtPath:(id)arg1 headerData:(id*)arg2 ;
-(id)headerDataAtPath:(id)arg1 ;
-(id)equalToMailboxIDsFromCriterion:(id)arg1 ;
-(id)_activeAccountsClause;
-(id)queryForCriterion:(id)arg1 db:(sqlite3Ref)arg2 options:(unsigned)arg3 baseTable:(unsigned)arg4 isSubquery:(BOOL)arg5 range:(NSRange)arg6 ;
-(void)sendMessagesMatchingQuery:(const char*)arg1 db:(sqlite3Ref)arg2 to:(id)arg3 options:(unsigned)arg4 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 baseTable:(unsigned)arg4 range:(NSRange)arg5 success:(BOOL*)arg6 ;
-(void)iterateMessagesMatchingCriterion:(id)arg1 withResultHandler:(id)arg2 options:(unsigned)arg3 withMonitor:(id)arg4 ;
-(void)removeSearchableItemsForAccount:(id)arg1 ;
-(id)_mailboxesClauseForAccounts:(id)arg1 ;
-(id)_indexSetOfMessagesDeleted;
-(void)removeSearchableItemsWithLibraryIDs:(id)arg1 ;
-(id)_activeConnectionWithDB:(sqlite3Ref)arg1 ;
-(BOOL)_canAccessProtectedData;
-(void)_reconcileAfterKeybagUnlock;
-(void)_reconcileJournal;
-(void)_handleSQLiteErrorCode:(int)arg1 db:(sqlite3Ref)arg2 ;
-(void)_handleFailedMigration;
-(void)performIncrementalVacuumForSchema:(id)arg1 ;
-(void)_setActiveJournal:(id)arg1 ;
-(id)_activeJournal;
-(void)_handleFullDatabase;
-(void)_handleJournalWriteFailure;
-(void)_performTransaction:(/*^block*/id)arg1 forWriting:(BOOL)arg2 ;
-(id)_connectionForWriting:(BOOL)arg1 ;
-(id)_activeConnectionWrapper;
-(id)_setActiveConnection:(id)arg1 forWriting:(BOOL)arg2 ;
-(id)_activeConnection;
-(void)_handleCorruptDatabase;
-(void)_handleProtectedDataIOError;
-(void)_handleInvalidDatabaseIOError;
-(void)_handleDetachedDatabaseIOError;
-(void)_handleIOError;
-(void)_handleBusyError;
-(void)renameOrRemoveDatabase;
-(void)_purgeSpotlightTombstonesBeforeTransaction:(long long)arg1 database:(sqlite3Ref)arg2 ;
-(void)_assignTransaction:(long long)arg1 forLibraryIDIndexSet:(id)arg2 missingLibraryIDIndexSet:(id*)arg3 database:(sqlite3Ref)arg4 ;
-(id)_stringsForIndexSet:(id)arg1 ;
-(void)_assignTransaction:(long long)arg1 forSpotlightTombstones:(id)arg2 type:(long long)arg3 database:(sqlite3Ref)arg4 ;
-(void)_assignTransaction:(long long)arg1 forLibraryIDs:(id)arg2 missingLibraryIDIndexSet:(id*)arg3 database:(sqlite3Ref)arg4 ;
-(void)_tellMiddleWareDidIndexMessages:(id)arg1 ;
-(sqlite3_stmtRef)_prepareBatchStatement:(sqlite3Ref)arg1 pattern:(id)arg2 objects:(id*)arg3 count:(unsigned long long)arg4 ;
-(sqlite3_stmtRef)_prepareBatchStatement:(sqlite3Ref)arg1 pattern:(id)arg2 libraryIDs:(unsigned long long*)arg3 batchSize:(unsigned long long)arg4 ;
-(id)_nonLocalAccountsClause;
-(id)_searchableItemIndexesForDb:(sqlite3Ref)arg1 indexingType:(long long)arg2 nonLocalAccountsClause:(id)arg3 protectedDataAvailable:(BOOL)arg4 whereClause:(id)arg5 limit:(unsigned long long)arg6 ;
-(void)addSpotlightTombstones:(id)arg1 type:(long long)arg2 ;
-(void)_resetTransactionIndexForAccount:(id)arg1 mailboxID:(unsigned)arg2 ;
-(id)updatesForSearchableIndex:(id)arg1 count:(unsigned long long)arg2 ;
-(id)searchableIndex:(id)arg1 assignTransaction:(long long)arg2 updates:(id)arg3 ;
-(void)searchableIndex:(id)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2 ;
-(id)verificationDataSamplesForSearchableIndex:(id)arg1 ;
-(id)newConnectionForConnectionPool:(id)arg1 ;
-(void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2 ;
-(void)invalidateAndWait;
-(void)notifyNewDataAvailableForMessages:(id)arg1 ;
-(void)recomputeUnreadCountForMailboxWithURL:(id)arg1 ;
-(long long)mailboxLocationOfMessageID:(unsigned)arg1 usingDatabase:(sqlite3Ref)arg2 ;
-(id)missingReferencesForConversationContainingMessage:(id)arg1 ;
-(long long)countOfMessagesMissingFromThreadContainingMessage:(id)arg1 ;
-(long long)loadMoreMessagesForThreadContainingMessage:(id)arg1 hasNoMoreMessages:(BOOL*)arg2 ;
-(id)stringForQuery:(id)arg1 ;
-(id)syncedConversations;
-(void)setConversationInfo:(long long)arg1 syncKey:(id)arg2 flags:(unsigned long long)arg3 ;
-(id)messageIdsForConversationId:(long long)arg1 limit:(unsigned long long)arg2 ;
-(void)mblQueueAddMessages:(id)arg1 ;
-(void)mblQueueRemoveMessages:(id)arg1 ;
-(id)mblGetQueuedMessagesForAccount:(id)arg1 ;
-(id)_quotedLikeSubclauseForColumn:(id)arg1 value:(id)arg2 ;
-(void)vacuumDataForObsoleteAccountURLString:(id)arg1 ;
-(id)attachmentsDirectoryForLibraryID:(unsigned)arg1 mailboxID:(unsigned)arg2 ;
-(id)queryForCriterion:(id)arg1 db:(sqlite3Ref)arg2 options:(unsigned)arg3 range:(NSRange)arg4 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 baseTable:(unsigned)arg4 range:(NSRange)arg5 ;
-(void)iterateMessagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 handler:(/*^block*/id)arg3 ;
-(void)rebuildActiveAccountsClauseWithAccounts:(id)arg1 ;
-(BOOL)checkDatabaseConsistency;
-(void)reconcileJournalOnStartup;
-(void)scheduleIncrementalVacuum;
-(void)_handleJournalMergeFailure;
-(void)_handleProtectedDataInconsistencies;
-(void)pruneConversationTables:(double)arg1 ;
-(void)setMailboxPathProvider:(id)arg1 ;
-(id)allMailboxURLStrings;
-(id)_libraryMessageCache;
@end

