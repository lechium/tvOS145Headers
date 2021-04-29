/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REFeatureProperties.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface REFeature : NSObject <REFeatureProperties, NSCopying>

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long featureType; 
+(id)priorityFeature;
+(id)dataSourceFeature;
+(id)dateFeature;
+(id)locationFeature;
+(id)geofenceFeature;
+(id)sessionFeature;
+(id)dailyRoutineFeature;
+(id)isInDailyRoutineFeature;
+(id)conditionalFeature;
+(id)noContentFeature;
+(id)isDeveloperDonationFeature;
+(id)siriActionRoleFeature;
+(id)siriActionDailyAveragePerformedCountFeature;
+(id)siriActionHasRelevanceProvidersFeature;
+(id)workoutStateFeature;
+(id)dailyAverageWorkoutCountFeature;
+(id)performedWorkoutCountFeature;
+(id)nowPlayingStateFeature;
+(id)isSiriActionFeature;
+(id)relevanceThresholdFeature;
+(id)activitySummaryFeature;
+(id)dateOccursTodayFeature;
+(id)currentlyPlayingMediaDonationFeature;
+(id)recentSiriActionFeature;
+(id)transformedFeatureWithTransformer:(id)arg1 features:(id)arg2 ;
+(id)itemIdentifierFeature;
+(id)crossedFeatureWithFeatures:(id)arg1 ;
+(id)locationOfInterestFeature;
+(id)knownLocationOfInterestFeature;
+(id)appUsageFeature;
+(id)currentTimeFeature;
+(id)dayOfWeekFeature;
+(id)isWeekendFeature;
+(id)siriActionPerformedCountFeature;
+(id)currentlyPlayingFromAppFeature;
+(id)activeWorkoutFeature;
+(id)activeEnergyCompletionFeature;
+(id)exerciseTimeCompletionFeature;
+(id)standHourCompletionFeature;
+(id)sentimentAnalysisFeature;
+(id)negativeSentimentAnalysisFeature;
+(id)sentimentAnalysisCertaintyFeature;
+(id)coreBehaviorTimePredictionFeature;
+(id)coreBehaviorTimeCoarsePredictionFeature;
+(id)coreBehaviorDayPredictionFeature;
+(id)coreBehaviorDayCoarsePredictionFeature;
+(id)coreBehaviorLocationPredictionFeature;
+(id)coreBehaviorLocationCoarsePredictionFeature;
+(id)interactionFeature;
+(id)siriDomainFeature;
+(id)deviceMotionFeature;
+(id)motionFeature;
+(id)isConnectedToCarFeature;
+(id)isConnectedToBluetoothSpeakerFeature;
+(id)coreBehaviorShortcutTypeFeature;
+(id)coreBehaviorEventIdentifierHashFeature;
+(id)coreBehaviorAppIdentifierHashFeature;
+(id)groupFeature;
+(id)systemFeatureNames;
+(id)bluetoothDeviceFeature;
+(id)featureWithName:(id)arg1 featureType:(unsigned long long)arg2 ;
+(id)forcedFeature;
+(id)portraitFeature;
+(id)sectionFeature;
+(id)travelingFeature;
+(id)isStationaryFeature;
+(id)bulletinFeature;
+(id)companionAppUsageFeature;
+(id)featuresFromSource:(id)arg1 ;
+(id)featuresFromSource:(id)arg1 withNames:(id)arg2 ;
+(id)featuresFromSourceAtPath:(id)arg1 ;
+(id)featuresFromSourceAtPath:(id)arg1 withNames:(id)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)featureType;
-(long long)_bitCount;
-(id)featureByUsingTransformer:(id)arg1 ;
-(id)_dependentFeatures;
-(id)_rootFeatures;
-(void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2 ;
@end

