/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MLModel;

@interface MLModelVisionFeaturePrintInfo : NSObject {

	unsigned long long _version;
	id _featureExtractorParameters;
	MLModel* _postVisionFeaturePrintModel;

}

@property (nonatomic,retain) id featureExtractorParameters;                      //@synthesize featureExtractorParameters=_featureExtractorParameters - In the implementation block
@property (assign,nonatomic) unsigned long long version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) MLModel * postVisionFeaturePrintModel;              //@synthesize postVisionFeaturePrintModel=_postVisionFeaturePrintModel - In the implementation block
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(id)featureExtractorParameters;
-(void)setFeatureExtractorParameters:(id)arg1 ;
-(MLModel *)postVisionFeaturePrintModel;
-(void)setPostVisionFeaturePrintModel:(MLModel *)arg1 ;
@end

