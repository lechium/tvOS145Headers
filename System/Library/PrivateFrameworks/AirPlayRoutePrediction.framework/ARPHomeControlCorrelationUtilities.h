/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _DKKnowledgeQuerying;
@interface ARPHomeControlCorrelationUtilities : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;

}

@property (nonatomic,readonly) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(id)homeKitAccessoriesWithPredicate:(id)arg1 sortStartDateAscending:(BOOL)arg2 limit:(long long)arg3 ;
-(id)homeKitScenesWithPredicate:(id)arg1 sortStartDateAscending:(BOOL)arg2 limit:(long long)arg3 ;
-(BOOL)writeArchive:(id)arg1 toFilePath:(id)arg2 ;
-(id)firstHomeKitEventsWithPredicate:(id)arg1 sortStartDateAscending:(BOOL)arg2 ;
-(id)homeKitEventsWithPredicate:(id)arg1 sortStartDateAscending:(BOOL)arg2 ;
@end

