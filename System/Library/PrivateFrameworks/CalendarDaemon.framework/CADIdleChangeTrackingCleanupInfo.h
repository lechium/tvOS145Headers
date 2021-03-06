/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CADIdleChangeTrackingCleanupInfo : NSObject {

	int _numberOfChanges;
	double _languishPeriod;

}

@property (assign,nonatomic) double languishPeriod;              //@synthesize languishPeriod=_languishPeriod - In the implementation block
@property (assign,nonatomic) int numberOfChanges;                //@synthesize numberOfChanges=_numberOfChanges - In the implementation block
+(id)serverIdleChangeTrackingCleanupInfo;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(double)languishPeriod;
-(int)numberOfChanges;
-(void)setLanguishPeriod:(double)arg1 ;
-(void)setNumberOfChanges:(int)arg1 ;
-(id)initWithLanguishPeriod:(double)arg1 numberOfChanges:(int)arg2 ;
-(BOOL)isEqualToInfo:(id)arg1 ;
@end

