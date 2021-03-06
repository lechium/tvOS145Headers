/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitEventRouter.framework/HomeKitEventRouter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSArray;

@interface HMEPendingTopicsCombiner : NSObject {

	NSMutableSet* _addTopicFilters;
	NSMutableSet* _removeTopicFilters;

}

@property (retain) NSMutableSet * addTopicFilters;                 //@synthesize addTopicFilters=_addTopicFilters - In the implementation block
@property (retain) NSMutableSet * removeTopicFilters;              //@synthesize removeTopicFilters=_removeTopicFilters - In the implementation block
@property (readonly) NSArray * topicFiltersToAdd; 
@property (readonly) NSArray * topicFiltersToRemove; 
-(id)init;
-(void)reset;
-(NSArray *)topicFiltersToAdd;
-(void)combineOntoPreviousAdditions:(id)arg1 removals:(id)arg2 ;
-(NSArray *)topicFiltersToRemove;
-(void)combineWithAdditions:(id)arg1 removals:(id)arg2 ;
-(NSMutableSet *)addTopicFilters;
-(NSMutableSet *)removeTopicFilters;
-(void)setAddTopicFilters:(NSMutableSet *)arg1 ;
-(void)setRemoveTopicFilters:(NSMutableSet *)arg1 ;
@end

