/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HKConceptSynthesizer : NSObject
+(id)synthesizeInMemoryConceptForCodingCollection:(id)arg1 ;
+(id)synthesizeConceptWithIdentifier:(id)arg1 forCodingCollection:(id)arg2 ;
+(id)proritizedCodingSystemsForDisplay;
+(id)_synthesizeConceptWithIdentifier:(id)arg1 forCodingCollection:(id)arg2 prioritizedCodingSystems:(id)arg3 ;
+(id)bestCodingSystemForDisplayForCodingCollection:(id)arg1 prioritizedCodingSystems:(id)arg2 ;
+(id)bestDisplayNameForCodingCollection:(id)arg1 prioritizedCodingSystems:(id)arg2 ;
+(id)enumerateCodingsBySystem:(id)arg1 prioritizingCodingSystems:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)adHocCodingForCodingCollection:(id)arg1 ;
+(id)privateCodeCreationCodingSortDescriptors;
+(id)bestDisplayNameForCodingCollection:(id)arg1 ;
@end

