/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricsKit/MTObject.h>

@class NSArray, NSDictionary, MTPromise, MTCallerSuppliedFields, NSMutableArray, NSMutableDictionary;

@interface MTMetricsData : MTObject {

	BOOL _anonymous;
	NSArray* _registeredEventData;
	NSDictionary* _baseFields;
	NSArray* _additionalBaseData;
	NSDictionary* _eventSpecificFields;
	NSArray* _additionalEventData;
	MTPromise* _configBaseFields;
	MTCallerSuppliedFields* _callerSuppliedFields;
	NSMutableArray* _additionalData;
	NSMutableDictionary* _performanceData;
	NSMutableArray* _postProcessingBlocks;

}

@property (nonatomic,retain) NSArray * registeredEventData;                                       //@synthesize registeredEventData=_registeredEventData - In the implementation block
@property (nonatomic,retain) NSDictionary * baseFields;                                           //@synthesize baseFields=_baseFields - In the implementation block
@property (nonatomic,retain) NSArray * additionalBaseData;                                        //@synthesize additionalBaseData=_additionalBaseData - In the implementation block
@property (nonatomic,retain) NSDictionary * eventSpecificFields;                                  //@synthesize eventSpecificFields=_eventSpecificFields - In the implementation block
@property (nonatomic,retain) NSArray * additionalEventData;                                       //@synthesize additionalEventData=_additionalEventData - In the implementation block
@property (nonatomic,retain) MTPromise * configBaseFields;                                        //@synthesize configBaseFields=_configBaseFields - In the implementation block
@property (nonatomic,retain) MTCallerSuppliedFields * callerSuppliedFields;                       //@synthesize callerSuppliedFields=_callerSuppliedFields - In the implementation block
@property (nonatomic,retain) NSMutableArray * additionalData;                                     //@synthesize additionalData=_additionalData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * performanceData;                               //@synthesize performanceData=_performanceData - In the implementation block
@property (nonatomic,retain) NSMutableArray * postProcessingBlocks;                               //@synthesize postProcessingBlocks=_postProcessingBlocks - In the implementation block
@property (assign,setter=setAnonymous:,getter=isAnonymous,nonatomic) BOOL anonymous;              //@synthesize anonymous=_anonymous - In the implementation block
-(id)debugDescription;
-(id)toDictionary;
-(id)recordEvent;
-(void)setAnonymous:(BOOL)arg1 ;
-(BOOL)isAnonymous;
-(void)addFields:(id)arg1 ;
-(NSMutableArray *)additionalData;
-(void)setAdditionalData:(NSMutableArray *)arg1 ;
-(void)addFieldsWithDictionary:(id)arg1 ;
-(void)addFieldsWithPromise:(id)arg1 ;
-(id)userAndClientIDFields;
-(void)addPostProcessingBlock:(/*^block*/id)arg1 ;
-(id)getAdditionalData;
-(id)getPostProcessingBlocks;
-(NSArray *)registeredEventData;
-(NSDictionary *)baseFields;
-(NSArray *)additionalBaseData;
-(NSDictionary *)eventSpecificFields;
-(NSArray *)additionalEventData;
-(MTPromise *)configBaseFields;
-(MTCallerSuppliedFields *)callerSuppliedFields;
-(id)composeFieldsMaps;
-(NSMutableArray *)postProcessingBlocks;
-(void)cancelUnfinishedPromisedEventData;
-(NSMutableDictionary *)performanceData;
-(void)addPostProcessingBlocks:(id)arg1 ;
-(void)setRegisteredEventData:(NSArray *)arg1 ;
-(void)setBaseFields:(NSDictionary *)arg1 ;
-(void)setAdditionalBaseData:(NSArray *)arg1 ;
-(void)setEventSpecificFields:(NSDictionary *)arg1 ;
-(void)setAdditionalEventData:(NSArray *)arg1 ;
-(void)setConfigBaseFields:(MTPromise *)arg1 ;
-(void)setCallerSuppliedFields:(MTCallerSuppliedFields *)arg1 ;
-(void)setPerformanceData:(NSMutableDictionary *)arg1 ;
-(void)setPostProcessingBlocks:(NSMutableArray *)arg1 ;
@end

