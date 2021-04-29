/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <C2/C2-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface C2MPServerInfo : PBCodable <NSCopying> {

	NSString* _partition;
	NSString* _serviceBuild;
	NSString* _serviceInstance;
	NSString* _serviceName;

}

@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                  //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasPartition; 
@property (nonatomic,retain) NSString * partition;                    //@synthesize partition=_partition - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceBuild; 
@property (nonatomic,retain) NSString * serviceBuild;                 //@synthesize serviceBuild=_serviceBuild - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceInstance; 
@property (nonatomic,retain) NSString * serviceInstance;              //@synthesize serviceInstance=_serviceInstance - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setPartition:(NSString *)arg1 ;
-(NSString *)partition;
-(id)dictionaryRepresentation;
-(NSString *)serviceName;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(BOOL)hasServiceName;
-(void)setServiceBuild:(NSString *)arg1 ;
-(void)setServiceInstance:(NSString *)arg1 ;
-(BOOL)hasPartition;
-(BOOL)hasServiceBuild;
-(BOOL)hasServiceInstance;
-(NSString *)serviceBuild;
-(NSString *)serviceInstance;
@end

