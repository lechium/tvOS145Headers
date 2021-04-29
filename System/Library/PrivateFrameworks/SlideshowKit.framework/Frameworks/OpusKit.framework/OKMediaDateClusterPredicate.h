/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OKMediaClusterPredicate.h>

@interface OKMediaDateClusterPredicate : OKMediaClusterPredicate {

	unsigned long long _type;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(id)title;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
-(unsigned long long)timeOfDay:(id)arg1 ;
-(id)timeOfDayAsString:(unsigned long long)arg1 ;
-(long long)hourInGMT:(id)arg1 ;
@end

