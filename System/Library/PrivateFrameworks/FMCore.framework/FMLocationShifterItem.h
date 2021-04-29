/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <FMCore/FMCore-Structs.h>
@class NSDate, NSError;

@interface FMLocationShifterItem : NSObject {

	BOOL _shifted;
	double _accuracy;
	NSDate* _timestamp;
	id _context;
	NSError* _error;
	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double accuracy;                                //@synthesize accuracy=_accuracy - In the implementation block
@property (assign,nonatomic) BOOL shifted;                                   //@synthesize shifted=_shifted - In the implementation block
@property (nonatomic,retain) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) id context;                                   //@synthesize context=_context - In the implementation block
-(id)description;
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)context;
-(NSDate *)timestamp;
-(CLLocationCoordinate2D)coordinate;
-(double)accuracy;
-(void)setAccuracy:(double)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(BOOL)shifted;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 accuracy:(double)arg2 timestamp:(id)arg3 context:(id)arg4 ;
-(void)setShifted:(BOOL)arg1 ;
@end

