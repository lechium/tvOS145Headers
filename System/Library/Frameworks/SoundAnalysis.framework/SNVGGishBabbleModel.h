/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MLModel;

@interface SNVGGishBabbleModel : NSObject {

	MLModel* _model;

}

@property (nonatomic,readonly) MLModel * model;              //@synthesize model=_model - In the implementation block
+(void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)URLOfModelInThisBundle;
+(void)loadWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(MLModel *)model;
-(id)predictionFromFeatures:(id)arg1 error:(id*)arg2 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithMLModel:(id)arg1 ;
-(id)predictionFromInput1:(id)arg1 error:(id*)arg2 ;
@end

