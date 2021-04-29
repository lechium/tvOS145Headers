/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface MRExternalDeviceMessageMetricsEntry : NSObject {

	unsigned long long _avg;
	unsigned long long _min;
	unsigned long long _max;
	unsigned long long _total;
	NSMutableArray* _values;

}

@property (assign,nonatomic) unsigned long long avg;                //@synthesize avg=_avg - In the implementation block
@property (assign,nonatomic) unsigned long long min;                //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) unsigned long long max;                //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) unsigned long long total;              //@synthesize total=_total - In the implementation block
@property (nonatomic,retain) NSMutableArray * values;               //@synthesize values=_values - In the implementation block
-(id)description;
-(id)init;
-(NSMutableArray *)values;
-(void)setMax:(unsigned long long)arg1 ;
-(unsigned long long)max;
-(unsigned long long)min;
-(void)setValues:(NSMutableArray *)arg1 ;
-(void)setMin:(unsigned long long)arg1 ;
-(unsigned long long)total;
-(void)updateWithValue:(unsigned long long)arg1 ;
-(unsigned long long)avg;
-(void)setAvg:(unsigned long long)arg1 ;
-(void)setTotal:(unsigned long long)arg1 ;
@end

