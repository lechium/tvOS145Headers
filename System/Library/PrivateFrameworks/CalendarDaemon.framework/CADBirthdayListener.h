/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CalBirthdayListener;
@interface CADBirthdayListener : NSObject {

	id<CalBirthdayListener> _ekBirthdayListener;
	Class _listenerClass;

}

@property (nonatomic,retain) id<CalBirthdayListener> ekBirthdayListener;              //@synthesize ekBirthdayListener=_ekBirthdayListener - In the implementation block
@property (nonatomic,retain) Class listenerClass;                                     //@synthesize listenerClass=_listenerClass - In the implementation block
+(void)start;
+(id)sharedListener;
+(void)setBirthdayCalendarEnabled:(BOOL)arg1 ;
+(BOOL)birthdayCalendarEnabled;
-(id)init;
-(id<CalBirthdayListener>)ekBirthdayListener;
-(void)setBirthdayCalendarEnabled:(BOOL)arg1 ;
-(BOOL)birthdayCalendarEnabled;
-(void)setEkBirthdayListener:(id<CalBirthdayListener>)arg1 ;
-(Class)listenerClass;
-(void)setListenerClass:(Class)arg1 ;
@end

