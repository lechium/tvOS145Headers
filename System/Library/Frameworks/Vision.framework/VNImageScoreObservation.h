/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSNumber;

@interface VNImageScoreObservation : VNObservation {

	NSNumber* _blurScore;
	NSNumber* _exposureScore;

}

@property (nonatomic,retain) NSNumber * blurScore;                  //@synthesize blurScore=_blurScore - In the implementation block
@property (nonatomic,retain) NSNumber * exposureScore;              //@synthesize exposureScore=_exposureScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)blurScore;
-(NSNumber *)exposureScore;
-(void)setExposureScore:(NSNumber *)arg1 ;
-(void)setBlurScore:(NSNumber *)arg1 ;
@end

