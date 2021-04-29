/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MKMapServiceTransitLineTicket.h>

@protocol GEOMapServiceTransitLineTicket;
@class GEOMapServiceTraits, NSString;

@interface _MKTransitLineTicket : NSObject <MKMapServiceTransitLineTicket> {

	id<GEOMapServiceTransitLineTicket> _ticket;

}

@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(GEOMapServiceTraits *)traits;
-(id)initWithTicket:(id)arg1 ;
@end

