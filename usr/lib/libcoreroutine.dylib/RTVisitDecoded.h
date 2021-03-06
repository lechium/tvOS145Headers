/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSNumber;

@interface RTVisitDecoded : NSObject {

	double _logProbability;
	NSDate* _entryDate;
	NSDate* _exitDate;

}

@property (assign,nonatomic) double logProbability;                //@synthesize logProbability=_logProbability - In the implementation block
@property (nonatomic,retain) NSDate * entryDate;                   //@synthesize entryDate=_entryDate - In the implementation block
@property (nonatomic,retain) NSDate * exitDate;                    //@synthesize exitDate=_exitDate - In the implementation block
@property (nonatomic,readonly) NSNumber * outputType; 
-(id)description;
-(id)init;
-(NSDate *)entryDate;
-(NSDate *)exitDate;
-(void)setEntryDate:(NSDate *)arg1 ;
-(NSNumber *)outputType;
-(void)setExitDate:(NSDate *)arg1 ;
-(double)logProbability;
-(BOOL)noVisit;
-(id)initWithEntryDate:(id)arg1 exitDate:(id)arg2 logProbability:(double)arg3 ;
-(BOOL)partialVisit;
-(BOOL)completeVisit;
-(void)setLogProbability:(double)arg1 ;
@end

