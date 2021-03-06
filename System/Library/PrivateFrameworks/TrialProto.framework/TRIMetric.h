/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TrialProto-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface TRIMetric : PBCodable <NSCopying> {

	double _doubleValue;
	long long _integerValue;
	NSString* _categoricalValue;
	NSString* _name;
	NSData* _userDefinedValue;
	SCD_Struct_TR1 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                       //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasIntegerValue; 
@property (assign,nonatomic) long long integerValue;                   //@synthesize integerValue=_integerValue - In the implementation block
@property (nonatomic,readonly) BOOL hasCategoricalValue; 
@property (nonatomic,retain) NSString * categoricalValue;              //@synthesize categoricalValue=_categoricalValue - In the implementation block
@property (nonatomic,readonly) BOOL hasUserDefinedValue; 
@property (nonatomic,retain) NSData * userDefinedValue;                //@synthesize userDefinedValue=_userDefinedValue - In the implementation block
+(id)metricWithName:(id)arg1 ;
+(id)metricWithName:(id)arg1 doubleValue:(double)arg2 ;
+(id)metricWithName:(id)arg1 integerValue:(long long)arg2 ;
+(id)metricWithName:(id)arg1 categoricalValue:(id)arg2 ;
+(id)metricWithName:(id)arg1 userDefinedValue:(id)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)doubleValue;
-(long long)integerValue;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIntegerValue:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasIntegerValue:(BOOL)arg1 ;
-(BOOL)hasIntegerValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)setCategoricalValue:(NSString *)arg1 ;
-(void)setUserDefinedValue:(NSData *)arg1 ;
-(BOOL)hasCategoricalValue;
-(BOOL)hasUserDefinedValue;
-(NSString *)categoricalValue;
-(NSData *)userDefinedValue;
@end

