/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOServerFormattedString;
@class MKServerFormattedStringParameters;

@interface MKServerFormattedString : NSObject <NSCopying, NSSecureCoding> {

	id<GEOServerFormattedString> _geoServerString;
	MKServerFormattedStringParameters* _parameters;

}

@property (nonatomic,readonly) id<GEOServerFormattedString> geoServerString;                     //@synthesize geoServerString=_geoServerString - In the implementation block
@property (nonatomic,copy,readonly) MKServerFormattedStringParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)attributesForServerFormatStyle:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MKServerFormattedStringParameters *)parameters;
-(BOOL)isEqualToServerFormattedString:(id)arg1 ;
-(id)multiPartAttributedStringWithAttributes:(id)arg1 ;
-(id)_parametersByScrubbingUnusedOverrideVariablesFromParameters:(id)arg1 geoServerString:(id)arg2 ;
-(id<GEOServerFormattedString>)geoServerString;
-(id)_attributesByTokenForFormatStyles:(id)arg1 ;
-(id)initWithGeoServerString:(id)arg1 parameters:(id)arg2 ;
@end
