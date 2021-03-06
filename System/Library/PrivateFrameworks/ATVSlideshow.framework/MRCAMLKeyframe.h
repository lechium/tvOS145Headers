/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MRCAMLBezierData;

@interface MRCAMLKeyframe : NSObject <NSCopying> {

	MRCAMLBezierData* spline;
	double value0;
	double value1;
	double time;

}

@property (nonatomic,retain) MRCAMLBezierData * spline; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(MRCAMLBezierData *)spline;
-(void)setSpline:(MRCAMLBezierData *)arg1 ;
@end

