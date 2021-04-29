/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iCalendar/ICSComponent.h>

@class ICSDateTimeUTCValue, NSArray, NSString, ICSTrigger, NSData, ICSStructuredLocation;

@interface ICSAlarm : ICSComponent

@property (assign,nonatomic) int action; 
@property (nonatomic,retain) ICSDateTimeUTCValue * acknowledged; 
@property (retain) NSArray * attach; 
@property (retain) NSArray * attendee; 
@property (retain) NSString * description; 
@property (retain) NSString * summary; 
@property (retain) ICSTrigger * trigger; 
@property (retain) NSString * uid; 
@property (nonatomic,retain) NSString * relatedTo; 
@property (nonatomic,retain) NSData * bookmark; 
@property (nonatomic,retain) NSString * x_wr_alarmuid; 
@property (nonatomic,retain) NSString * x_apple_proximity; 
@property (assign,nonatomic) BOOL x_apple_default_alarm; 
@property (assign,nonatomic) BOOL x_apple_local_default_alarm; 
@property (assign,nonatomic) BOOL x_apple_travel_default_alarm; 
@property (retain) ICSStructuredLocation * x_apple_structured_location; 
+(id)name;
+(int)actionFromICSString:(id)arg1 ;
+(id)ICSStringFromAction:(int)arg1 ;
+(id)parseableDocumentFromICS:(id)arg1 ;
+(id)createNoneAlarm;
-(int)action;
-(void)setAction:(int)arg1 ;
-(ICSDateTimeUTCValue *)acknowledged;
-(void)setAcknowledged:(ICSDateTimeUTCValue *)arg1 ;
-(NSString *)relatedTo;
-(void)setRelatedTo:(NSString *)arg1 ;
-(void)fixAlarm;
-(NSString *)x_wr_alarmuid;
-(NSData *)bookmark;
-(BOOL)isNoneAlarm;
-(BOOL)x_apple_default_alarm;
-(NSString *)x_apple_proximity;
-(void)setX_wr_alarmuid:(NSString *)arg1 ;
-(void)setX_apple_proximity:(NSString *)arg1 ;
-(void)setX_apple_default_alarm:(BOOL)arg1 ;
-(void)setX_apple_travel_default_alarm:(BOOL)arg1 ;
-(BOOL)x_apple_travel_default_alarm;
-(void)setX_apple_local_default_alarm:(BOOL)arg1 ;
-(BOOL)x_apple_local_default_alarm;
-(void)setBookmark:(NSData *)arg1 ;
@end

