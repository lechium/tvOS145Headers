/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CMVO2MaxClassificationData : NSObject <NSSecureCoding, NSCopying> {

	long long _biologicalSex;
	long long _ageLowerBound;
	long long _ageUpperBound;
	long long _classificationType;
	double _vo2MaxLowerBound;
	double _vo2MaxUpperBound;

}

@property (nonatomic,readonly) long long biologicalSex;                   //@synthesize biologicalSex=_biologicalSex - In the implementation block
@property (nonatomic,readonly) long long ageLowerBound;                   //@synthesize ageLowerBound=_ageLowerBound - In the implementation block
@property (nonatomic,readonly) long long ageUpperBound;                   //@synthesize ageUpperBound=_ageUpperBound - In the implementation block
@property (nonatomic,readonly) long long classificationType;              //@synthesize classificationType=_classificationType - In the implementation block
@property (nonatomic,readonly) double vo2MaxLowerBound;                   //@synthesize vo2MaxLowerBound=_vo2MaxLowerBound - In the implementation block
@property (nonatomic,readonly) double vo2MaxUpperBound;                   //@synthesize vo2MaxUpperBound=_vo2MaxUpperBound - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBiologicalSex:(long long)arg1 ageLowerBound:(long long)arg2 ageUpperBound:(long long)arg3 classificationType:(long long)arg4 vo2MaxLowerBound:(double)arg5 vo2MaxUpperBound:(double)arg6 ;
-(long long)biologicalSex;
-(long long)ageLowerBound;
-(long long)ageUpperBound;
-(long long)classificationType;
-(double)vo2MaxLowerBound;
-(double)vo2MaxUpperBound;
@end

