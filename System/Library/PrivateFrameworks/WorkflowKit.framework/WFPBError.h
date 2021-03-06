/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBError : PBCodable <NSCopying> {

	long long _code;
	NSString* _domain;
	NSString* _localizedDescription;
	NSString* _localizedFailureReason;

}

@property (nonatomic,retain) NSString * domain;                              //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) long long code;                                 //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedDescription; 
@property (nonatomic,retain) NSString * localizedDescription;                //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedFailureReason; 
@property (nonatomic,retain) NSString * localizedFailureReason;              //@synthesize localizedFailureReason=_localizedFailureReason - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)domain;
-(long long)code;
-(NSString *)localizedDescription;
-(NSString *)localizedFailureReason;
-(void)setDomain:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCode:(long long)arg1 ;
-(BOOL)hasLocalizedDescription;
-(BOOL)hasLocalizedFailureReason;
-(void)setLocalizedFailureReason:(NSString *)arg1 ;
@end

