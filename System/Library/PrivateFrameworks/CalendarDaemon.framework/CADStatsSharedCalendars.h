/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarDaemon/CADStatCollector.h>

@class NSMutableDictionary;

@interface CADStatsSharedCalendars : CADStatCollector {

	NSMutableDictionary* calendarInfos;

}
+(id)eventName;
-(void)prepareWithContext:(id)arg1 ;
-(BOOL)wantsCalendars;
-(void)processCalendars:(id)arg1 inStore:(void*)arg2 ;
-(id)eventDictionaries;
@end

