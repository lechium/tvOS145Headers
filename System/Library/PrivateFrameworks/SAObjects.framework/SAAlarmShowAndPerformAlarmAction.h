/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SAAlarmShowAndPerformAlarmAction : SABaseClientBoundCommand

@property (nonatomic,retain) id<SAAlarmAlarmAction> alarmAction; 
+(id)showAndPerformAlarmAction;
+(id)showAndPerformAlarmActionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id<SAAlarmAlarmAction>)alarmAction;
-(void)setAlarmAction:(id<SAAlarmAlarmAction>)arg1 ;
@end

