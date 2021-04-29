/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface ADClientSettingsRequest : PBRequest <NSCopying> {

	NSMutableArray* _currentSearchLandingAdsSettingParams;
	NSMutableArray* _currentSettingParams;
	NSString* _iAdIDString;

}

@property (nonatomic,readonly) BOOL hasIAdIDString; 
@property (nonatomic,retain) NSString * iAdIDString;                                             //@synthesize iAdIDString=_iAdIDString - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentSettingParams;                              //@synthesize currentSettingParams=_currentSettingParams - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentSearchLandingAdsSettingParams;              //@synthesize currentSearchLandingAdsSettingParams=_currentSearchLandingAdsSettingParams - In the implementation block
+(id)options;
+(Class)currentSettingParamsType;
+(Class)currentSearchLandingAdsSettingParamsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addCurrentSettingParams:(id)arg1 ;
-(void)addCurrentSearchLandingAdsSettingParams:(id)arg1 ;
-(void)setIAdIDString:(NSString *)arg1 ;
-(unsigned long long)currentSettingParamsCount;
-(void)clearCurrentSettingParams;
-(id)currentSettingParamsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentSearchLandingAdsSettingParamsCount;
-(void)clearCurrentSearchLandingAdsSettingParams;
-(id)currentSearchLandingAdsSettingParamsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasIAdIDString;
-(NSString *)iAdIDString;
-(NSMutableArray *)currentSettingParams;
-(void)setCurrentSettingParams:(NSMutableArray *)arg1 ;
-(NSMutableArray *)currentSearchLandingAdsSettingParams;
-(void)setCurrentSearchLandingAdsSettingParams:(NSMutableArray *)arg1 ;
@end

