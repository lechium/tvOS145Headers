/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@interface MPAuthoringUtilities : NSObject
+(unsigned long long)randomSeedFromOptions:(id)arg1 ;
+(unsigned long long)presentationOrderFromOptions:(id)arg1 ;
+(NSRange)videoPathsRangeFromOptions:(id)arg1 ;
+(long long)minimumNumberOfDynamicSlidesToAddFromOptions:(id)arg1 ;
+(BOOL)ignoreClusteringForImages:(id)arg1 withOptions:(id)arg2 ;
+(BOOL)replaceAudioPlaylistFromOptions:(id)arg1 ;
+(BOOL)useDefaultAudioFromOptions:(id)arg1 ;
+(BOOL)alignToBeatsFromOptions:(id)arg1 ;
+(BOOL)createBeatsFromOptions:(id)arg1 ;
+(unsigned long long)audioScalingModeFromOptions:(id)arg1 ;
+(long long)numberOfLayersFromOptions:(id)arg1 ;
+(BOOL)isLayerEffectAuthoredFromOptions:(id)arg1 ;
+(id)subtitlesFromOptions:(id)arg1 ;
+(BOOL)collectVersionInformationFromOptions:(id)arg1 ;
+(id)styleFromOptions:(id)arg1 ;
+(id)colorSchemeFromOptions:(id)arg1 ;
+(CGColorRef)backgroundColorFromOptions:(id)arg1 ;
+(id)exportTransitionIDFromOptions:(id)arg1 ;
+(double)exportTransitionDurationFromOptions:(id)arg1 ;
+(BOOL)shouldComputeLoopTransitionFromOptions:(id)arg1 ;
+(double)transitionDurationFromOptions:(id)arg1 ;
+(BOOL)useIntroTransition:(id)arg1 ;
+(id)introEffectIDFromOptions:(id)arg1 ;
+(double)introDurationFromOptions:(id)arg1 ;
+(id)outroEffectIDFromOptions:(id)arg1 ;
+(double)outroDurationFromOptions:(id)arg1 ;
+(BOOL)layerHasImagesFromOptions:(id)arg1 ;
+(long long)layerIndexFromOptions:(id)arg1 ;
+(id)effectListFromOptions:(id)arg1 ;
+(BOOL)canRepeatEffectWithPreset:(id)arg1 ;
+(BOOL)canRepeatPreset:(id)arg1 ;
+(BOOL)useLargestEffectsFromOptions:(id)arg1 ;
+(BOOL)matchEffectsUsingTagsFromOptions:(id)arg1 ;
+(BOOL)useTitleEffectFromOptions:(id)arg1 ;
+(id)titleEffectFromOptions:(id)arg1 ;
+(BOOL)useImageOnlyTitleEffectFromOptions:(id)arg1 ;
+(BOOL)pickEffectsEvenlyByIDWithOptions:(id)arg1 ;
+(id)lastPresetFromOptions:(id)arg1 ;
+(id)idFromPresetID:(id)arg1 ;
+(double)aspectRatioFromOptions:(id)arg1 ;
+(unsigned long long)screenSizeFromOptions:(id)arg1 ;
+(BOOL)useTransitionLayoutTagsWithOptions:(id)arg1 ;
+(BOOL)layerCanSkipScaleCalculation:(id)arg1 withOptions:(id)arg2 ;
+(double)audioDurationFromOptions:(id)arg1 ;
+(double)durationPerEffectFromOptions:(id)arg1 ;
+(double)layerTimeScaleFromOptions:(id)arg1 ;
+(double)minimumTransitionDurationFromOptions:(id)arg1 ;
+(double)minimumEffectDurationFromOptions:(id)arg1 ;
+(BOOL)matchPhasesWithTransitionFromOptions:(id)arg1 ;
+(BOOL)useUniformDurations:(id)arg1 ;
+(BOOL)scaleOutroEffectFromOptions:(id)arg1 ;
+(BOOL)scaleEffectsForBreaksFromOptions:(id)arg1 ;
+(double)breakDurationScaleFromOptions:(id)arg1 ;
+(double)portraitBreakDurationScaleFromOptions:(id)arg1 ;
+(double)baseBreakAspectRatioFromOptions:(id)arg1 ;
+(double)basePortraitBreakAspectRatioFromOptions:(id)arg1 ;
+(id)layerDescriptionForLayerWithZIndex:(long long)arg1 forStyle:(id)arg2 ;
+(double)maximumTransitionDurationFromOptions:(id)arg1 ;
+(BOOL)lockTransitionDurationFromOptions:(id)arg1 ;
+(BOOL)canAdjustPhaseDurations:(id)arg1 ;
+(NSRange)reconfigureRangeFromOptions:(id)arg1 ;
+(BOOL)shouldComputeSlideFiltersFromOptions:(id)arg1 ;
+(BOOL)shouldComputeTransitionsFromOptions:(id)arg1 ;
+(BOOL)canHaveTransitionsFromOptions:(id)arg1 ;
+(id)layerTypeFromOptions:(id)arg1 ;
+(double)layerOffsetFromOptions:(id)arg1 ;
+(BOOL)shouldComputeFramesFromOptions:(id)arg1 ;
+(double)movieVolumeFromOptions:(id)arg1 ;
+(BOOL)shouldDuckMoviesFromOptions:(id)arg1 ;
+(BOOL)repeatTransitionsFromOptions:(id)arg1 ;
+(BOOL)useBestAspectRatioFromOptions:(id)arg1 ;
+(double)effectPadding:(id)arg1 ;
+(BOOL)padTextOnlyEffects:(id)arg1 ;
+(BOOL)fitMoviesWhenPossibleFromOptions:(id)arg1 ;
+(BOOL)needsFitMovieAttributeFromOptions:(id)arg1 ;
+(BOOL)effectNeedsPreviousAttributesFromOptions:(id)arg1 ;
+(id)transitionListFromOptions:(id)arg1 ;
+(BOOL)pickTransitionsEvenlyByIDWithOptions:(id)arg1 ;
+(double)multilineSizeFactorFromOptions:(id)arg1 ;
+(id)gapInformationFromOptions:(id)arg1 ;
+(BOOL)alwaysIncludeLastTransitionFromOptions:(id)arg1 ;
+(id)loopTransitionIDFromOptions:(id)arg1 ;
+(id)presetIDFromPresetID:(id)arg1 ;
+(BOOL)fadeOutAudioFromOptions:(id)arg1 ;
+(BOOL)effectDecidesTransitionFromOptions:(id)arg1 ;
+(id)ignoreTransitionListFromOptions:(id)arg1 ;
+(BOOL)aspectRatioMatchesDefault:(id)arg1 withOptions:(id)arg2 ;
+(unsigned long long)reorderModeFromOptions:(id)arg1 ;
+(BOOL)requestGeneratedImagesFromOptions:(id)arg1 ;
+(id)absolutePathForPath:(id)arg1 withOptions:(id)arg2 ;
+(id)urlsFromPaths:(id)arg1 ;
+(unsigned long long)croppingModeFromOptions:(id)arg1 ;
+(unsigned long long)croppingModeForFitMoviesFromOptions:(id)arg1 ;
+(double)kenBurnsLikelihoodFromOptions:(id)arg1 ;
+(double)maxKenBurnsZoomFromOptions:(id)arg1 ;
+(double)kenBurnsPanFactorFromOptions:(id)arg1 ;
+(double)kenBurnsStartZoomLevelFromOptions:(id)arg1 ;
+(double)kenBurnsEndZoomLevelFromOptions:(id)arg1 ;
+(BOOL)kenBurnsAlwaysZoomInFromOptions:(id)arg1 ;
+(BOOL)kenBurnsBreaksFromOptions:(id)arg1 ;
+(BOOL)easeKenBurnsPanFromOptions:(id)arg1 ;
+(long long)kenBurnsLevelFromOptions:(id)arg1 ;
+(long long)kenBurnsOffsetTypeFromOptions:(id)arg1 ;
+(double)beatFactorFromOptions:(id)arg1 ;
+(BOOL)useROIFromOptions:(id)arg1 ;
+(double)kenBurnsZoomFactorFromOptions:(id)arg1 ;
+(long long)maxNumberOfSlidesToPreloadFromOptions:(id)arg1 ;
+(BOOL)useROIAspectRatioFromOptions:(id)arg1 ;
+(unsigned long long)regionOfInterestPickModeFromOptions:(id)arg1 ;
+(BOOL)performFaceDetectionFromOptions:(id)arg1 ;
+(id)absolutePathAtIndex:(long long)arg1 inPaths:(id)arg2 withOptions:(id)arg3 ;
+(double)fadeOutDurationFromOptions:(id)arg1 ;
+(id)absolutePathsForPaths:(id)arg1 withOptions:(id)arg2 ;
+(CGRect)rectToFitIn:(CGRect)arg1 withAspectRatio:(double)arg2 ;
+(CGPoint)kbCenterPointFromRect:(CGRect)arg1 ;
+(double)distanceBetween:(CGPoint)arg1 andPoint:(CGPoint)arg2 ;
@end

