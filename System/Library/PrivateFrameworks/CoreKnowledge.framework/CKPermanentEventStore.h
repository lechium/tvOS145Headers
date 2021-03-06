/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CKPermanentWritableEventStore.h>
#import <libobjc.A.dylib/CKPermanentReadableEventStore.h>
#import <libobjc.A.dylib/CKPermanentEventStorePrivate.h>

@class CKKnowledgeStore;

@interface CKPermanentEventStore : NSObject <CKPermanentWritableEventStore, CKPermanentReadableEventStore, CKPermanentEventStorePrivate> {

	 knowledgeStore;

}

@property (readonly,nonatomic) CKKnowledgeStore * backingStore; 
+(id)defaultStore;
+(id)createEventWithIdentifier:(id)arg1 dateInterval:(id)arg2 metadata:(id)arg3 fromEvent:(id)arg4 ;
-(id)init;
-(CKKnowledgeStore *)backingStore;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(BOOL)deleteInteractionsWithBundleId:(id)arg1 error:(id*)arg2 ;
-(void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)historicEventWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)recordEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)recordInteraction:(id)arg1 bundleId:(id)arg2 error:(id*)arg3 ;
-(void)recordInteraction:(id)arg1 bundleId:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)recordEvent:(id)arg1 error:(id*)arg2 ;
-(BOOL)recordInteraction:(id)arg1 error:(id*)arg2 ;
-(void)recordInteraction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)historicEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)historicEventsWithSourceBundleIdentifier:(id)arg1 andIntent:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)historicEventsAndReturnError:(id*)arg1 ;
-(void)setFirstSeen:(id)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setLastSeen:(id)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setFrequency:(long long)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setLastDuration:(double)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setTotalDuration:(double)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)deleteEventWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)deleteEventWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

