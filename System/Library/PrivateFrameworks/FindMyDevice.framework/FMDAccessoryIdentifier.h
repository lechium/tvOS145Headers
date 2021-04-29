/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FindMyDevice/FindMyDevice-Structs.h>
#import <libobjc.A.dylib/FMDCodable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FMDIdentifiable.h>

@class NSString;

@interface FMDAccessoryIdentifier : NSObject <FMDCodable, NSCopying, FMDIdentifiable> {

	NSString* _string;

}

@property (nonatomic,retain) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSString *)string;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(id)stringValue;
-(id)initWithString:(id)arg1 ;
-(id)initWithAddress:(id)arg1 ;
-(BOOL)encodeWithFMDCoder:(id)arg1 error:(id*)arg2 ;
-(id)initWithFMDCoder:(id)arg1 error:(id*)arg2 ;
-(id)computeAccessoryIdentifierWithAddress:(id)arg1 ;
-(id)initWithDeviceVendor:(id)arg1 deviceProductId:(id)arg2 ;
@end
