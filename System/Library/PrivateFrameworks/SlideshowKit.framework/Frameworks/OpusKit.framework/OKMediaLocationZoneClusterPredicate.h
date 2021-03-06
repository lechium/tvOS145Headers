/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OKMediaClusterPredicate.h>

@interface OKMediaLocationZoneClusterPredicate : OKMediaClusterPredicate {

	double _distance;

}

@property (readonly) double distance;              //@synthesize distance=_distance - In the implementation block
-(void)dealloc;
-(id)title;
-(double)distance;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
-(id)_containsInSet:(id)arg1 withinItems:(id)arg2 distance:(double)arg3 ;
-(id)_titleWithPlacemark:(id)arg1 ;
-(id)initWithDistance:(double)arg1 ;
@end

