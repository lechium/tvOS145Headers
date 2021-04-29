/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNTracePlayerTimelineStreamObjectType.h>

@class MNLocation, NSError, MNLocationMatchInfo, NSString;

@interface MNTraceLocationRow : NSObject <MNTracePlayerTimelineStreamObjectType> {

	double _timestamp;
	MNLocation* _location;
	NSError* _error;
	MNLocationMatchInfo* _matchInfo;
	double _correctedCourse;
	long long _locationEventType;
	unsigned long long _originalMatchType;
	SCD_Struct_MN6 _correctedCoordinate;

}

@property (nonatomic,readonly) double position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) MNLocation * location;                             //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) MNLocationMatchInfo * matchInfo;                   //@synthesize matchInfo=_matchInfo - In the implementation block
@property (assign,nonatomic) SCD_Struct_MN6 correctedCoordinate;                //@synthesize correctedCoordinate=_correctedCoordinate - In the implementation block
@property (assign,nonatomic) double correctedCourse;                            //@synthesize correctedCourse=_correctedCourse - In the implementation block
@property (assign,nonatomic) long long locationEventType;                       //@synthesize locationEventType=_locationEventType - In the implementation block
@property (assign,nonatomic) unsigned long long originalMatchType;              //@synthesize originalMatchType=_originalMatchType - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(double)position;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(MNLocation *)location;
-(void)setLocation:(MNLocation *)arg1 ;
-(SCD_Struct_MN6)correctedCoordinate;
-(void)setCorrectedCoordinate:(SCD_Struct_MN6)arg1 ;
-(MNLocationMatchInfo *)matchInfo;
-(void)setMatchInfo:(MNLocationMatchInfo *)arg1 ;
-(double)correctedCourse;
-(void)setCorrectedCourse:(double)arg1 ;
-(long long)locationEventType;
-(void)setLocationEventType:(long long)arg1 ;
-(unsigned long long)originalMatchType;
-(void)setOriginalMatchType:(unsigned long long)arg1 ;
@end

