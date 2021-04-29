/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, NSData;

@interface SISchemaRedactableString : SISchemaInstrumentationMessage {

	int _redactionState;
	NSString* _value;
	BOOL _hasRedactionState;
	BOOL _hasValue;
	unsigned long long _which_String;

}

@property (assign,nonatomic) int redactionState;                             //@synthesize redactionState=_redactionState - In the implementation block
@property (assign,nonatomic) BOOL hasRedactionState;                         //@synthesize hasRedactionState=_hasRedactionState - In the implementation block
@property (nonatomic,copy) NSString * value;                                 //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasValue;                                  //@synthesize hasValue=_hasValue - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long which_String;              //@synthesize which_String=_which_String - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasValue:(BOOL)arg1 ;
-(BOOL)hasValue;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setRedactionState:(int)arg1 ;
-(unsigned long long)which_String;
-(int)redactionState;
-(BOOL)hasRedactionState;
-(void)setHasRedactionState:(BOOL)arg1 ;
@end
