/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSUserDefaults;

@interface VCMetricCheckIn : NSObject {

	NSDate* _currentDate;
	long long _mode;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,readonly) long long mode;                               //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,copy,readonly) NSDate * currentDate;                    //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * checkInDate; 
@property (nonatomic,copy,readonly) NSDate * intervalStartDate; 
+(id)recentCheckInWithMode:(long long)arg1 ;
-(id)calendar;
-(long long)mode;
-(NSUserDefaults *)userDefaults;
-(NSDate *)currentDate;
-(id)initWithCurrentDate:(id)arg1 mode:(long long)arg2 defaults:(id)arg3 ;
-(BOOL)isCheckInAllowed;
-(void)updateCheckInToNow;
-(NSDate *)checkInDate;
-(NSDate *)intervalStartDate;
-(id)checkInKey;
@end
