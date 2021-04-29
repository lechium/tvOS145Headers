/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HealthKit/HealthKit-Structs.h>
@interface HKDateIntervalTree : NSObject {

	unique_ptr<HKIntervalTree<double>, std::__1::default_delete<HKIntervalTree<double>>>* _tree;

}
-(id)init;
-(void)insertInterval:(id)arg1 ;
-(BOOL)hasOverlapWithInterval:(id)arg1 ;
-(id)mergedIntervals;
@end
