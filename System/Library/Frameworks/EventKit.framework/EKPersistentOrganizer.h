/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentParticipant.h>

@class NSString;

@interface EKPersistentOrganizer : EKPersistentParticipant

@property (nonatomic,retain) NSString * displayNameRaw; 
@property (nonatomic,retain) NSString * emailAddress; 
@property (nonatomic,retain) NSString * URL; 
@property (assign,nonatomic) BOOL isCurrentUser; 
+(id)defaultPropertiesToLoad;
+(id)relations;
+(Class)meltedClass;
+(id)organizerWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setOwner:(id)arg1 ;
-(id)owner;
-(void)setIsCurrentUser:(BOOL)arg1 ;
-(BOOL)isCurrentUser;
-(int)entityType;
-(long long)scheduleAgent;
-(void)setScheduleAgent:(long long)arg1 ;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4 ;
@end

