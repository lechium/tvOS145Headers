/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate;

@interface CMSwimData : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long fRecordId;
	NSUUID* fSourceId;
	NSUUID* fSessionId;
	NSDate* fStartDate;
	NSDate* fEndDate;
	unsigned long long fStrokeCount;
	double fDistance;
	double fAvgPace;
	unsigned long long fLapCount;
	long long fStrokeType;
	unsigned long long fSegment;

}

@property (nonatomic,readonly) unsigned long long recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) NSUUID * sessionId; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long strokeCount; 
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) double avgPace; 
@property (nonatomic,readonly) unsigned long long lapCount; 
@property (nonatomic,readonly) long long strokeType; 
@property (nonatomic,readonly) unsigned long long segment; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)maxSwimDataEntries;
+(id)strokeTypeName:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(double)distance;
-(NSUUID *)sessionId;
-(unsigned long long)recordId;
-(NSUUID *)sourceId;
-(id)initWithSessionId:(id)arg1 ;
-(unsigned long long)strokeCount;
-(unsigned long long)lapCount;
-(unsigned long long)segment;
-(long long)strokeType;
-(id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 sessionId:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 strokeCount:(unsigned long long)arg6 distance:(double)arg7 avgPace:(double)arg8 lapCount:(unsigned long long)arg9 strokeType:(long long)arg10 segment:(unsigned long long)arg11 ;
-(double)avgPace;
-(void)convertToSwimEntry:(CLSwimEntry*)arg1 ;
-(id)initWithSwimEntry:(const CLSwimEntry*)arg1 ;
@end

