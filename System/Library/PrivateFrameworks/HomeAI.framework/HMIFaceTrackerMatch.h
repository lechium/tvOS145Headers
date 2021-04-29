/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HMIFaceTrackerMatch : NSObject {

	unsigned long long _projectedFaceIndex;
	unsigned long long _detectedFaceIndex;
	double _score;

}

@property (readonly) unsigned long long projectedFaceIndex;              //@synthesize projectedFaceIndex=_projectedFaceIndex - In the implementation block
@property (readonly) unsigned long long detectedFaceIndex;               //@synthesize detectedFaceIndex=_detectedFaceIndex - In the implementation block
@property (readonly) double score;                                       //@synthesize score=_score - In the implementation block
-(double)score;
-(id)initWithProjectedFaceIndex:(unsigned long long)arg1 detectedFaceIndex:(unsigned long long)arg2 score:(double)arg3 ;
-(unsigned long long)projectedFaceIndex;
-(unsigned long long)detectedFaceIndex;
@end

