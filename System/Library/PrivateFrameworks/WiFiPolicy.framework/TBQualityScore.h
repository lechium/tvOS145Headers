/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TBScore.h>

@class NSString;

@interface TBQualityScore : NSObject <TBScore> {

	unsigned long long _score;
	NSString* _typeDescription;

}

@property (nonatomic,retain) NSString * typeDescription;              //@synthesize typeDescription=_typeDescription - In the implementation block
@property (assign,nonatomic) unsigned long long score;                //@synthesize score=_score - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)qualityScoreWithValue:(unsigned long long)arg1 ;
-(unsigned long long)score;
-(id)initWithValue:(unsigned long long)arg1 ;
-(void)setScore:(unsigned long long)arg1 ;
-(NSString *)typeDescription;
-(void)setTypeDescription:(NSString *)arg1 ;
@end

