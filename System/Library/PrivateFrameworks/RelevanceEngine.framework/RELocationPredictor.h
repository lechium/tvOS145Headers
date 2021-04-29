/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REEngineLocationManagerObserver.h>
#import <libobjc.A.dylib/RELocationPredictorProperties.h>

@class NSDictionary, RTRoutineManager, NSMapTable, NSMutableDictionary, NSLock, NSString;

@interface RELocationPredictor : REPredictor <REEngineLocationManagerObserver, RELocationPredictorProperties> {

	RTRoutineManager* _manager;
	NSMapTable* _routineData;
	NSMutableDictionary* _overrideRoutineType;
	NSLock* _routineDataLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * routineDataByEngine; 
+(double)updateInterval;
+(id)supportedFeatures;
-(id)_init;
-(void)update;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(id)predictedLocationIdentifierForEngine:(id)arg1 ;
-(void)addRelevanceEngine:(id)arg1 ;
-(void)removeRelevanceEngine:(id)arg1 ;
-(id)locationForEngine:(id)arg1 userLocation:(long long)arg2 ;
-(void)_setOverrideLocation:(long long)arg1 forEngine:(id)arg2 ;
-(void)locationManagerDidUpdateLocation:(id)arg1 ;
-(NSDictionary *)routineDataByEngine;
-(id)_routineDataForEngine:(id)arg1 ;
-(id)predictedLocationNameForEngine:(id)arg1 ;
@end

