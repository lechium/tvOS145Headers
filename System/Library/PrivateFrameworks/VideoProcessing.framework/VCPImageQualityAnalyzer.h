/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VCPImageQualityAnalyzer : NSObject {

	float _qualityScore;

}

@property (readonly) float qualityScore;              //@synthesize qualityScore=_qualityScore - In the implementation block
-(float)qualityScore;
-(int)analyzeImageQuality:(id)arg1 irisPhotoOffsetSec:(float)arg2 cancel:(/*^block*/id)arg3 ;
@end

