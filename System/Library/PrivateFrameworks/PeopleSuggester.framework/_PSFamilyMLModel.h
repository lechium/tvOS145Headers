/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface _PSFamilyMLModel : NSObject {

	NSDictionary* _models;

}

@property (nonatomic,readonly) NSDictionary * models;              //@synthesize models=_models - In the implementation block
-(id)init;
-(NSDictionary *)models;
-(id)initWithModels:(id)arg1 ;
-(id)loadModelFromUrlResource:(id)arg1 ;
-(id)predictionForContact:(id)arg1 ;
-(id)familyProbability:(id)arg1 ;
-(id)getFeatureDictForContact:(id)arg1 ;
-(id)ensemblePredictionForInputFeatures:(id)arg1 ;
-(id)defaultPredictionForInputFeatures:(id)arg1 ;
-(id)predictionsForContacts:(id)arg1 featureDicts:(id)arg2 ;
-(id)getFeatureDictsForContacts:(id)arg1 ;
-(id)getModelWithModelName:(id)arg1 ;
-(id)defaultModelForPrediction;
-(id)getPredictionFromModel:(id)arg1 withInputFeatures:(id)arg2 ;
-(BOOL)isFamilyContact:(id)arg1 ;
-(id)familiesPredictionForContacts:(id)arg1 withMaxSuggestion:(long long)arg2 ;
-(id)predictionsForContacts:(id)arg1 ;
-(id)familyRelationsOfContacts:(id)arg1 featureDicts:(id)arg2 ;
@end

