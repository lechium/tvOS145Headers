/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SISchemaInstrumentationMessage.h>

@class NSString, NSData;

@interface SISchemaPNRFatalErrorInfo : SISchemaInstrumentationMessage {

	NSString* _errorDomain;
	NSString* _errorCode;
	BOOL _hasErrorDomain;
	BOOL _hasErrorCode;

}

@property (nonatomic,copy) NSString * errorDomain;              //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorDomain;               //@synthesize hasErrorDomain=_hasErrorDomain - In the implementation block
@property (nonatomic,copy) NSString * errorCode;                //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode;                 //@synthesize hasErrorCode=_hasErrorCode - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(NSString *)errorDomain;
-(NSString *)errorCode;
-(BOOL)hasErrorDomain;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setHasErrorDomain:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
@end

