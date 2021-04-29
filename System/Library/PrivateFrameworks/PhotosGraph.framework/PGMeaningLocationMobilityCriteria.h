/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGMeaningCriteria.h>

@class NSString;

@interface PGMeaningLocationMobilityCriteria : NSObject <PGMeaningCriteria> {

	unsigned long long _locationMobilityType;
	NSString* _locationMobilityLabel;

}

@property (assign,nonatomic) unsigned long long locationMobilityType;              //@synthesize locationMobilityType=_locationMobilityType - In the implementation block
@property (nonatomic,retain) NSString * locationMobilityLabel;                     //@synthesize locationMobilityLabel=_locationMobilityLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg1 ;
-(NSString *)description;
-(BOOL)isValid;
-(BOOL)passesForMomentNode:(id)arg1 ;
-(void)setLocationMobilityLabel:(NSString *)arg1 ;
-(void)setLocationMobilityType:(unsigned long long)arg1 ;
-(unsigned long long)locationMobilityType;
-(NSString *)locationMobilityLabel;
@end

