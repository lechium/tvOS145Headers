/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WiFiPolicy/WiFiPolicy-Structs.h>
@class NSMutableArray;

@interface TBCentroidCalculator : NSObject {

	NSMutableArray* _points;

}

@property (nonatomic,retain) NSMutableArray * points;              //@synthesize points=_points - In the implementation block
-(NSMutableArray *)points;
-(void)setPoints:(NSMutableArray *)arg1 ;
-(CLLocationCoordinate2D)centroid;
-(BOOL)_validLatitudeValue:(double)arg1 ;
-(BOOL)_validLongitudeValue:(double)arg1 ;
-(void)addLatitude:(double)arg1 longitude:(double)arg2 ;
@end

