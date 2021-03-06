/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MNTracePlayerTimelineStreamObjectType.h>

@class NSString;

@interface MNTraceHeadingDataRow : NSObject <MNTracePlayerTimelineStreamObjectType> {

	double _timestamp;
	double _trueHeading;
	double _magneticHeading;
	double _headingAccuracy;

}

@property (nonatomic,readonly) double position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double trueHeading;                    //@synthesize trueHeading=_trueHeading - In the implementation block
@property (assign,nonatomic) double magneticHeading;                //@synthesize magneticHeading=_magneticHeading - In the implementation block
@property (assign,nonatomic) double headingAccuracy;                //@synthesize headingAccuracy=_headingAccuracy - In the implementation block
-(double)position;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(double)headingAccuracy;
-(double)magneticHeading;
-(double)trueHeading;
-(void)setTrueHeading:(double)arg1 ;
-(void)setMagneticHeading:(double)arg1 ;
-(void)setHeadingAccuracy:(double)arg1 ;
@end

