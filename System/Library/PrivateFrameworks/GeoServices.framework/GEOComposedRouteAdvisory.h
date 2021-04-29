/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOServerFormattedString;
@class NSArray;

@interface GEOComposedRouteAdvisory : NSObject <NSSecureCoding> {

	id<GEOServerFormattedString> _inlineTitle;
	BOOL _alwaysClickable;
	NSArray* _routeIncidents;
	NSArray* routeAdvisoryCards;
	NSArray* _routeAdvisoryCards;

}

@property (nonatomic,retain) id<GEOServerFormattedString> inlineTitle;              //@synthesize inlineTitle=_inlineTitle - In the implementation block
@property (nonatomic,retain) NSArray * routeIncidents;                              //@synthesize routeIncidents=_routeIncidents - In the implementation block
@property (nonatomic,retain) NSArray * routeAdvisoryCards;                          //@synthesize routeAdvisoryCards=_routeAdvisoryCards - In the implementation block
@property (assign,nonatomic) BOOL alwaysClickable;                                  //@synthesize alwaysClickable=_alwaysClickable - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMessage:(id)arg1 incidents:(id)arg2 ;
-(id)initWithGeoAdvisoryNotice:(id)arg1 incidents:(id)arg2 ;
-(id)initWithGeoAdvisoryNotice:(id)arg1 ;
-(id<GEOServerFormattedString>)inlineTitle;
-(NSArray *)routeIncidents;
-(void)setInlineTitle:(id<GEOServerFormattedString>)arg1 ;
-(BOOL)alwaysClickable;
-(void)setAlwaysClickable:(BOOL)arg1 ;
-(void)setRouteIncidents:(NSArray *)arg1 ;
-(NSArray *)routeAdvisoryCards;
-(void)setRouteAdvisoryCards:(NSArray *)arg1 ;
@end

