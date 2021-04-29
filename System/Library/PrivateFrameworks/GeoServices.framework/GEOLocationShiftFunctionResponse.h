/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOLocationShiftFunctionResponse : NSObject <NSSecureCoding> {

	GEOCoarseLocationLatLng _originalCoordinate;
	double _params[9];
	double _radius;
	BOOL _shouldUsePolyShiftFunction;
	unsigned _version;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng originalCoordinate;              //@synthesize originalCoordinate=_originalCoordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                           //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) unsigned version;                                        //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)version;
-(double)radius;
-(BOOL)isValidForCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(GEOCoarseLocationLatLng)shiftedCoordinateForCoordinate:(GEOCoarseLocationLatLng)arg1 accuracy:(double*)arg2 ;
-(id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(GEOCoarseLocationLatLng)arg2 version:(unsigned)arg3 ;
-(id)contractFunctionTo:(id)arg1 withRadius:(double)arg2 ;
-(GEOCoarseLocationLatLng)originalCoordinate;
@end
