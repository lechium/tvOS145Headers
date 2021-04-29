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

@interface SISchemaVersion : SISchemaInstrumentationMessage {

	unsigned _major;
	unsigned _minor;
	unsigned _patch;
	NSString* _prerelease;
	SCD_Struct_LT1 _has;
	BOOL _hasPrerelease;

}

@property (assign,nonatomic) unsigned major;                   //@synthesize major=_major - In the implementation block
@property (assign,nonatomic) BOOL hasMajor; 
@property (assign,nonatomic) unsigned minor;                   //@synthesize minor=_minor - In the implementation block
@property (assign,nonatomic) BOOL hasMinor; 
@property (assign,nonatomic) unsigned patch;                   //@synthesize patch=_patch - In the implementation block
@property (assign,nonatomic) BOOL hasPatch; 
@property (nonatomic,copy) NSString * prerelease;              //@synthesize prerelease=_prerelease - In the implementation block
@property (assign,nonatomic) BOOL hasPrerelease;               //@synthesize hasPrerelease=_hasPrerelease - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(unsigned)major;
-(unsigned)minor;
-(NSData *)jsonData;
-(void)setMajor:(unsigned)arg1 ;
-(void)setMinor:(unsigned)arg1 ;
-(void)setPatch:(unsigned)arg1 ;
-(void)setPrerelease:(NSString *)arg1 ;
-(NSString *)prerelease;
-(unsigned)patch;
-(BOOL)hasMajor;
-(void)setHasMajor:(BOOL)arg1 ;
-(BOOL)hasMinor;
-(void)setHasMinor:(BOOL)arg1 ;
-(BOOL)hasPatch;
-(void)setHasPatch:(BOOL)arg1 ;
-(BOOL)hasPrerelease;
-(void)setHasPrerelease:(BOOL)arg1 ;
@end
