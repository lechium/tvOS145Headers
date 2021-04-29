/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, NSData;

@interface SUTSchemaTestContext : SISchemaInstrumentationMessage {

	NSString* _testName;
	int _testType;
	SCD_Struct_SI0 _has;
	BOOL _hasTestName;

}

@property (nonatomic,copy) NSString * testName;                //@synthesize testName=_testName - In the implementation block
@property (assign,nonatomic) BOOL hasTestName;                 //@synthesize hasTestName=_hasTestName - In the implementation block
@property (assign,nonatomic) int testType;                     //@synthesize testType=_testType - In the implementation block
@property (assign,nonatomic) BOOL hasTestType; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTestName:(NSString *)arg1 ;
-(BOOL)hasTestName;
-(NSString *)testName;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setTestType:(int)arg1 ;
-(int)testType;
-(BOOL)hasTestType;
-(void)setHasTestType:(BOOL)arg1 ;
-(void)setHasTestName:(BOOL)arg1 ;
@end

