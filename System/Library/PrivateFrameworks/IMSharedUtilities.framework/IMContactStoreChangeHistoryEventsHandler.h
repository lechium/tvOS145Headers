/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNChangeHistoryEventVisitor.h>

@class NSString;

@interface IMContactStoreChangeHistoryEventsHandler : NSObject <CNChangeHistoryEventVisitor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)visitDropEverythingEvent:(id)arg1 ;
-(void)visitAddContactEvent:(id)arg1 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(void)processContactChangeEventForContact:(id)arg1 ofEventType:(unsigned long long)arg2 ;
-(void)processChangeEventForContact:(id)arg1 contactFromCache:(id)arg2 eventType:(unsigned long long)arg3 handleID:(id)arg4 ;
-(void)postNotificationForCNContact:(id)arg1 eventType:(unsigned long long)arg2 handleIDsToProcess:(id)arg3 ;
@end

