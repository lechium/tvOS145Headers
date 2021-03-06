/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGMeaningCriteria.h>

@class NSArray, NSString;

@interface PGMeaningPartsOfDayCriteria : NSObject <PGMeaningCriteria> {

	NSArray* _positiveSignificantPartsOfDay;
	NSArray* _positiveSignificantPartsOfDayStrings;
	NSArray* _negativeSignificantPartsOfDay;
	NSArray* _negativeSignificantPartsOfDayStrings;
	NSArray* _positivePartsOfDay;
	NSArray* _positivePartsOfDayStrings;
	NSArray* _negativePartsOfDay;
	NSArray* _negativePartsOfDayStrings;

}

@property (nonatomic,retain) NSArray * positiveSignificantPartsOfDay;                     //@synthesize positiveSignificantPartsOfDay=_positiveSignificantPartsOfDay - In the implementation block
@property (nonatomic,retain) NSArray * positiveSignificantPartsOfDayStrings;              //@synthesize positiveSignificantPartsOfDayStrings=_positiveSignificantPartsOfDayStrings - In the implementation block
@property (nonatomic,retain) NSArray * negativeSignificantPartsOfDay;                     //@synthesize negativeSignificantPartsOfDay=_negativeSignificantPartsOfDay - In the implementation block
@property (nonatomic,retain) NSArray * negativeSignificantPartsOfDayStrings;              //@synthesize negativeSignificantPartsOfDayStrings=_negativeSignificantPartsOfDayStrings - In the implementation block
@property (nonatomic,retain) NSArray * positivePartsOfDay;                                //@synthesize positivePartsOfDay=_positivePartsOfDay - In the implementation block
@property (nonatomic,retain) NSArray * positivePartsOfDayStrings;                         //@synthesize positivePartsOfDayStrings=_positivePartsOfDayStrings - In the implementation block
@property (nonatomic,retain) NSArray * negativePartsOfDay;                                //@synthesize negativePartsOfDay=_negativePartsOfDay - In the implementation block
@property (nonatomic,retain) NSArray * negativePartsOfDayStrings;                         //@synthesize negativePartsOfDayStrings=_negativePartsOfDayStrings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg1 ;
+(id)_partsOfDayAsNumbersFromStrings:(id)arg1 ;
+(id)_partsOfDayNumbersByString;
-(NSString *)description;
-(BOOL)isValid;
-(BOOL)passesForMomentNode:(id)arg1 ;
-(void)setNegativePartsOfDay:(NSArray *)arg1 ;
-(void)setNegativePartsOfDayStrings:(NSArray *)arg1 ;
-(void)setPositivePartsOfDay:(NSArray *)arg1 ;
-(void)setPositivePartsOfDayStrings:(NSArray *)arg1 ;
-(void)setNegativeSignificantPartsOfDay:(NSArray *)arg1 ;
-(void)setNegativeSignificantPartsOfDayStrings:(NSArray *)arg1 ;
-(void)setPositiveSignificantPartsOfDay:(NSArray *)arg1 ;
-(void)setPositiveSignificantPartsOfDayStrings:(NSArray *)arg1 ;
-(BOOL)_passesPartsOfDayWithMomentNodePartsOfDay:(unsigned long long)arg1 positivePartsOfDay:(id)arg2 negativePartsOfDay:(id)arg3 ;
-(NSArray *)positiveSignificantPartsOfDay;
-(NSArray *)positiveSignificantPartsOfDayStrings;
-(NSArray *)negativeSignificantPartsOfDay;
-(NSArray *)negativeSignificantPartsOfDayStrings;
-(NSArray *)positivePartsOfDay;
-(NSArray *)positivePartsOfDayStrings;
-(NSArray *)negativePartsOfDay;
-(NSArray *)negativePartsOfDayStrings;
@end

