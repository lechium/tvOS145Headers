/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Speech.framework/Speech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Speech/Speech-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SFTranscription : NSObject <NSCopying, NSSecureCoding> {

	NSString* _formattedString;
	NSArray* _segments;
	double _speakingRate;
	double _averagePauseDuration;

}

@property (nonatomic,copy,readonly) NSString * formattedString;              //@synthesize formattedString=_formattedString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * segments;                      //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) double speakingRate;                          //@synthesize speakingRate=_speakingRate - In the implementation block
@property (nonatomic,readonly) double averagePauseDuration;                  //@synthesize averagePauseDuration=_averagePauseDuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)segments;
-(NSString *)formattedString;
-(double)speakingRate;
-(id)_initWithSegments:(id)arg1 formattedString:(id)arg2 speakingRate:(double)arg3 averagePauseDuration:(double)arg4 ;
-(double)averagePauseDuration;
@end

