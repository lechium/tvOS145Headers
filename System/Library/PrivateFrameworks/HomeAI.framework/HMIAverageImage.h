/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class CIImage;

@interface HMIAverageImage : HMFObject {

	float _decay;
	CIImage* _currentAverage;
	long long _numImages;

}

@property (retain) CIImage * currentAverage;              //@synthesize currentAverage=_currentAverage - In the implementation block
@property (assign) long long numImages;                   //@synthesize numImages=_numImages - In the implementation block
@property (assign) float decay;                           //@synthesize decay=_decay - In the implementation block
-(id)init;
-(float)decay;
-(id)outputImage;
-(void)setDecay:(float)arg1 ;
-(void)addToAverage:(id)arg1 ;
-(id)initWithDecay:(float)arg1 ;
-(long long)numImages;
-(void)setNumImages:(long long)arg1 ;
-(CIImage *)currentAverage;
-(void)setCurrentAverage:(CIImage *)arg1 ;
@end

