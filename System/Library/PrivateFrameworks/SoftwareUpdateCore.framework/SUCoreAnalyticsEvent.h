/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject, NSDictionary;

@interface SUCoreAnalyticsEvent : NSObject {

	NSString* _eventName;
	NSMutableDictionary* _mutableEventPayload;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSString* _eventUUID;

}

@property (nonatomic,retain,readonly) NSString * eventName;                     //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,retain) NSString * eventUUID;                              //@synthesize eventUUID=_eventUUID - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * eventPayload; 
-(id)description;
-(id)init;
-(NSString *)eventName;
-(id)initWithEventName:(id)arg1 ;
-(NSString *)eventUUID;
-(NSDictionary *)eventPayload;
-(void)_queue_setEventPayloadEntry:(id)arg1 value:(id)arg2 ;
-(void)_queue_setEventPayloadEntryToNull:(id)arg1 ;
-(void)_queue_removeEventPayloadEntry:(id)arg1 ;
-(void)setEventPayloadEntry:(id)arg1 value:(id)arg2 ;
-(void)setEventPayloadEntryToNull:(id)arg1 ;
-(void)removeEventPayloadEntry:(id)arg1 ;
-(void)setEventUUID:(NSString *)arg1 ;
@end
