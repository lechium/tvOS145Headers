/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOComposedRouteStep, NSString, MKRouteStepPolyline, MKPolyline;

@interface MKRouteStep : NSObject {

	GEOComposedRouteStep* _geoComposedRouteStep;
	NSString* _instructions;
	unsigned long long _transportType;
	MKRouteStepPolyline* _polyline;

}

@property (getter=_geoComposedRouteStep,nonatomic,readonly) GEOComposedRouteStep * geoComposedRouteStep;              //@synthesize geoComposedRouteStep=_geoComposedRouteStep - In the implementation block
@property (nonatomic,readonly) NSString * instructions;                                                               //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) NSString * notice; 
@property (nonatomic,readonly) MKPolyline * polyline;                                                                 //@synthesize polyline=_polyline - In the implementation block
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) unsigned long long transportType;                                                      //@synthesize transportType=_transportType - In the implementation block
-(unsigned long long)transportType;
-(double)distance;
-(NSString *)instructions;
-(NSString *)notice;
-(id)_initWithGEOComposedRouteStep:(id)arg1 instructions:(id)arg2 transportType:(unsigned long long)arg3 polyline:(id)arg4 ;
-(MKPolyline *)polyline;
-(id)_geoComposedRouteStep;
@end

