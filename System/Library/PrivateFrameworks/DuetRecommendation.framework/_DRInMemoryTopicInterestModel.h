/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_DRTopicInterestModeling.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, _DRTopicInterestSummary, NSObject;

@interface _DRInMemoryTopicInterestModel : NSObject <_DRTopicInterestModeling> {

	NSMutableArray* _topics;
	_DRTopicInterestSummary* _summary;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)predicateForTopicInteractionsBefore:(id)arg1 ;
+(id)predicateForTopicsWithPrefix:(id)arg1 ;
+(id)predicateForTopicInteractionsAfter:(id)arg1 ;
-(id)init;
-(void)purgeEntriesWithPrefix:(id)arg1 earlierThanDate:(id)arg2 ;
-(void)recordPresentationOfTopics:(id)arg1 onDate:(id)arg2 ;
-(void)recordSelectionOfTopics:(id)arg1 onDate:(id)arg2 ;
-(id)computeSummaryWithFilter:(id)arg1 ;
-(void)enumerateTopicCountsWithFilter:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)purgeEntriesEarlierThanDate:(id)arg1 ;
@end

