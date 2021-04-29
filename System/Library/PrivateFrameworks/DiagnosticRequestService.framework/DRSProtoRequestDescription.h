/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticRequestService/DiagnosticRequestService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface DRSProtoRequestDescription : PBCodable <NSCopying> {

	unsigned long long _requestTime;
	NSString* _build;
	NSData* _contextDictionaryData;
	NSString* _issueCategory;
	NSString* _teamId;
	SCD_Struct_DR1 _has;

}

@property (nonatomic,readonly) BOOL hasTeamId; 
@property (nonatomic,retain) NSString * teamId;                            //@synthesize teamId=_teamId - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueCategory; 
@property (nonatomic,retain) NSString * issueCategory;                     //@synthesize issueCategory=_issueCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasContextDictionaryData; 
@property (nonatomic,retain) NSData * contextDictionaryData;               //@synthesize contextDictionaryData=_contextDictionaryData - In the implementation block
@property (assign,nonatomic) BOOL hasRequestTime; 
@property (assign,nonatomic) unsigned long long requestTime;               //@synthesize requestTime=_requestTime - In the implementation block
@property (nonatomic,readonly) BOOL hasBuild; 
@property (nonatomic,retain) NSString * build;                             //@synthesize build=_build - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)build;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequestTime:(unsigned long long)arg1 ;
-(unsigned long long)requestTime;
-(BOOL)hasRequestTime;
-(void)setHasRequestTime:(BOOL)arg1 ;
-(BOOL)hasBuild;
-(void)setBuild:(NSString *)arg1 ;
-(NSString *)issueCategory;
-(void)setIssueCategory:(NSString *)arg1 ;
-(NSData *)contextDictionaryData;
-(void)setContextDictionaryData:(NSData *)arg1 ;
-(void)setTeamId:(NSString *)arg1 ;
-(BOOL)hasTeamId;
-(BOOL)hasIssueCategory;
-(BOOL)hasContextDictionaryData;
-(NSString *)teamId;
@end

