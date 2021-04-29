/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface RTMapItemProviderBaseParameters : NSObject {

	double _locationUncertaintyMax;
	double _locationUncertaintyMin;
	double _mapItemUncertaintyMax;
	double _mapItemUncertaintyMin;

}

@property (nonatomic,readonly) double locationUncertaintyMax;              //@synthesize locationUncertaintyMax=_locationUncertaintyMax - In the implementation block
@property (nonatomic,readonly) double locationUncertaintyMin;              //@synthesize locationUncertaintyMin=_locationUncertaintyMin - In the implementation block
@property (nonatomic,readonly) double mapItemUncertaintyMax;               //@synthesize mapItemUncertaintyMax=_mapItemUncertaintyMax - In the implementation block
@property (nonatomic,readonly) double mapItemUncertaintyMin;               //@synthesize mapItemUncertaintyMin=_mapItemUncertaintyMin - In the implementation block
-(id)init;
-(id)initWithDefaultsManager:(id)arg1 ;
-(double)locationUncertaintyMax;
-(double)locationUncertaintyMin;
-(double)mapItemUncertaintyMin;
-(double)mapItemUncertaintyMax;
-(id)initWithLocationUncertaintyMax:(double)arg1 locationUncertaintyMin:(double)arg2 mapItemUncertaintyMax:(double)arg3 mapItemUncertaintyMin:(double)arg4 ;
@end

