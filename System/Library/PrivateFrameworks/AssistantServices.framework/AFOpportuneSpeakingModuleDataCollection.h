/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface AFOpportuneSpeakingModuleDataCollection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _speakableMap;

}
+(id)sharedCollector;
-(id)init;
-(void)_deleteSpeakablesOlderThan:(id)arg1 ;
-(void)logSpeakable:(id)arg1 forContact:(id)arg2 withModelId:(id)arg3 withFeatures:(id)arg4 withScore:(float)arg5 ;
-(void)logFeedbackOfType:(long long)arg1 forSpeakableId:(id)arg2 withModelId:(id)arg3 ;
-(void)logRecommendedAction:(id)arg1 forSpeakableId:(id)arg2 withModelId:(id)arg3 ;
-(void)logInteractionEvents:(id)arg1 forSpeakableId:(id)arg2 ;
@end

