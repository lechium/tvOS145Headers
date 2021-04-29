/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKGeoJSONCoverageRegion.h>

@class NSArray, NSString;

@interface _MKMultiPolygonGeoRegion : NSObject <MKGeoJSONCoverageRegion> {

	NSArray* _polygons;

}

@property (nonatomic,retain) NSArray * polygons;                    //@synthesize polygons=_polygons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContentsOfFile:(id)arg1 error:(id*)arg2 ;
-(NSArray *)polygons;
-(BOOL)coordinateLiesInRegion:(CLLocationCoordinate2D)arg1 ;
-(BOOL)_loadWithRootJSONObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadWithJSONObject:(id)arg1 error:(id*)arg2 ;
-(id)initWithJSONObject:(id)arg1 error:(id*)arg2 ;
-(void)setPolygons:(NSArray *)arg1 ;
@end

