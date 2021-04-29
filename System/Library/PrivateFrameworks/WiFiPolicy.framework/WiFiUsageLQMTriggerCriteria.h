/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSPredicate, NSDate, NSString;

@interface WiFiUsageLQMTriggerCriteria : NSObject <NSCopying> {

	BOOL _valid;
	BOOL _matched;
	unsigned long long _type;
	NSPredicate* _predicate;
	NSPredicate* _requiredFieldsValid;
	NSDate* _firstTriggered;
	NSDate* _lastTriggered;
	NSDate* _currentSample;
	NSString* _bssid;
	NSString* _filterCriteria;

}

@property (assign,nonatomic) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                        //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSPredicate * requiredFieldsValid;              //@synthesize requiredFieldsValid=_requiredFieldsValid - In the implementation block
@property (nonatomic,retain) NSString * filterCriteria;                      //@synthesize filterCriteria=_filterCriteria - In the implementation block
@property (assign,nonatomic) BOOL valid;                                     //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic) BOOL matched;                                   //@synthesize matched=_matched - In the implementation block
@property (nonatomic,retain) NSDate * firstTriggered;                        //@synthesize firstTriggered=_firstTriggered - In the implementation block
@property (nonatomic,retain) NSDate * lastTriggered;                         //@synthesize lastTriggered=_lastTriggered - In the implementation block
@property (nonatomic,retain) NSDate * currentSample;                         //@synthesize currentSample=_currentSample - In the implementation block
@property (nonatomic,retain) NSString * bssid;                               //@synthesize bssid=_bssid - In the implementation block
+(id)parseCriteria:(id)arg1 intoRequiredFields:(id)arg2 andFeatures:(id)arg3 forFields:(id)arg4 withType:(id)arg5 isFilter:(BOOL)arg6 ;
+(id)dataTriggeredTypes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(BOOL)valid;
-(unsigned long long)type;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)setValid:(BOOL)arg1 ;
-(void)setBssid:(NSString *)arg1 ;
-(NSString *)bssid;
-(void)setMatched:(BOOL)arg1 ;
-(BOOL)matched;
-(NSDate *)firstTriggered;
-(NSDate *)currentSample;
-(NSDate *)lastTriggered;
-(id)shortPredicateNoSpaces;
-(id)initWith:(id)arg1 forFields:(id)arg2 andFeatures:(id)arg3 ;
-(void)setFilterCriteria:(NSString *)arg1 ;
-(NSString *)filterCriteria;
-(id)shortPredicate;
-(void)setRequiredFieldsValid:(NSPredicate *)arg1 ;
-(void)setFirstTriggered:(NSDate *)arg1 ;
-(void)setLastTriggered:(NSDate *)arg1 ;
-(void)setCurrentSample:(NSDate *)arg1 ;
-(id)typeAsString;
-(NSPredicate *)requiredFieldsValid;
@end

