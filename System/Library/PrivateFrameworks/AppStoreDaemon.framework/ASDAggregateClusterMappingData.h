/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASDAggregateClusterMappingData : PBCodable <NSCopying> {

	SCD_Struct_AS3* _clusterAppCounts;
	SCD_Struct_AS3* _clusterIDs;
	SCD_Struct_AS3* _clusterVersions;
	SCD_Struct_AS3* _weightedAppForgroundUsages;
	SCD_Struct_AS3* _weightedAppLaunches;
	int _encodingVersion;

}

@property (assign,nonatomic) int encodingVersion;                                               //@synthesize encodingVersion=_encodingVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long clusterIDsCount; 
@property (nonatomic,readonly) int* clusterIDs; 
@property (nonatomic,readonly) unsigned long long clusterVersionsCount; 
@property (nonatomic,readonly) int* clusterVersions; 
@property (nonatomic,readonly) unsigned long long clusterAppCountsCount; 
@property (nonatomic,readonly) int* clusterAppCounts; 
@property (nonatomic,readonly) unsigned long long weightedAppLaunchesCount; 
@property (nonatomic,readonly) int* weightedAppLaunches; 
@property (nonatomic,readonly) unsigned long long weightedAppForgroundUsagesCount; 
@property (nonatomic,readonly) int* weightedAppForgroundUsages; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)clusterIDsCount;
-(void)clearClusterIDs;
-(int)clusterIDAtIndex:(unsigned long long)arg1 ;
-(void)addClusterID:(int)arg1 ;
-(unsigned long long)clusterVersionsCount;
-(void)clearClusterVersions;
-(int)clusterVersionAtIndex:(unsigned long long)arg1 ;
-(void)addClusterVersion:(int)arg1 ;
-(unsigned long long)clusterAppCountsCount;
-(void)clearClusterAppCounts;
-(int)clusterAppCountAtIndex:(unsigned long long)arg1 ;
-(void)addClusterAppCount:(int)arg1 ;
-(unsigned long long)weightedAppLaunchesCount;
-(void)clearWeightedAppLaunches;
-(int)weightedAppLaunchesAtIndex:(unsigned long long)arg1 ;
-(void)addWeightedAppLaunches:(int)arg1 ;
-(unsigned long long)weightedAppForgroundUsagesCount;
-(void)clearWeightedAppForgroundUsages;
-(int)weightedAppForgroundUsageAtIndex:(unsigned long long)arg1 ;
-(void)addWeightedAppForgroundUsage:(int)arg1 ;
-(int*)clusterIDs;
-(void)setClusterIDs:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)clusterVersions;
-(void)setClusterVersions:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)clusterAppCounts;
-(void)setClusterAppCounts:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)weightedAppLaunches;
-(void)setWeightedAppLaunches:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)weightedAppForgroundUsages;
-(void)setWeightedAppForgroundUsages:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)encodingVersion;
-(void)setEncodingVersion:(int)arg1 ;
@end

