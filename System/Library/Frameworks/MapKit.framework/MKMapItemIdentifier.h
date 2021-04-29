/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapItemIdentifier;

@interface MKMapItemIdentifier : NSObject <NSCopying> {

	GEOMapItemIdentifier* _geoMapItemIdentifier;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)init;
-(unsigned long long)muid;
-(id)initWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(CLLocationCoordinate2D)arg3 ;
-(id)initWithMUID:(unsigned long long)arg1 ;
-(id)initWithMUID:(unsigned long long)arg1 coordinate:(CLLocationCoordinate2D)arg2 ;
-(id)initWithGEOMapItemIdentifier:(id)arg1 ;
-(id)geoMapItemIdentifier;
@end

