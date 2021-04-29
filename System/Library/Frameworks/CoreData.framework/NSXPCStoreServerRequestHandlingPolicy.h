/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NSXPCStoreServerRequestHandlingPolicy : NSObject
+(void)initialize;
-(BOOL)shouldAcceptConnectionsFromClientWithContext:(id)arg1 ;
-(id)processObtainRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)arg1 ;
-(id)restrictingWritePredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)processRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)processFaultForRelationshipWithName:(id)arg1 onObjectWithID:(id)arg2 fromClientWithContext:(id)arg3 error:(id*)arg4 ;
-(id)processFaultForObjectWithID:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)restrictingReadPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)processFetchResults:(id)arg1 prefetchedObjects:(id)arg2 ofType:(unsigned long long)arg3 ;
-(id)prefetchRelationships:(id)arg1 forFetch:(id)arg2 sourceOIDs:(id)arg3 fromClientWithContext:(id)arg4 ;
-(id)_coreFaultForObjectWithID:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)_coreProcessFetchRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)processRelationshipSourceObjectID:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)processFetchRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)processSaveRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)processBatchInsertRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)processBatchUpdateRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)processBatchDeleteRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)processPersistentHistoryRequest:(id)arg1 fromClientWithContext:(id)arg2 error:(id*)arg3 ;
-(id)restrictingPullChangeHistoryPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)_prefetchRelationshipKey:(id)arg1 sourceEntityDescription:(id)arg2 sourceObjectIDs:(id)arg3 prefetchRelationshipKeys:(id)arg4 inContext:(id)arg5 ;
-(id)getIDsForEntity:(id)arg1 count:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
@end

