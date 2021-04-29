/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFFlight.h>
@class NSString, NSArray, NSDictionary, NSData;


@protocol SFFlight <NSObject>
@property (nonatomic,copy) NSString * flightID; 
@property (nonatomic,copy) NSString * carrierCode; 
@property (nonatomic,copy) NSString * carrierName; 
@property (nonatomic,copy) NSString * flightNumber; 
@property (nonatomic,copy) NSArray * legs; 
@property (nonatomic,copy) NSString * operatorCarrierCode; 
@property (nonatomic,copy) NSString * operatorFlightNumber; 
@property (nonatomic,copy) NSString * carrierPhoneNumber; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)carrierName;
-(void)setCarrierName:(id)arg1;
-(NSArray *)legs;
-(void)setLegs:(id)arg1;
-(NSString *)flightNumber;
-(void)setFlightNumber:(id)arg1;
-(NSData *)jsonData;
-(NSString *)flightID;
-(void)setFlightID:(id)arg1;
-(NSString *)carrierCode;
-(void)setCarrierCode:(id)arg1;
-(NSString *)operatorCarrierCode;
-(void)setOperatorCarrierCode:(id)arg1;
-(NSString *)operatorFlightNumber;
-(void)setOperatorFlightNumber:(id)arg1;
-(NSString *)carrierPhoneNumber;
-(void)setCarrierPhoneNumber:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary, NSData;

@interface SFFlight : NSObject <SFFlight, NSSecureCoding, NSCopying> {

	NSString* _flightID;
	NSString* _carrierCode;
	NSString* _carrierName;
	NSString* _flightNumber;
	NSArray* _legs;
	NSString* _operatorCarrierCode;
	NSString* _operatorFlightNumber;
	NSString* _carrierPhoneNumber;

}

@property (nonatomic,copy) NSString * flightID;                                      //@synthesize flightID=_flightID - In the implementation block
@property (nonatomic,copy) NSString * carrierCode;                                   //@synthesize carrierCode=_carrierCode - In the implementation block
@property (nonatomic,copy) NSString * carrierName;                                   //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,copy) NSString * flightNumber;                                  //@synthesize flightNumber=_flightNumber - In the implementation block
@property (nonatomic,copy) NSArray * legs;                                           //@synthesize legs=_legs - In the implementation block
@property (nonatomic,copy) NSString * operatorCarrierCode;                           //@synthesize operatorCarrierCode=_operatorCarrierCode - In the implementation block
@property (nonatomic,copy) NSString * operatorFlightNumber;                          //@synthesize operatorFlightNumber=_operatorFlightNumber - In the implementation block
@property (nonatomic,copy) NSString * carrierPhoneNumber;                            //@synthesize carrierPhoneNumber=_carrierPhoneNumber - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)carrierName;
-(void)setCarrierName:(NSString *)arg1 ;
-(NSArray *)legs;
-(void)setLegs:(NSArray *)arg1 ;
-(NSString *)flightNumber;
-(void)setFlightNumber:(NSString *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)flightID;
-(void)setFlightID:(NSString *)arg1 ;
-(NSString *)carrierCode;
-(void)setCarrierCode:(NSString *)arg1 ;
-(NSString *)operatorCarrierCode;
-(void)setOperatorCarrierCode:(NSString *)arg1 ;
-(NSString *)operatorFlightNumber;
-(void)setOperatorFlightNumber:(NSString *)arg1 ;
-(NSString *)carrierPhoneNumber;
-(void)setCarrierPhoneNumber:(NSString *)arg1 ;
@end

