/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>

@interface WFAddNewEventAction : WFAction
+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
+(id)calendarFromDescriptor:(id)arg1 ;
+(id)eventFromParameters:(id)arg1 requiringFullySpecifiedEvent:(BOOL)arg2 error:(id*)arg3 ;
+(double)relativeOffsetFromTimeString:(id)arg1 ;
+(id)endDateByCorrectingDate:(id)arg1 withStartDate:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)targetContentAttribution;
-(void)initializeParameters;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(void)runWithoutUI;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(void)updateCalendars;
-(id)currentSelectedCalendar;
-(void)updateForcesAllDayFlags;
@end
