/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BWVideoOrientationTimeMachineItem : NSObject {

	short _exifOrientation;
	double _ptsSeconds;

}

@property (assign,nonatomic) double ptsSeconds;                  //@synthesize ptsSeconds=_ptsSeconds - In the implementation block
@property (assign,nonatomic) short exifOrientation;              //@synthesize exifOrientation=_exifOrientation - In the implementation block
-(id)description;
-(short)exifOrientation;
-(void)setExifOrientation:(short)arg1 ;
-(id)initWithPTSSeconds:(double)arg1 exifOrientation:(short)arg2 ;
-(double)ptsSeconds;
-(void)setPtsSeconds:(double)arg1 ;
@end

