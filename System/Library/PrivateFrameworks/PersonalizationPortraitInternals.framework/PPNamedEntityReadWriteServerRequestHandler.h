/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PPNamedEntityReadWriteServerProtocol.h>

@interface PPNamedEntityReadWriteServerRequestHandler : NSObject <PPNamedEntityReadWriteServerProtocol>
-(void)clearWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeMapItemsBeforeCutoffDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeMapItemForPlaceName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)donateMapItem:(id)arg1 forPlaceName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)flushDonationsWithCompletion:(/*^block*/id)arg1 ;
-(void)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 sentimentScore:(double)arg5 completion:(/*^block*/id)arg6 ;
@end

