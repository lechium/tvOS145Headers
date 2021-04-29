/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDate, NSDictionary;

@interface HMCameraClipAssetContext : NSObject <NSCopying, NSSecureCoding> {

	NSURL* _url;
	NSDate* _expirationDate;
	NSDictionary* _requiredHTTPHeaders;

}

@property (readonly) NSURL * url;                                          //@synthesize url=_url - In the implementation block
@property (readonly) NSDate * expirationDate;                              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (copy,readonly) NSDictionary * requiredHTTPHeaders;              //@synthesize requiredHTTPHeaders=_requiredHTTPHeaders - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSURL *)url;
-(NSDictionary *)requiredHTTPHeaders;
-(id)initWithURL:(id)arg1 expirationDate:(id)arg2 requiredHTTPHeaders:(id)arg3 ;
@end

