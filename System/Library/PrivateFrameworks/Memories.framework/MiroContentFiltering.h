/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MiroContentFiltering : NSObject
+(id)liveValueForKey:(id)arg1 ;
+(int)minimumDurationToFilter;
+(int)maxiumumDurationToSendAll;
+(int)minimumScoreAllowedAsBRoll;
+(int)minimumScoreAllowed;
+(double)bRollAdjustPercentageDefault;
+(double)bRollAdjustPercentageSlow;
+(double)bRollAdjustPercentageMedium;
+(double)bRollAdjustPercentageFast;
+(double)bRollAdjustForRequiredBRollPercentage;
+(int)assumedPhotoDuration;
+(double)videoTooShortInSeconds;
+(double)postSelectionDupeTestDurationInSeconds;
+(double)sloMoClusterTimeDurationInSeconds;
+(double)addBackMoreAfterDurationInSecondsFast;
+(double)addBackMoreAfterDurationInSecondsMedium;
+(double)addBackMoreAfterDurationInSecondsSlow;
+(int)clusterCountToTrim;
+(int)clusterTooLargeTrim;
+(double)shootingRatioMinBestDuration;
+(double)shootingRatioSmallSetRatio;
+(double)shootingRatioMaxDurationRatioAbove;
+(double)shootingRatioMaxOverSuggestedMultiplier;
+(double)shootingRatioMaxDurationRatioBelow;
+(int)endingGroupingCount;
+(int)minCountToAllowEndGrouping;
@end
