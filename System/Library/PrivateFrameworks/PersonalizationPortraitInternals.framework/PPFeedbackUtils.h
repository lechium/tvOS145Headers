/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PPFeedbackUtils : NSObject
+(BOOL)shouldSample:(id)arg1 ;
+(id)feedbackItemsByItemString:(id)arg1 ;
+(BOOL)_yesWithProbability:(double)arg1 ;
+(BOOL)shouldSampleExtraction:(id)arg1 ;
+(void)addBoilerplateToFeedbackLog:(id)arg1 ;
+(id)feedbackItemForPPFeedbackItem:(id)arg1 ;
+(id)feedbackMetadataForBaseFeedback:(id)arg1 ;
+(id)scoredItemWithFeaturesForFeatureDictionary:(id)arg1 score:(float)arg2 ;
+(void)recordLexiconUserEventsFromMatchingFeedbackItems:(id)arg1 clientBundleId:(id)arg2 domain:(unsigned char)arg3 ;
+(void)recordUserEventsFromMatchingFeedbackItems:(id)arg1 clientBundleId:(id)arg2 clientIdentifier:(id)arg3 domain:(unsigned char)arg4 ;
@end

